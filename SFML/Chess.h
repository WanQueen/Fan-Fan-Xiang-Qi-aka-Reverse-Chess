#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace sf;

#define GRID_SIZE 110
#define PIECE_EDGE_LENTH 100
#define ORIGIN_GRID_CENTER_POINT_X 151
#define ORIGIN_GRID_CENTER_POINT_Y 146
#define ORIGIN_GRID_LEFT_UP_POINT_X 96.5
#define ORIGIN_GRID_LEFT_UP_POINT_Y 91.5
#define WORD_RIGHT_X 373.3
#define WORD_RIGHT_Y 30.7
#define DEATH_PIECE_SCALE 1.5

typedef enum CHESS_TYPE
{
	c_GENERAL = 100000,
	c_GUARD = 10000,
	c_MINISTER = 1000,
	c_CHARIOT = 100,
	c_HORSE = 10,
	c_PAWN = 1,
	c_CANNON = 0
};

typedef enum CHESS_BLOC
{
	c_RED,
	c_BLACK
};

typedef struct BLOC_WITH_TYPE
{
	int bloc;
	int type;
}bloc_with_type;

typedef struct BLOC_PRICE
{
	int blocPrice;
	int blocCannonNum;
}bloc_price;

typedef struct FOR_INIT 
{
	Vector2i pos[32] = { {0,0}, {1,0}, {2,0}, {3,0}, {4,0}, {5,0}, {6,0}, {7,0},
						 {0,1}, {1,1}, {2,1}, {3,1}, {4,1}, {5,1}, {6,1}, {7,1},
						 {0,2}, {1,2}, {2,2}, {3,2}, {4,2}, {5,2}, {6,2}, {7,2}, 
						 {0,3}, {1,3}, {2,3}, {3,3}, {4,3}, {5,3}, {6,3}, {7,3} };
	std::vector<int> allPos;
	bloc_with_type blocWithType[32] = { {c_RED, c_GENERAL}, {c_RED, c_CHARIOT}, {c_RED, c_CHARIOT}, {c_RED,  c_HORSE}, {c_RED, c_HORSE}, {c_RED, c_MINISTER}, {c_RED, c_MINISTER},
										{c_RED, c_GUARD}, {c_RED, c_GUARD}, {c_RED, c_PAWN}, {c_RED, c_PAWN}, {c_RED, c_PAWN}, {c_RED, c_PAWN}, {c_RED, c_PAWN}, {c_RED, c_CANNON}, {c_RED, c_CANNON},
										{c_BLACK, c_GENERAL}, {c_BLACK, c_CHARIOT}, {c_BLACK, c_CHARIOT}, {c_BLACK,  c_HORSE}, {c_BLACK, c_HORSE}, {c_BLACK, c_MINISTER}, {c_BLACK, c_MINISTER},
										{c_BLACK, c_GUARD}, {c_BLACK, c_GUARD}, {c_BLACK, c_PAWN}, {c_BLACK, c_PAWN}, {c_BLACK, c_PAWN}, {c_BLACK, c_PAWN}, {c_BLACK, c_PAWN}, {c_BLACK, c_CANNON}, {c_BLACK, c_CANNON} };
	std::vector<int> allBlocWithType;
}ForInit;

class ChessPiece
{
public:
	Sprite spPiece;							//棋子精灵对象
	Vector2i piecePosition;					//棋子所在格子的坐标
	bool isOpened;							//棋子是否翻开
	bool isDeath;							//棋子是否死亡
	int pieceType;							//棋子的类型
	int bloc;								//棋子所属阵营

	void pieceInit(Texture* tUnturnedPiece, ForInit* f, int all);						//对棋子的属性进行初始化
	void pieceOpen(Texture* tPiece);						//棋子翻开
};

void ChessPiece::pieceInit(Texture* tUnturnedPiece, ForInit* f, int all)
{
	spPiece.setTexture(*tUnturnedPiece);
	spPiece.setTextureRect(IntRect(0, 0, PIECE_EDGE_LENTH, PIECE_EDGE_LENTH));

	isOpened = false;
	isDeath = false;

	int i = rand() % all;
	int k = (*f).allPos[i];
	piecePosition = (*f).pos[k];
	(*f).allPos.erase((*f).allPos.begin() + i);

	i = rand() % all;
	k = (*f).allBlocWithType[i];
	bloc = (*f).blocWithType[k].bloc;
	pieceType = (*f).blocWithType[k].type;
	(*f).allBlocWithType.erase((*f).allBlocWithType.begin() + i);

}

void ChessPiece::pieceOpen(Texture* tPiece)
{
	isOpened = true;
	int grid_x = 0, grid_y = 0;

	switch (pieceType)
	{
	case c_GENERAL:
		grid_x = 0;
		break;
	case c_CHARIOT:
		grid_x = 4;
		break;
	case c_HORSE:
		grid_x = 3;
		break;
	case c_MINISTER:
		grid_x = 2;
		break;
	case c_GUARD:
		grid_x = 1;
		break;
	case c_PAWN:
		grid_x = 6;
		break;
	case c_CANNON:
		grid_x = 5;
		break;
	}

	switch (bloc)
	{
	case c_RED:
		grid_y = 1;
		break;
	case c_BLACK:
		grid_y = 0;
		break;
	}

	spPiece.setTexture(*tPiece);
	spPiece.setTextureRect(IntRect(grid_x * PIECE_EDGE_LENTH, grid_y * PIECE_EDGE_LENTH, PIECE_EDGE_LENTH, PIECE_EDGE_LENTH));
}

class ChessBoard
{
public:
	bool isPiecePosUsed[8][4];

	void initChessBoard();
	void piecePriceSubstract(ChessPiece* cp, bloc_price* redPrice, bloc_price* blackPrice);
	bool pieceMove(ChessPiece* Attacker, Vector2i chosenPos2);			//对棋子的移动进行判定
	void pieceWin(ChessPiece* Attacker, ChessPiece* Defencer, ChessPiece lastDeadPiece[], int* lastDeadPieceNum, bloc_price* redPrice, bloc_price* blackPrice);
	void pieceLose(ChessPiece* Attacker, ChessPiece lastDeadPiece[], int* lastDeadPieceNum, bloc_price* redPrice, bloc_price* blackPrice);
	void pieceTie(ChessPiece* Attacker, ChessPiece* Defencer, ChessPiece lastDeadPiece[], int* lastDeadPieceNum, bloc_price* redPrice, bloc_price* blackPrice);
	void pieceCompare(ChessPiece* Attacker, ChessPiece* Defencer, ChessPiece lastDeadPiece[], int* lastDeadPieceNum, bloc_price* redPrice, bloc_price* blackPrice);		//棋子比较大小
};

void ChessBoard::initChessBoard()
{
	for (int i = 0; i < 8; i ++)
		for (int j = 0; j < 4; j++)
		{
			isPiecePosUsed[i][j] = true;
		}
}

void ChessBoard::piecePriceSubstract(ChessPiece* cp, bloc_price* redPrice, bloc_price* blackPrice)
{
	bloc_price* blocPrice;

	if (cp->bloc == c_RED)
		blocPrice = redPrice;
	else
		blocPrice = blackPrice;

	switch (cp->pieceType)
	{
	case c_CANNON:
		blocPrice->blocCannonNum--;
		break;
	default:
		blocPrice->blocPrice -= cp->pieceType;
		break;
	}
}

bool ChessBoard::pieceMove(ChessPiece* Attacker, Vector2i chosenPos2)
{
	if (isPiecePosUsed[chosenPos2.x][chosenPos2.y])
		return false;
	else if ((abs(Attacker->piecePosition.x - chosenPos2.x) == 1 && Attacker->piecePosition.y - chosenPos2.y == 0) ||
		(abs(Attacker->piecePosition.y - chosenPos2.y) == 1 && Attacker->piecePosition.x - chosenPos2.x == 0) &&
		Attacker->pieceType != c_HORSE)
		return true;
	else if (abs(Attacker->piecePosition.x - chosenPos2.x) <= 1 && abs(Attacker->piecePosition.y - chosenPos2.y) <= 1 &&
		Attacker->pieceType == c_HORSE)
		return true;
	else if ((Attacker->piecePosition.x - chosenPos2.x == 2 && Attacker->piecePosition.y - chosenPos2.y == 0 && !isPiecePosUsed[Attacker->piecePosition.x - 1][Attacker->piecePosition.y]) ||
		(Attacker->piecePosition.x - chosenPos2.x == -2 && Attacker->piecePosition.y - chosenPos2.y == 0 && !isPiecePosUsed[Attacker->piecePosition.x + 1][Attacker->piecePosition.y]) ||
		(Attacker->piecePosition.y - chosenPos2.y == 2 && Attacker->piecePosition.x - chosenPos2.x == 0 && !isPiecePosUsed[Attacker->piecePosition.x][Attacker->piecePosition.y - 1]) ||
		(Attacker->piecePosition.y - chosenPos2.y == -2 && Attacker->piecePosition.x - chosenPos2.x == 0 && !isPiecePosUsed[Attacker->piecePosition.x][Attacker->piecePosition.y + 1]))
		return true;
	else
		return false;

	return false;
}

void ChessBoard::pieceWin(ChessPiece* Attacker, ChessPiece* Defencer, ChessPiece lastDeadPiece[], int* lastDeadPieceNum, bloc_price* redPrice, bloc_price* blackPrice)
{
	Defencer->isDeath = true;
	isPiecePosUsed[Attacker->piecePosition.x][Attacker->piecePosition.y] = false;
	Attacker->piecePosition = Defencer->piecePosition;

	lastDeadPiece[0].pieceType = Defencer->pieceType;
	lastDeadPiece[0].bloc = Defencer->bloc;
	*lastDeadPieceNum = 1;

	piecePriceSubstract(Defencer, redPrice, blackPrice);
}

void ChessBoard::pieceLose(ChessPiece* Attacker, ChessPiece lastDeadPiece[], int* lastDeadPieceNum, bloc_price* redPrice, bloc_price* blackPrice)
{
	Attacker->isDeath = true;
	isPiecePosUsed[Attacker->piecePosition.x][Attacker->piecePosition.y] = false;

	lastDeadPiece[0].pieceType = Attacker->pieceType;
	lastDeadPiece[0].bloc = Attacker->bloc;
	*lastDeadPieceNum = 1;

	piecePriceSubstract(Attacker, redPrice, blackPrice);
}

void ChessBoard::pieceTie(ChessPiece* Attacker, ChessPiece* Defencer, ChessPiece lastDeadPiece[], int* lastDeadPieceNum, bloc_price* redPrice, bloc_price* blackPrice)
{
	Attacker->isDeath = true;
	Defencer->isDeath = true;
	isPiecePosUsed[Attacker->piecePosition.x][Attacker->piecePosition.y] = false;
	isPiecePosUsed[Defencer->piecePosition.x][Defencer->piecePosition.y] = false;

	lastDeadPiece[0].pieceType = Attacker->pieceType;
	lastDeadPiece[0].bloc = Attacker->bloc;
	lastDeadPiece[1].pieceType = Defencer->pieceType;
	lastDeadPiece[1].bloc = Defencer->bloc;
	*lastDeadPieceNum = 2;

	piecePriceSubstract(Attacker, redPrice, blackPrice);
	piecePriceSubstract(Defencer, redPrice, blackPrice);
}

void ChessBoard::pieceCompare(ChessPiece* Attacker, ChessPiece* Defencer, ChessPiece lastDeadPiece[], int* lastDeadPieceNum, bloc_price* redPrice, bloc_price* blackPrice)
{
	switch (Attacker->pieceType)
	{
	case c_GENERAL:
		if (Defencer->pieceType != c_PAWN && Defencer->pieceType != c_GENERAL)
			pieceWin(Attacker, Defencer, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		else if (Defencer->pieceType != c_GENERAL)
			pieceLose(Attacker, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		else
			pieceTie(Attacker, Defencer, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		break;

	case c_CHARIOT:
		if (Defencer->pieceType != c_GENERAL && Defencer->pieceType != c_GUARD && Defencer->pieceType != c_MINISTER  && Defencer->pieceType != c_CHARIOT)
			pieceWin(Attacker, Defencer, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		else if (Defencer->pieceType != c_CHARIOT)
			pieceLose(Attacker, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		else
			pieceTie(Attacker, Defencer, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		break;

	case c_HORSE:
		if (Defencer->pieceType != c_GENERAL && Defencer->pieceType != c_GUARD && Defencer->pieceType != c_MINISTER && Defencer->pieceType != c_CHARIOT && Defencer->pieceType != c_HORSE)
			pieceWin(Attacker, Defencer, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		else if (Defencer->pieceType != c_HORSE)
			pieceLose(Attacker, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		else
			pieceTie(Attacker, Defencer, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		break;

	case c_MINISTER:
		if (Defencer->pieceType != c_GENERAL && Defencer->pieceType != c_GUARD &&  Defencer->pieceType != c_MINISTER)
			pieceWin(Attacker, Defencer, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		else if (Defencer->pieceType != c_MINISTER)
			pieceLose(Attacker, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		else
			pieceTie(Attacker, Defencer, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		break;

	case c_GUARD:
		if (Defencer->pieceType != c_GENERAL && Defencer->pieceType != c_GUARD)
			pieceWin(Attacker, Defencer, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		else if (Defencer->pieceType != c_GUARD)
			pieceLose(Attacker, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		else
			pieceTie(Attacker, Defencer, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		break;

	case c_PAWN:
		if (Defencer->pieceType == c_CANNON || Defencer->pieceType == c_GENERAL)
			pieceWin(Attacker, Defencer, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		else if (Defencer->pieceType != c_PAWN)
			pieceLose(Attacker, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		else
			pieceTie(Attacker, Defencer, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		break;

	case c_CANNON:
		if (Defencer->pieceType == c_GENERAL)
			pieceLose(Attacker, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		else
			pieceWin(Attacker, Defencer, lastDeadPiece, lastDeadPieceNum, redPrice, blackPrice);
		break;
	}
}

class Chess
{
public:
	ChessPiece piece[32];
	ChessPiece lastDeadPiece[2];
	ChessBoard cb;
	ForInit f;
	int bloc;
	Texture tPiece, tUnturnedPiece, tMarqueeGrey, tMarqueeRed, tMarqueeWhite, tMarqueeGreen;
	Sprite spMarqueeGrey, spMarqueeRed, spMarqueeWhite, spMarqueeGreen;
	Sprite spLastDeadPiece[2];
	bool firstClick, secondClick;
	bool firstOpen, isClicked, showWaitChosenPos;
	Vector2i chosenPos, chosenPos2, stepBeforeChosenPos, wait4ChosenPos;
	ChessPiece* Attacker, * Defencer, * stepBeforeAttacker;
	int pieceState;
	int lastDeadPieceNum;
	bloc_price redPrice, blackPrice;
	int winner;

	void initPiece();
	void partInitPiece();
	bool isGameOver();
};

void Chess::initPiece()
{
	for (int i = 0; i < 32; i++)
	{
		f.allPos.push_back(i);
		f.allBlocWithType.push_back(i);
	}

	srand((unsigned int)(time(0)));
	int all = 32;
	for (int i = 0; i < 32; i++)
	{
		piece[i].pieceInit(&tUnturnedPiece, &f, all);
		all--;
	}
	
	cb.initChessBoard();

	firstClick = false;
	secondClick = false;
	firstOpen = true;
	isClicked = false;
	showWaitChosenPos = false;
	bloc = -1;

	Attacker = new ChessPiece;
	Defencer = new ChessPiece;

	lastDeadPiece[0].spPiece.setScale(DEATH_PIECE_SCALE, DEATH_PIECE_SCALE);
	lastDeadPiece[1].spPiece.setScale(DEATH_PIECE_SCALE, DEATH_PIECE_SCALE);
	lastDeadPieceNum = 0;

	redPrice.blocPrice = 122225;
	blackPrice.blocPrice = 122225;
	redPrice.blocCannonNum = 2;
	blackPrice.blocCannonNum = 2;

	winner = -1;
}

void Chess::partInitPiece()
{
	cb.initChessBoard();

	firstClick = false;
	secondClick = false;
	firstOpen = true;
	isClicked = false;
	showWaitChosenPos = false;
	bloc = -1;

	Attacker = new ChessPiece;
	Defencer = new ChessPiece;

	lastDeadPiece[0].spPiece.setScale(DEATH_PIECE_SCALE, DEATH_PIECE_SCALE);
	lastDeadPiece[1].spPiece.setScale(DEATH_PIECE_SCALE, DEATH_PIECE_SCALE);
	lastDeadPieceNum = 0;

	redPrice.blocPrice = 122225;
	blackPrice.blocPrice = 122225;
	redPrice.blocCannonNum = 2;
	blackPrice.blocCannonNum = 2;

	winner = -1;
}

bool Chess::isGameOver()
{
	//红方视角
	if (redPrice.blocPrice >= 100000 || redPrice.blocPrice % 10 != 0) { }
	else if (blackPrice.blocPrice >= 100000)
	{
		winner = c_BLACK;
		return true;
	}

	if ((redPrice.blocPrice >= 10000 || redPrice.blocCannonNum != 0) || redPrice.blocPrice >= 100000){ }
	else if (blackPrice.blocPrice >= 10000)
	{
		winner = c_BLACK;
		return true;
	}
	else if (redPrice.blocPrice >= 1000){ }
	else if (blackPrice.blocPrice >= 1000)
	{
		winner = c_BLACK;
		return true;
	}
	else if (redPrice.blocPrice >= 100){ }
	else if (blackPrice.blocPrice >= 100)
	{
		winner = c_BLACK;
		return true;
	}
	else if (redPrice.blocPrice >= 10){ }
	else if (blackPrice.blocPrice >= 10)
	{
		winner = c_BLACK;
		return true;
	}

	//黑方视角
	if (blackPrice.blocPrice >= 100000 || blackPrice.blocPrice % 10 != 0){ }
	else if (redPrice.blocPrice >= 100000)
	{
		winner = c_RED;
		return true;
	}

	if (blackPrice.blocPrice >= 10000 || blackPrice.blocCannonNum != 0 || blackPrice.blocPrice >= 100000){ }
	else if (redPrice.blocPrice >= 10000)
	{
		winner = c_RED;
		return true;
	}
	else if (blackPrice.blocPrice >= 1000){ }
	else if (redPrice.blocPrice >= 1000)
	{
		winner = c_RED;
		return true;
	}
	else if (blackPrice.blocPrice >= 100){ }
	else if (redPrice.blocPrice >= 100)
	{
		winner = c_RED;
		return true;
	}
	else if (blackPrice.blocPrice >= 10){ }
	else if (redPrice.blocPrice >= 10)
	{
		winner = c_RED;
		return true;
	}

	return false;
}
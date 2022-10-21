#pragma once
#include <Windows.h>
#include "resource.h"
#include "Chess.h"
using namespace sf;

#define WINDOW_WIDTH 1500
#define WINDOW_HEIGHT 732
#define BUTTON_WIDTH 213
#define BUTTON_HEIGHT 78
#define BUTTON_TURN_OFF_EDGE_LENTH 40
#define BUTTON_VOLUME_CHANGE_EDGE_LENTH 25
#define BUTTON_VOLUME_TURN_EDGE_LENTH 35
#define BUTTON_HOME_BACK_EDGE_LENTH 80
#define BUTTON_VOLUME_STRIPE_WIDTH 300
#define BUTTON_VOLUME_STRIPE_HEIGHT 20
#define BUTTON_VOLUME_SLIDER_WIDTH 10
#define BUTTON_VOLUME_SLIDER_HEIGHT 28
#define WINNER_WORD_WIDTH 344
#define WINNER_WORD_HEIGHT 114
#define SETTING_PAGE_BUTTON_WIDTH 160
#define SETTING_PAGE_BUTTON_HEIGHT 52
#define RULE_WIDTH 905
#define RULE_HEIGHT 3219
#define RULE_SHOW_HEIGHT 470
#define RULE_SLIDER_WIDTH 10
#define RULE_SLIDER_HEIGHT 66
#define RECTANGLE_WIDTH 519
#define RECTANGLE_HEIGHT 142
#define BUTTON_GAMEPAGE_SCALE 0.73

#define BUTTON_LOCAL_START_X 170
#define BUTTON_LOCAL_START_Y 560
#define BUTTON_ONLINE_START_X 470
#define BUTTON_ONLINE_START_Y 560
#define BUTTON_STARTPAGE_EXIT_X 770
#define BUTTON_STARTPAGE_EXIT_Y 560
#define BUTTON_STARTPAGE_SETTING_X 1070
#define BUTTON_STARTPAGE_SETTING_Y 560
#define BUTTON_REGRET_X 905
#define BUTTON_REGRET_Y 627
#define BUTTON_TIE_X 1110
#define BUTTON_TIE_Y 627
#define BUTTON_SURRENDER_X 1315
#define BUTTON_SURRENDER_Y 627
#define BUTTON_GAMEPAGE_SETTING_X 1266
#define BUTTON_GAMEPAGE_SETTING_Y 16
#define BUTTON_RESTART_X 213
#define BUTTON_RESTART_Y 347
#define BUTTON_GAMEOVER_EXIT_X 585
#define BUTTON_GAMEOVER_EXIT_Y 347
#define BUTTON_YES_X 213
#define BUTTON_YES_Y 347
#define BUTTON_NO_X 585
#define BUTTON_NO_Y 347
#define BUTTON_TURN_OFF_X 920
#define BUTTON_TURN_OFF_Y 20
#define BUTTON_SETTING_PAGE_LOGIC_X 0
#define BUTTON_SETTING_PAGE_RULE_X 160
#define BUTTON_SETTING_PAGE_Y -52
#define BUTTON_SAVE_X 496
#define BUTTON_SAVE_Y 354
#define BUTTON_LOAD_X 178
#define BUTTON_LOAD_Y 354
#define BUTTON_HOME_X 833
#define BUTTON_HOME_Y 354
#define BUTTON_BACK_X 1319
#define BUTTON_BACK_Y 52
#define BUTTON_BGM_VOLUME_PLUS_X 742
#define BUTTON_BGM_VOLUME_PLUS_Y 120
#define BUTTON_BGM_VOLUME_SUBSTRUCT_X 343
#define BUTTON_BGM_VOLUME_SUBSTRUCT_Y 120
#define BUTTON_BGM_VOLUME_TURN_X 796
#define BUTTON_BGM_VOLUME_TURN_Y 115
#define BUTTON_SE_VOLUME_PLUS_X 742
#define BUTTON_SE_VOLUME_PLUS_Y 204
#define BUTTON_SE_VOLUME_SUBSTRUCT_X 343
#define BUTTON_SE_VOLUME_SUBSTRUCT_Y 204
#define BUTTON_SE_VOLUME_TURN_X 796
#define BUTTON_SE_VOLUME_TURN_Y 199
#define BUTTON_BGM_STRIPE_X 405
#define BUTTON_BGM_STRIPE_Y 122.5
#define BUTTON_BGM_SLIDER_Y 120
#define BUTTON_SE_STRIPE_X 405
#define BUTTON_SE_STRIPE_Y 206.5
#define BUTTON_SE_SLIDER_Y 204
#define SL_RECTANGLE_X_1 205
#define SL_RECTANGLE_X_2 784
#define SL_RECTANGLE_Y_1 215
#define SL_RECTANGLE_Y_2 375
#define SL_RECTANGLE_Y_3 535
#define POP_WINDOW_X 267
#define POP_WINDOW_Y 92
#define BIG_POP_WINDOW_X 0
#define BIG_POP_WINDOW_Y 0
#define RULE_POS_X 52
#define RULE_POS_Y 30
#define RULE_SLIDER_X 929
#define RULE_SLIDER_Y 80
#define RULE_SLIDER_LAST_Y 470

#define DEATH_PIECE_MARQUEE_X 1073
#define DEATH_PIECE_MARQUEE_Y 266
#define DEATH_PIECE_1_X 1179
#define DEATH_PIECE_2_FIRST_X 1144
#define DEATH_PIECE_2_SECOND_X 1214
#define DEATH_PIECE_Y 319

#define BLOC_WORD_X 562
#define BLOC_WORD_Y 590
#define LAST_DEATH_WORD_X 1066
#define LAST_DEATH_WORD_Y 182
#define PIECE_TAKER_WORD_X 78
#define PIECE_TAKER_WORD_Y 595
#define WINNER_WORD_X 321
#define WINNER_WORD_Y 101
#define TIE_WORD_X 382
#define TIE_WORD_Y 101
#define ACCEPT_RETRACT_WORD_X 109
#define ACCEPT_RETRACT_WORD_Y 119
#define ACCEPT_TIE_WORD_X 109
#define ACCEPT_TIE_WORD_Y 119
#define TO_SURRENDER_WORD_X 130
#define TO_SURRENDER_WORD_Y 119
#define BACK_HOME_WORD_X 291
#define BACK_HOME_WORD_Y 132
#define COVER_FILE_WORD_X 284
#define COVER_FILE_WORD_Y 128
#define BGM_WORD_X 97
#define BGM_WORD_Y 109
#define SE_WORD_X 97
#define SE_WORD_Y 193
#define BGM_VOLUME_VALUE_X 858
#define BGM_VOLUME_VALUE_Y 107
#define SE_VOLUME_VALUE_X 858
#define SE_VOLUME_VALUE_Y 191
#define SL_WORD_X 110
#define SL_WORD_Y 63
#define SL_DETAIL_WORD_X_IN_RECTANGLE 31
#define SL_DETAIL_WORD_Y_IN_RECTANGLE 22
#define SL_TIME_WORD_X_IN_RECTANGLE 487
#define SL_TIME_WORD_Y_IN_RECTANGLE 115

typedef enum GAME_STATE
{
	START_PAGE = 1,
	GAME_PAGE,
	GAME_PAUSED_PAGE,
	SAVE_PAGE,
	LOAD_PAGE,
	GAME_OVER_PAGE
};

typedef enum PIECE_STATE
{
	WAIT_4_NONE,
	WAIT_4_OPEN,
	WAIT_4_ATTACK
};

typedef enum LAST_CLICK_STATE_IN_GAME
{
	PIECE,
	REGRET_BUTTON,
	TIE_BUTTON,
	SURRENDER_BUTTON,
	HOME_BUTTON,
	BACK_BUTTON,
	SETTING_BUTTON_FROM_START_PAGE,
	SETTING_BUTTON_FROM_GAME_PAGE
};

typedef enum LAST_CLICK_STATE_IN_SL_PAGE
{
	SAVE_BUTTON_1 = 1,
	SAVE_BUTTON_2,
	SAVE_BUTTON_3,
	SAVE_BUTTON_4,
	SAVE_BUTTON_5,
	SAVE_BUTTON_6
};

typedef enum SETTING_PAGE
{
	SETTING_PAGE_LOGIC,
	SETTING_PAGE_RULE
};

typedef enum PLAYER
{
	PLAYER_1,
	PLAYER_2
};

typedef struct PLAYER_STAT
{
	int player;
	int bloc;
}Player;

class Game
{
public:
	Game() {
		window_width = WINDOW_WIDTH;
		window_height = WINDOW_HEIGHT;

		window.create(VideoMode(window_width, window_height), L"FFXQ by 随便咯", Style::Titlebar | Style::Close);

		HINSTANCE hInstance = ::GetModuleHandle(NULL);
		HICON hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_APPICON));
		HWND hWnd = FindWindowExW(NULL, NULL, NULL, L"FFXQ by 随便咯");
		::SendMessage(hWnd, WM_SETICON, ICON_BIG, (LPARAM)hIcon);
		::SendMessage(hWnd, WM_SETICON, ICON_SMALL, (LPARAM)hIcon);

		window.setFramerateLimit(60);
	};
	~Game() {};

	RenderWindow window;
	Chess chess;
	Chess formerChess;
	bool gameOver, gameQuit, yesClicked, noClicked, BGMSliderClicked, SESliderClicked, RuleSliderClicked, isBoardOn, onlinePlay;
	Vector2i clickedPos, originPos, mousePos;
	int AllOpen;
	int window_width, window_height;
	int gameState, gameOverState, lastClickState, lastClickStateSL, settingPage;
	int ruleAdjustment, formerRuleAdjustment;
	Texture tBackground, tStartPage, tDeathPieceMarquee, tPopWindow, tVolumeStripeSlider, tRule, tBigPopWindow, tRectangle, tRuleSlider;
	Texture tButtons, tTurnOffButton, tSettingPageButton, tVolumeChangeButton, tVolumeTurnButton, tBackHomeButton;
	Texture tBlackBlocWord, tRedBlocWord, tUnknownBlocWord, tPieceTakerWord, tLastDeathWord, tWinnerWord, tAcceptRetractWord, tAcceptTieWord, tToSurrenderWord, tBackHomeWord, tCoverFileWord, tWhetherLoadWord, tBGMWord, tSEWord, tSaveWord, tLoadWord, tNoDataWord;
	Sprite spBackground, spStartPage, spDeathPieceMarquee, spPopWindow, spVolumeStripeSlider, spRule, spBigPopWindow, spRectangle, spRuleSlider;
	Sprite spButtons, spTurnOffButton, spSettingPageButton, spVolumeChangeButton, spVolumeTurnButton, spBackHomeButton, spVolumeSliderButton;
	Sprite spBlocWord, spPieceTakerWord, spLastDeathWord, spWinnerWord, spAcceptWord, spBackHomeWord, spCoverFileWord, spWhetherLoadWord, spBGMWord, spSEWord, spSaveWord, spLoadWord, spNoDataWord;
	IntRect ButtonRectLocalStart, ButtonRectOnlineStart, ButtonRectExit, ButtonRectSetting, ButtonRectRegret, ButtonRectTie, ButtonRectSurrender, ButtonRectRestart, ButtonRectYes, ButtonRectNo, ButtonRectSave, ButtonRectLoad;
	IntRect ButtonRectTurnOff, ButtonRectSettingPageLogic, ButtonRectSettingPageRule, ButtonRectBGMVolumePlus, ButtonRectBGMVolumeSubstruct, ButtonRectSEVolumePlus, ButtonRectSEVolumeSubstruct, ButtonRectBGMVolumeTurn, ButtonRectSEVolumeTurn, ButtonRectHome, ButtonRectBack;
	IntRect ButtonRectBGMSlider, ButtonRectBGMStripe, ButtonRectSESlider, ButtonRectSEStripe, ButtonRectRuleSlider;
	IntRect ButtonRectSLOne, ButtonRectSLTwo, ButtonRectSLThree, ButtonRectSLFour, ButtonRectSLFive, ButtonRectSLSix;
	Music StartPageBKMusic, GamePageBKMusic;
	Sound soundButton, soundPiece, soundWrongPiece;
	SoundBuffer sbButton, sbPiece, sbWrongPiece;
	Font font;
	Text text;
	FloatRect fRect;

	float musicVolume, soundVolume;
	bool isMusicOn, isSoundOn;

	std::ifstream in;
	std::ofstream out;
	SYSTEMTIME sysTime;

	Player playerNow, thisPlayer, anotherPlayer;
	TcpSocket socket;
	std::string consoleInput;
	TcpListener listener;
	Packet packet;

	void save(std::string fileName);
	void load(std::string fileName);
	void loadMediaData();
	void drawSingleButton(Sprite* spButton, IntRect* ButtonRect, int grid_x, int grid_y, int button_position_x, int button_position_y, int button_width, int button_height);
	void drawButtons(int GS);
	void drawPiece();
	void drawSaveWord(std::string s, int saveWordPosX, int saveWordPosY, int saveTimePosX, int saveTimePosY);
	void gamePageDraw();

	void onlineSetup();
	void onlinePacketUpdate();
	void gameInit();
	void gameInput();
	void gameLogic();
	void gameDraw();
	void gameRun();
};

void Game::save(std::string fileName)
{
	GetLocalTime(&sysTime);
	out.open(fileName);
	
	out << sysTime.wYear << " " << sysTime.wMonth << " " << sysTime.wDay << std::endl;
	out << sysTime.wHour << " " << sysTime.wMinute << " " << sysTime.wSecond << std::endl;

	for (int i = 0; i < 32; i++)
	{
		out << chess.piece[i].bloc << " " << chess.piece[i].pieceType << std::endl;
		out << chess.piece[i].piecePosition.x << " " << chess.piece[i].piecePosition.y << std::endl;
		out << chess.piece[i].isOpened << " " << chess.piece[i].isDeath << std::endl;
	}

	for (int i = 0; i < 2; i++)
	{
		out << chess.lastDeadPiece[i].bloc << " " << chess.lastDeadPiece[i].pieceType << std::endl;
		out << chess.lastDeadPiece[i].piecePosition.x << " " << chess.piece[i].piecePosition.y << std::endl;
		out << chess.lastDeadPiece[i].isOpened << " " << chess.lastDeadPiece[i].isDeath << std::endl;
	}

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 4; j++)
		{
			out << chess.cb.isPiecePosUsed[i][j] << " ";
		}
	out << std::endl;

	out << chess.bloc << std::endl;

	out << chess.firstClick << " " << chess.secondClick << std::endl;
	out << chess.firstOpen << " " << chess.isClicked << std::endl;

	out << chess.chosenPos.x << " " << chess.chosenPos.y << std::endl;
	out << chess.chosenPos2.x << " " << chess.chosenPos.y << std::endl;
	out << chess.stepBeforeChosenPos.x << " " << chess.stepBeforeChosenPos.y << std::endl;

	out << chess.pieceState << std::endl;
	out << chess.lastDeadPieceNum << std::endl;

	out << chess.redPrice.blocPrice << " " << chess.redPrice.blocCannonNum << std::endl;
	out << chess.blackPrice.blocPrice << " " << chess.blackPrice.blocCannonNum << std::endl;

	for (int i = 0; i < 32; i++)
	{
		out << formerChess.piece[i].bloc << " " << formerChess.piece[i].pieceType << std::endl;
		out << formerChess.piece[i].piecePosition.x << " " << formerChess.piece[i].piecePosition.y << std::endl;
		out << formerChess.piece[i].isOpened << " " << formerChess.piece[i].isDeath << std::endl;
	}

	for (int i = 0; i < 2; i++)
	{
		out << formerChess.lastDeadPiece[i].bloc << " " << formerChess.lastDeadPiece[i].pieceType << std::endl;
		out << formerChess.lastDeadPiece[i].piecePosition.x << " " << formerChess.piece[i].piecePosition.y << std::endl;
		out << formerChess.lastDeadPiece[i].isOpened << " " << formerChess.lastDeadPiece[i].isDeath << std::endl;
	}

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 4; j++)
		{
			out << formerChess.cb.isPiecePosUsed[i][j] << " ";
		}
	out << std::endl;

	out << formerChess.bloc << std::endl;

	out << formerChess.firstClick << " " << formerChess.secondClick << std::endl;
	out << formerChess.firstOpen << " " << formerChess.isClicked << std::endl;

	out << formerChess.chosenPos.x << " " << formerChess.chosenPos.y << std::endl;
	out << formerChess.chosenPos2.x << " " << formerChess.chosenPos.y << std::endl;
	out << formerChess.stepBeforeChosenPos.x << " " << formerChess.stepBeforeChosenPos.y << std::endl;

	out << formerChess.pieceState << std::endl;
	out << formerChess.lastDeadPieceNum << std::endl;

	out << formerChess.redPrice.blocPrice << " " << formerChess.redPrice.blocCannonNum << std::endl;
	out << formerChess.blackPrice.blocPrice << " " << formerChess.blackPrice.blocCannonNum << std::endl;
	
	out.close();
}

void Game::load(std::string fileName)
{
	in.open(fileName);

	chess.initPiece();
	formerChess.initPiece();

	in >> sysTime.wYear >> sysTime.wMonth >> sysTime.wDay;
	in >> sysTime.wHour >> sysTime.wMinute >> sysTime.wSecond;

	for (int i = 0; i < 32; i++)
	{
		in >> chess.piece[i].bloc >> chess.piece[i].pieceType;
		in >> chess.piece[i].piecePosition.x >> chess.piece[i].piecePosition.y;
		in >> chess.piece[i].isOpened >> chess.piece[i].isDeath;
	}

	for (int i = 0; i < 2; i++)
	{
		in >> chess.lastDeadPiece[i].bloc >> chess.lastDeadPiece[i].pieceType;
		in >> chess.lastDeadPiece[i].piecePosition.x >> chess.piece[i].piecePosition.y;
		in >> chess.lastDeadPiece[i].isOpened >> chess.lastDeadPiece[i].isDeath;
	}

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 4; j++)
		{
			in >> chess.cb.isPiecePosUsed[i][j];
		}

	in >> chess.bloc;

	in >> chess.firstClick >> chess.secondClick;
	in >> chess.firstOpen >> chess.isClicked;

	in >> chess.chosenPos.x >> chess.chosenPos.y;
	in >> chess.chosenPos2.x >> chess.chosenPos.y;
	in >> chess.stepBeforeChosenPos.x >> chess.stepBeforeChosenPos.y;

	in >> chess.pieceState;
	in >> chess.lastDeadPieceNum;

	in >> chess.redPrice.blocPrice >> chess.redPrice.blocCannonNum;
	in >> chess.blackPrice.blocPrice >> chess.blackPrice.blocCannonNum;

	for (int i = 0; i < 32; i++)
	{
		in >> formerChess.piece[i].bloc >> formerChess.piece[i].pieceType;
		in >> formerChess.piece[i].piecePosition.x >> formerChess.piece[i].piecePosition.y;
		in >> formerChess.piece[i].isOpened >> formerChess.piece[i].isDeath;
	}

	for (int i = 0; i < 2; i++)
	{
		in >> formerChess.lastDeadPiece[i].bloc >> formerChess.lastDeadPiece[i].pieceType;
		in >> formerChess.lastDeadPiece[i].piecePosition.x >> formerChess.piece[i].piecePosition.y;
		in >> formerChess.lastDeadPiece[i].isOpened >> formerChess.lastDeadPiece[i].isDeath;
	}

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 4; j++)
		{
			in >> formerChess.cb.isPiecePosUsed[i][j];
		}

	in >> formerChess.bloc;

	in >> formerChess.firstClick >> formerChess.secondClick;
	in >> formerChess.firstOpen >> formerChess.isClicked;

	in >> formerChess.chosenPos.x >> formerChess.chosenPos.y;
	in >> formerChess.chosenPos2.x >> formerChess.chosenPos.y;
	in >> formerChess.stepBeforeChosenPos.x >> formerChess.stepBeforeChosenPos.y;

	in >> formerChess.pieceState;
	in >> formerChess.lastDeadPieceNum;

	in >> formerChess.redPrice.blocPrice >> formerChess.redPrice.blocCannonNum;
	in >> formerChess.blackPrice.blocPrice >> formerChess.blackPrice.blocCannonNum;

	for (int i = 0; i < 32; i++)
	{
		if (chess.piece[i].isDeath)
			continue;

		if (chess.piece[i].piecePosition == chess.chosenPos)
		{
			chess.Attacker = &chess.piece[i];
			break;
		}
	}

	for (int i = 0; i < 32; i++)
	{
		if (chess.piece[i].isDeath)
			continue;

		if (chess.piece[i].piecePosition == chess.chosenPos2)
		{
			chess.Defencer = &chess.piece[i];
			break;
		}
	}

	for (int i = 0; i < 32; i++)
	{
		if (chess.piece[i].isDeath)
			continue;

		if (chess.piece[i].piecePosition == chess.stepBeforeChosenPos)
		{
			chess.stepBeforeAttacker = &chess.piece[i];
			break;
		}
	}

	for (int i = 0; i < 32; i++)
	{
		if (formerChess.piece[i].isDeath)
			continue;

		if (formerChess.piece[i].piecePosition == formerChess.chosenPos)
		{
			formerChess.Attacker = &formerChess.piece[i];
			break;
		}
	}

	for (int i = 0; i < 32; i++)
	{
		if (formerChess.piece[i].isDeath)
			continue;

		if (formerChess.piece[i].piecePosition == formerChess.chosenPos2)
		{
			formerChess.Defencer = &formerChess.piece[i];
			break;
		}
	}

	for (int i = 0; i < 32; i++)
	{
		if (formerChess.piece[i].isDeath)
			continue;

		if (formerChess.piece[i].piecePosition == formerChess.chosenPos)
		{
			formerChess.Attacker = &formerChess.piece[i];
			break;
		}
	}

	for (int i = 0; i < 32; i++)
	{
		if (formerChess.piece[i].isDeath)
			continue;

		if (formerChess.piece[i].piecePosition == formerChess.stepBeforeChosenPos)
		{
			formerChess.stepBeforeAttacker = &formerChess.piece[i];
			break;
		}
	}

	for (int i = 0; i < 32; i++)
	{
		if (chess.piece[i].isOpened)
		{
			chess.piece[i].pieceOpen(&chess.tPiece);
		}
		else
		{
			chess.piece[i].spPiece.setTexture(chess.tUnturnedPiece);
			chess.piece[i].spPiece.setTextureRect(IntRect(0, 0, PIECE_EDGE_LENTH, PIECE_EDGE_LENTH));
		}
	}

	for (int i = 0; i < 32; i++)
	{
		if (formerChess.piece[i].isOpened)
		{
			formerChess.piece[i].pieceOpen(&formerChess.tPiece);
		}
		else
		{
			formerChess.piece[i].spPiece.setTexture(formerChess.tUnturnedPiece);
			formerChess.piece[i].spPiece.setTextureRect(IntRect(0, 0, PIECE_EDGE_LENTH, PIECE_EDGE_LENTH));
		}
	}

	in.close();
}

void Game::loadMediaData()
{
	tBackground.loadFromFile("./data/images/chessboard.png");
	tStartPage.loadFromFile("./data/images/startpage.png");
	tDeathPieceMarquee.loadFromFile("./data/images/death piece marquee.png");
	tPopWindow.loadFromFile("./data/images/pop window.png");
	tVolumeStripeSlider.loadFromFile("./data/images/Volume Stripe.png");
	tRule.loadFromFile("./data/images/new rule.png");
	tBigPopWindow.loadFromFile("./data/images/big pop window.png");
	tRectangle.loadFromFile("./data/images/rectangle.png");
	tRuleSlider.loadFromFile("./data/images/Rule Slider.png");

	tButtons.loadFromFile("./data/images/buttons.png");
	tTurnOffButton.loadFromFile("./data/images/turn off.png");
	tSettingPageButton.loadFromFile("./data/images/Setting Page.png");
	tVolumeChangeButton.loadFromFile("./data/images/plus substruct.png");
	tVolumeTurnButton.loadFromFile("./data/images/isMusicOn.png");
	tBackHomeButton.loadFromFile("./data/images/back and home.png");

	tBlackBlocWord.loadFromFile("./data/images/Black.png");
	tRedBlocWord.loadFromFile("./data/images/Red.png");
	tUnknownBlocWord.loadFromFile("./data/images/Unknown.png");
	tPieceTakerWord.loadFromFile("./data/images/piece taker.png");
	tLastDeathWord.loadFromFile("./data/images/last death.png");
	tWinnerWord.loadFromFile("./data/images/winner.png");
	tAcceptRetractWord.loadFromFile("./data/images/whether to accept retract.png");
	tAcceptTieWord.loadFromFile("./data/images/whether to accept tie.png");
	tToSurrenderWord.loadFromFile("./data/images/whether to surrender.png");
	tBackHomeWord.loadFromFile("./data/images/whether to back home.png");
	tCoverFileWord.loadFromFile("./data/images/whether to cover file.png");
	tWhetherLoadWord.loadFromFile("./data/images/whether to load.png");
	tBGMWord.loadFromFile("./data/images/BGM.png");
	tSEWord.loadFromFile("./data/images/SE.png");
	tSaveWord.loadFromFile("./data/images/save.png");
	tLoadWord.loadFromFile("./data/images/load.png");
	tNoDataWord.loadFromFile("./data/images/NO DATA.png");

	StartPageBKMusic.openFromFile("./data/Audios/StartPageBackgroudMusic.ogg");
	GamePageBKMusic.openFromFile("./data/Audios/GamePageBackgroundMusic.ogg");

	sbButton.loadFromFile("./data/Audios/ButtonClick.wav");
	sbPiece.loadFromFile("./data/Audios/PieceChosen.ogg");

	chess.tUnturnedPiece.loadFromFile("./data/images/pieceback.png");
	chess.tPiece.loadFromFile("./data/images/allpiece.png");
	chess.tMarqueeGrey.loadFromFile("./data/images/Marquee grey.png");
	chess.tMarqueeRed.loadFromFile("./data/images/Marquee red.png");
	chess.tMarqueeWhite.loadFromFile("./data/images/Marquee white.png");
	chess.tMarqueeGreen.loadFromFile("./data/images/Marquee green.png");

	font.loadFromFile("./data/fonts/STXINGKA.TTF");
	
	spBackground.setTexture(tBackground);
	spStartPage.setTexture(tStartPage);
	spDeathPieceMarquee.setTexture(tDeathPieceMarquee);
	spPopWindow.setTexture(tPopWindow);
	spVolumeStripeSlider.setTexture(tVolumeStripeSlider);
	spRule.setTexture(tRule);
	spBigPopWindow.setTexture(tBigPopWindow);
	spRectangle.setTexture(tRectangle);
	spRuleSlider.setTexture(tRuleSlider);

	spButtons.setTexture(tButtons);
	spTurnOffButton.setTexture(tTurnOffButton);
	spSettingPageButton.setTexture(tSettingPageButton);
	spVolumeChangeButton.setTexture(tVolumeChangeButton);
	spVolumeTurnButton.setTexture(tVolumeTurnButton);
	spBackHomeButton.setTexture(tBackHomeButton);

	spPieceTakerWord.setTexture(tPieceTakerWord);
	spLastDeathWord.setTexture(tLastDeathWord);
	spWinnerWord.setTexture(tWinnerWord);
	spBackHomeWord.setTexture(tBackHomeWord);
	spCoverFileWord.setTexture(tCoverFileWord);
	spWhetherLoadWord.setTexture(tWhetherLoadWord);
	spBGMWord.setTexture(tBGMWord);
	spSEWord.setTexture(tSEWord);
	spSaveWord.setTexture(tSaveWord);
	spLoadWord.setTexture(tLoadWord);
	spNoDataWord.setTexture(tNoDataWord);

	soundButton.setBuffer(sbButton);
	soundPiece.setBuffer(sbPiece);
	soundWrongPiece.setBuffer(sbWrongPiece);

	chess.spMarqueeGrey.setTexture(chess.tMarqueeGrey);
	chess.spMarqueeRed.setTexture(chess.tMarqueeRed);
	chess.spMarqueeWhite.setTexture(chess.tMarqueeWhite);
	chess.spMarqueeGreen.setTexture(chess.tMarqueeGreen);

	chess.spMarqueeGrey.setOrigin(PIECE_EDGE_LENTH / 2, PIECE_EDGE_LENTH / 2);
	chess.spMarqueeRed.setOrigin(PIECE_EDGE_LENTH / 2, PIECE_EDGE_LENTH / 2);
	chess.spMarqueeWhite.setOrigin(PIECE_EDGE_LENTH / 2, PIECE_EDGE_LENTH / 2);
	chess.spMarqueeGreen.setOrigin(PIECE_EDGE_LENTH / 2, PIECE_EDGE_LENTH / 2);

	text.setFont(font);
}

void Game::drawSingleButton(Sprite* spButton, IntRect* ButtonRect, int grid_x, int grid_y, int button_position_x, int button_position_y, int button_width, int button_height)
{
	(*spButton).setTextureRect(IntRect(grid_x * button_width, grid_y * button_height, button_width, button_height));
	(*spButton).setPosition(button_position_x, button_position_y);
	(*ButtonRect).left = button_position_x;
	(*ButtonRect).top = button_position_y;
	(*ButtonRect).width = button_width;
	(*ButtonRect).height = button_height;
	window.draw(*spButton);
}

void Game::drawButtons(int GS)
{
	switch (GS)
	{
	case START_PAGE:
		//ButtonRectLocalStart
		drawSingleButton(&spButtons, &ButtonRectLocalStart, 2, 0, BUTTON_LOCAL_START_X, BUTTON_LOCAL_START_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
		//ButtonRectOnlineStart
		drawSingleButton(&spButtons, &ButtonRectOnlineStart, 3, 0, BUTTON_ONLINE_START_X, BUTTON_ONLINE_START_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
		//ButtonRectExit
		drawSingleButton(&spButtons, &ButtonRectExit, 1, 0, BUTTON_STARTPAGE_EXIT_X, BUTTON_STARTPAGE_EXIT_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
		//ButtonRectSetting
		drawSingleButton(&spButtons, &ButtonRectSetting, 0, 2, BUTTON_STARTPAGE_SETTING_X, BUTTON_STARTPAGE_SETTING_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
		break;

	case GAME_PAGE:
		spButtons.setScale(BUTTON_GAMEPAGE_SCALE, BUTTON_GAMEPAGE_SCALE);
		//ButtonRectRegret
		drawSingleButton(&spButtons, &ButtonRectRegret, 0, 1, BUTTON_REGRET_X, BUTTON_REGRET_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
		//ButtonRectTie
		drawSingleButton(&spButtons, &ButtonRectTie, 0, 3, BUTTON_TIE_X, BUTTON_TIE_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
		//ButtonRectSurrender
		drawSingleButton(&spButtons, &ButtonRectSurrender, 1, 1, BUTTON_SURRENDER_X, BUTTON_SURRENDER_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
		spButtons.setScale(1,1);

		//ButtonRectSetting
		drawSingleButton(&spButtons, &ButtonRectSetting, 0, 2, BUTTON_GAMEPAGE_SETTING_X, BUTTON_GAMEPAGE_SETTING_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
		break;

	case GAME_PAUSED_PAGE:
		//ButtonRectTurnOff
		drawSingleButton(&spTurnOffButton, &ButtonRectTurnOff, 0, 0, BUTTON_TURN_OFF_X + POP_WINDOW_X, BUTTON_TURN_OFF_Y + POP_WINDOW_Y, BUTTON_TURN_OFF_EDGE_LENTH, BUTTON_TURN_OFF_EDGE_LENTH);

		switch (lastClickState)
		{
		case REGRET_BUTTON:
		case TIE_BUTTON:
		case SURRENDER_BUTTON:
		case HOME_BUTTON:
			//ButtonRectYes
			drawSingleButton(&spButtons, &ButtonRectYes, 2, 2, BUTTON_YES_X + POP_WINDOW_X, BUTTON_YES_Y + POP_WINDOW_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
			//ButtonRectNo
			drawSingleButton(&spButtons, &ButtonRectNo, 3, 2, BUTTON_NO_X + POP_WINDOW_X, BUTTON_NO_Y + POP_WINDOW_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
			break;

		case SETTING_BUTTON_FROM_START_PAGE:
			switch (settingPage)
			{
			case SETTING_PAGE_LOGIC:
				//ButtonRectSettingPageLogic
				drawSingleButton(&spSettingPageButton, &ButtonRectSettingPageLogic, 0, 0, BUTTON_SETTING_PAGE_LOGIC_X + POP_WINDOW_X, BUTTON_SETTING_PAGE_Y + POP_WINDOW_Y, SETTING_PAGE_BUTTON_WIDTH, SETTING_PAGE_BUTTON_HEIGHT);
				//ButtonRectSettingPageRule
				drawSingleButton(&spSettingPageButton, &ButtonRectSettingPageRule, 1, 1, BUTTON_SETTING_PAGE_RULE_X + POP_WINDOW_X, BUTTON_SETTING_PAGE_Y + POP_WINDOW_Y, SETTING_PAGE_BUTTON_WIDTH, SETTING_PAGE_BUTTON_HEIGHT);

				//ButtonRectBGMVolumePlus
				drawSingleButton(&spVolumeChangeButton, &ButtonRectBGMVolumePlus, 1, 0, BUTTON_BGM_VOLUME_PLUS_X + POP_WINDOW_X, BUTTON_BGM_VOLUME_PLUS_Y + POP_WINDOW_Y, BUTTON_VOLUME_CHANGE_EDGE_LENTH, BUTTON_VOLUME_CHANGE_EDGE_LENTH);
				//ButtonRectBGMVolumeSubstruct
				drawSingleButton(&spVolumeChangeButton, &ButtonRectBGMVolumeSubstruct, 0, 0, BUTTON_BGM_VOLUME_SUBSTRUCT_X + POP_WINDOW_X, BUTTON_BGM_VOLUME_SUBSTRUCT_Y + POP_WINDOW_Y, BUTTON_VOLUME_CHANGE_EDGE_LENTH, BUTTON_VOLUME_CHANGE_EDGE_LENTH);
				//ButtonRectBGMVolumeTurn
				if (isMusicOn)
					drawSingleButton(&spVolumeTurnButton, &ButtonRectBGMVolumeTurn, 1, 0, BUTTON_BGM_VOLUME_TURN_X + POP_WINDOW_X, BUTTON_BGM_VOLUME_TURN_Y + POP_WINDOW_Y, BUTTON_VOLUME_TURN_EDGE_LENTH, BUTTON_VOLUME_TURN_EDGE_LENTH);
				else
					drawSingleButton(&spVolumeTurnButton, &ButtonRectBGMVolumeTurn, 0, 0, BUTTON_BGM_VOLUME_TURN_X + POP_WINDOW_X, BUTTON_BGM_VOLUME_TURN_Y + POP_WINDOW_Y, BUTTON_VOLUME_TURN_EDGE_LENTH, BUTTON_VOLUME_TURN_EDGE_LENTH);
				
				//ButtonRectSEVolumePlus
				drawSingleButton(&spVolumeChangeButton, &ButtonRectSEVolumePlus, 1, 0, BUTTON_SE_VOLUME_PLUS_X + POP_WINDOW_X, BUTTON_SE_VOLUME_PLUS_Y + POP_WINDOW_Y, BUTTON_VOLUME_CHANGE_EDGE_LENTH, BUTTON_VOLUME_CHANGE_EDGE_LENTH);
				//ButtonRectSEVolumeSubstruct
				drawSingleButton(&spVolumeChangeButton, &ButtonRectSEVolumeSubstruct, 0, 0, BUTTON_SE_VOLUME_SUBSTRUCT_X + POP_WINDOW_X, BUTTON_SE_VOLUME_SUBSTRUCT_Y + POP_WINDOW_Y, BUTTON_VOLUME_CHANGE_EDGE_LENTH, BUTTON_VOLUME_CHANGE_EDGE_LENTH);
				//ButtonRectSEVolumeTurn
				if (isSoundOn)
					drawSingleButton(&spVolumeTurnButton, &ButtonRectSEVolumeTurn, 1, 0, BUTTON_SE_VOLUME_TURN_X + POP_WINDOW_X, BUTTON_SE_VOLUME_TURN_Y + POP_WINDOW_Y, BUTTON_VOLUME_TURN_EDGE_LENTH, BUTTON_VOLUME_TURN_EDGE_LENTH);
				else
					drawSingleButton(&spVolumeTurnButton, &ButtonRectSEVolumeTurn, 0, 0, BUTTON_SE_VOLUME_TURN_X + POP_WINDOW_X, BUTTON_SE_VOLUME_TURN_Y + POP_WINDOW_Y, BUTTON_VOLUME_TURN_EDGE_LENTH, BUTTON_VOLUME_TURN_EDGE_LENTH);

				//ButtonRectBGMStripe
				spVolumeStripeSlider.setTextureRect(IntRect(0, 0, BUTTON_VOLUME_STRIPE_WIDTH, BUTTON_VOLUME_STRIPE_HEIGHT));
				spVolumeStripeSlider.setOrigin(0, 0);
				spVolumeStripeSlider.setPosition(BUTTON_BGM_STRIPE_X + POP_WINDOW_X, BUTTON_BGM_STRIPE_Y + POP_WINDOW_Y);
				ButtonRectBGMStripe.left = BUTTON_BGM_STRIPE_X + POP_WINDOW_X;
				ButtonRectBGMStripe.top = BUTTON_BGM_STRIPE_Y + POP_WINDOW_Y;
				ButtonRectBGMStripe.width = BUTTON_VOLUME_STRIPE_WIDTH;
				ButtonRectBGMStripe.height = BUTTON_VOLUME_STRIPE_HEIGHT;
				window.draw(spVolumeStripeSlider);
				//ButtonRectBGMSlider
				spVolumeStripeSlider.setTextureRect(IntRect(0, BUTTON_VOLUME_STRIPE_HEIGHT, BUTTON_VOLUME_SLIDER_WIDTH, BUTTON_VOLUME_SLIDER_HEIGHT));
				spVolumeStripeSlider.setOrigin(BUTTON_VOLUME_SLIDER_WIDTH / 2, 0);
				spVolumeStripeSlider.setPosition((BUTTON_VOLUME_STRIPE_WIDTH * musicVolume / 100) + BUTTON_BGM_STRIPE_X + POP_WINDOW_X, BUTTON_BGM_SLIDER_Y + POP_WINDOW_Y);
				ButtonRectBGMSlider.left = (BUTTON_VOLUME_STRIPE_WIDTH * musicVolume / 100) + BUTTON_BGM_STRIPE_X + POP_WINDOW_X;
				ButtonRectBGMSlider.top = BUTTON_BGM_SLIDER_Y + POP_WINDOW_Y;
				ButtonRectBGMSlider.width = BUTTON_VOLUME_SLIDER_WIDTH;
				ButtonRectBGMSlider.height = BUTTON_VOLUME_SLIDER_HEIGHT;
				window.draw(spVolumeStripeSlider);

				//ButtonRectSEStripe
				spVolumeStripeSlider.setTextureRect(IntRect(0, 0, BUTTON_VOLUME_STRIPE_WIDTH, BUTTON_VOLUME_STRIPE_HEIGHT));
				spVolumeStripeSlider.setOrigin(0, 0);
				spVolumeStripeSlider.setPosition(BUTTON_SE_STRIPE_X + POP_WINDOW_X, BUTTON_SE_STRIPE_Y + POP_WINDOW_Y);
				ButtonRectSEStripe.left = BUTTON_SE_STRIPE_X + POP_WINDOW_X;
				ButtonRectSEStripe.top = BUTTON_SE_STRIPE_Y + POP_WINDOW_Y;
				ButtonRectSEStripe.width = BUTTON_VOLUME_STRIPE_WIDTH;
				ButtonRectSEStripe.height = BUTTON_VOLUME_STRIPE_HEIGHT;
				window.draw(spVolumeStripeSlider);
				//ButtonRectSESlider
				spVolumeStripeSlider.setTextureRect(IntRect(0, BUTTON_VOLUME_STRIPE_HEIGHT, BUTTON_VOLUME_SLIDER_WIDTH, BUTTON_VOLUME_SLIDER_HEIGHT));
				spVolumeStripeSlider.setOrigin(BUTTON_VOLUME_SLIDER_WIDTH / 2, 0);
				spVolumeStripeSlider.setPosition((BUTTON_VOLUME_STRIPE_WIDTH * soundVolume / 100) + BUTTON_SE_STRIPE_X + POP_WINDOW_X, BUTTON_SE_SLIDER_Y + POP_WINDOW_Y);
				ButtonRectSESlider.left = (BUTTON_VOLUME_STRIPE_WIDTH * soundVolume / 100) + BUTTON_SE_STRIPE_X + POP_WINDOW_X;
				ButtonRectSESlider.top = BUTTON_SE_SLIDER_Y + POP_WINDOW_Y;
				ButtonRectSESlider.width = BUTTON_VOLUME_SLIDER_WIDTH;
				ButtonRectSESlider.height = BUTTON_VOLUME_SLIDER_HEIGHT;
				window.draw(spVolumeStripeSlider);

				break;

			case SETTING_PAGE_RULE:
				//ButtonRectSettingPageLogic
				drawSingleButton(&spSettingPageButton, &ButtonRectSettingPageLogic, 0, 1, BUTTON_SETTING_PAGE_LOGIC_X + POP_WINDOW_X, BUTTON_SETTING_PAGE_Y + POP_WINDOW_Y, SETTING_PAGE_BUTTON_WIDTH, SETTING_PAGE_BUTTON_HEIGHT);
				//ButtonRectSettingPageRule
				drawSingleButton(&spSettingPageButton, &ButtonRectSettingPageRule, 1, 0, BUTTON_SETTING_PAGE_RULE_X + POP_WINDOW_X, BUTTON_SETTING_PAGE_Y + POP_WINDOW_Y, SETTING_PAGE_BUTTON_WIDTH, SETTING_PAGE_BUTTON_HEIGHT);
				//ButtonRectRuleSlider
				drawSingleButton(&spRuleSlider, &ButtonRectRuleSlider, 0, 0, RULE_SLIDER_X + POP_WINDOW_X, ruleAdjustment * (RULE_SLIDER_LAST_Y - RULE_SLIDER_Y) / RULE_HEIGHT + RULE_SLIDER_Y + POP_WINDOW_Y, RULE_SLIDER_WIDTH, RULE_SLIDER_HEIGHT);
				break;
			}
			break;
		case SETTING_BUTTON_FROM_GAME_PAGE:
			switch (settingPage)
			{
			case SETTING_PAGE_LOGIC:
				//ButtonRectSettingPageLogic
				drawSingleButton(&spSettingPageButton, &ButtonRectSettingPageLogic, 0, 0, BUTTON_SETTING_PAGE_LOGIC_X + POP_WINDOW_X, BUTTON_SETTING_PAGE_Y + POP_WINDOW_Y, SETTING_PAGE_BUTTON_WIDTH, SETTING_PAGE_BUTTON_HEIGHT);
				//ButtonRectSettingPageRule
				drawSingleButton(&spSettingPageButton, &ButtonRectSettingPageRule, 1, 1, BUTTON_SETTING_PAGE_RULE_X + POP_WINDOW_X, BUTTON_SETTING_PAGE_Y + POP_WINDOW_Y, SETTING_PAGE_BUTTON_WIDTH, SETTING_PAGE_BUTTON_HEIGHT);

				//ButtonRectSave
				drawSingleButton(&spButtons, &ButtonRectSave, 2, 1, BUTTON_SAVE_X + POP_WINDOW_X, BUTTON_SAVE_Y + POP_WINDOW_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
				//ButtonRectLoad
				drawSingleButton(&spButtons, &ButtonRectLoad, 3, 1, BUTTON_LOAD_X + POP_WINDOW_X, BUTTON_LOAD_Y + POP_WINDOW_Y, BUTTON_WIDTH, BUTTON_HEIGHT);

				//ButtonRectHome
				drawSingleButton(&spBackHomeButton, &ButtonRectHome, 1, 0, BUTTON_HOME_X + POP_WINDOW_X, BUTTON_HOME_Y + POP_WINDOW_Y, BUTTON_HOME_BACK_EDGE_LENTH, BUTTON_HOME_BACK_EDGE_LENTH);

				//ButtonRectBGMVolumePlus
				drawSingleButton(&spVolumeChangeButton, &ButtonRectBGMVolumePlus, 1, 0, BUTTON_BGM_VOLUME_PLUS_X + POP_WINDOW_X, BUTTON_BGM_VOLUME_PLUS_Y + POP_WINDOW_Y, BUTTON_VOLUME_CHANGE_EDGE_LENTH, BUTTON_VOLUME_CHANGE_EDGE_LENTH);
				//ButtonRectBGMVolumeSubstruct
				drawSingleButton(&spVolumeChangeButton, &ButtonRectBGMVolumeSubstruct, 0, 0, BUTTON_BGM_VOLUME_SUBSTRUCT_X + POP_WINDOW_X, BUTTON_BGM_VOLUME_SUBSTRUCT_Y + POP_WINDOW_Y, BUTTON_VOLUME_CHANGE_EDGE_LENTH, BUTTON_VOLUME_CHANGE_EDGE_LENTH);
				//ButtonRectBGMVolumeTurn
				if (isMusicOn)
					drawSingleButton(&spVolumeTurnButton, &ButtonRectBGMVolumeTurn, 1, 0, BUTTON_BGM_VOLUME_TURN_X + POP_WINDOW_X, BUTTON_BGM_VOLUME_TURN_Y + POP_WINDOW_Y, BUTTON_VOLUME_TURN_EDGE_LENTH, BUTTON_VOLUME_TURN_EDGE_LENTH);
				else
					drawSingleButton(&spVolumeTurnButton, &ButtonRectBGMVolumeTurn, 0, 0, BUTTON_BGM_VOLUME_TURN_X + POP_WINDOW_X, BUTTON_BGM_VOLUME_TURN_Y + POP_WINDOW_Y, BUTTON_VOLUME_TURN_EDGE_LENTH, BUTTON_VOLUME_TURN_EDGE_LENTH);

				//ButtonRectSEVolumePlus
				drawSingleButton(&spVolumeChangeButton, &ButtonRectSEVolumePlus, 1, 0, BUTTON_SE_VOLUME_PLUS_X + POP_WINDOW_X, BUTTON_SE_VOLUME_PLUS_Y + POP_WINDOW_Y, BUTTON_VOLUME_CHANGE_EDGE_LENTH, BUTTON_VOLUME_CHANGE_EDGE_LENTH);
				//ButtonRectSEVolumeSubstruct
				drawSingleButton(&spVolumeChangeButton, &ButtonRectSEVolumeSubstruct, 0, 0, BUTTON_SE_VOLUME_SUBSTRUCT_X + POP_WINDOW_X, BUTTON_SE_VOLUME_SUBSTRUCT_Y + POP_WINDOW_Y, BUTTON_VOLUME_CHANGE_EDGE_LENTH, BUTTON_VOLUME_CHANGE_EDGE_LENTH);
				//ButtonRectSEVolumeTurn
				if (isSoundOn)
					drawSingleButton(&spVolumeTurnButton, &ButtonRectSEVolumeTurn, 1, 0, BUTTON_SE_VOLUME_TURN_X + POP_WINDOW_X, BUTTON_SE_VOLUME_TURN_Y + POP_WINDOW_Y, BUTTON_VOLUME_TURN_EDGE_LENTH, BUTTON_VOLUME_TURN_EDGE_LENTH);
				else
					drawSingleButton(&spVolumeTurnButton, &ButtonRectSEVolumeTurn, 0, 0, BUTTON_SE_VOLUME_TURN_X + POP_WINDOW_X, BUTTON_SE_VOLUME_TURN_Y + POP_WINDOW_Y, BUTTON_VOLUME_TURN_EDGE_LENTH, BUTTON_VOLUME_TURN_EDGE_LENTH);

				//ButtonRectBGMStripe
				spVolumeStripeSlider.setTextureRect(IntRect(0, 0, BUTTON_VOLUME_STRIPE_WIDTH, BUTTON_VOLUME_STRIPE_HEIGHT));
				spVolumeStripeSlider.setOrigin(0, 0);
				spVolumeStripeSlider.setPosition(BUTTON_BGM_STRIPE_X + POP_WINDOW_X, BUTTON_BGM_STRIPE_Y + POP_WINDOW_Y);
				ButtonRectBGMStripe.left = BUTTON_BGM_STRIPE_X + POP_WINDOW_X;
				ButtonRectBGMStripe.top = BUTTON_BGM_STRIPE_Y + POP_WINDOW_Y;
				ButtonRectBGMStripe.width = BUTTON_VOLUME_STRIPE_WIDTH;
				ButtonRectBGMStripe.height = BUTTON_VOLUME_STRIPE_HEIGHT;
				window.draw(spVolumeStripeSlider);
				//ButtonRectBGMSlider
				spVolumeStripeSlider.setTextureRect(IntRect(0, BUTTON_VOLUME_STRIPE_HEIGHT, BUTTON_VOLUME_SLIDER_WIDTH, BUTTON_VOLUME_SLIDER_HEIGHT));
				spVolumeStripeSlider.setOrigin(BUTTON_VOLUME_SLIDER_WIDTH / 2, 0);
				spVolumeStripeSlider.setPosition((BUTTON_VOLUME_STRIPE_WIDTH* musicVolume / 100) + BUTTON_BGM_STRIPE_X + POP_WINDOW_X, BUTTON_BGM_SLIDER_Y + POP_WINDOW_Y);
				ButtonRectBGMSlider.left = (BUTTON_VOLUME_STRIPE_WIDTH * musicVolume / 100) + BUTTON_BGM_STRIPE_X + POP_WINDOW_X;
				ButtonRectBGMSlider.top = BUTTON_BGM_SLIDER_Y + POP_WINDOW_Y;
				ButtonRectBGMSlider.width = BUTTON_VOLUME_SLIDER_WIDTH;
				ButtonRectBGMSlider.height = BUTTON_VOLUME_SLIDER_HEIGHT;
				window.draw(spVolumeStripeSlider);

				//ButtonRectSEStripe
				spVolumeStripeSlider.setTextureRect(IntRect(0, 0, BUTTON_VOLUME_STRIPE_WIDTH, BUTTON_VOLUME_STRIPE_HEIGHT));
				spVolumeStripeSlider.setOrigin(0, 0);
				spVolumeStripeSlider.setPosition(BUTTON_SE_STRIPE_X + POP_WINDOW_X, BUTTON_SE_STRIPE_Y + POP_WINDOW_Y);
				ButtonRectSEStripe.left = BUTTON_SE_STRIPE_X + POP_WINDOW_X;
				ButtonRectSEStripe.top = BUTTON_SE_STRIPE_Y + POP_WINDOW_Y;
				ButtonRectSEStripe.width = BUTTON_VOLUME_STRIPE_WIDTH;
				ButtonRectSEStripe.height = BUTTON_VOLUME_STRIPE_HEIGHT;
				window.draw(spVolumeStripeSlider);
				//ButtonRectSESlider
				spVolumeStripeSlider.setTextureRect(IntRect(0, BUTTON_VOLUME_STRIPE_HEIGHT, BUTTON_VOLUME_SLIDER_WIDTH, BUTTON_VOLUME_SLIDER_HEIGHT));
				spVolumeStripeSlider.setOrigin(BUTTON_VOLUME_SLIDER_WIDTH / 2, 0);
				spVolumeStripeSlider.setPosition((BUTTON_VOLUME_STRIPE_WIDTH* soundVolume / 100) + BUTTON_SE_STRIPE_X + POP_WINDOW_X, BUTTON_SE_SLIDER_Y + POP_WINDOW_Y);
				ButtonRectSESlider.left = (BUTTON_VOLUME_STRIPE_WIDTH * soundVolume / 100) + BUTTON_SE_STRIPE_X + POP_WINDOW_X;
				ButtonRectSESlider.top = BUTTON_SE_SLIDER_Y + POP_WINDOW_Y;
				ButtonRectSESlider.width = BUTTON_VOLUME_SLIDER_WIDTH;
				ButtonRectSESlider.height = BUTTON_VOLUME_SLIDER_HEIGHT;
				window.draw(spVolumeStripeSlider);

				break;

			case SETTING_PAGE_RULE:
				//ButtonRectSettingPageLogic
				drawSingleButton(&spSettingPageButton, &ButtonRectSettingPageLogic, 0, 1, BUTTON_SETTING_PAGE_LOGIC_X + POP_WINDOW_X, BUTTON_SETTING_PAGE_Y + POP_WINDOW_Y, SETTING_PAGE_BUTTON_WIDTH, SETTING_PAGE_BUTTON_HEIGHT);
				//ButtonRectSettingPageRule
				drawSingleButton(&spSettingPageButton, &ButtonRectSettingPageRule, 1, 0, BUTTON_SETTING_PAGE_RULE_X + POP_WINDOW_X, BUTTON_SETTING_PAGE_Y + POP_WINDOW_Y, SETTING_PAGE_BUTTON_WIDTH, SETTING_PAGE_BUTTON_HEIGHT);
				//ButtonRectRuleSlider
				drawSingleButton(&spRuleSlider, &ButtonRectRuleSlider, 0, 0, RULE_SLIDER_X + POP_WINDOW_X, ruleAdjustment* (RULE_SLIDER_LAST_Y - RULE_SLIDER_Y) / RULE_HEIGHT + RULE_SLIDER_Y + POP_WINDOW_Y, RULE_SLIDER_WIDTH, RULE_SLIDER_HEIGHT);
				break;
			}
			break;
		}
		break;
	case SAVE_PAGE:
	case LOAD_PAGE:
		//ButtonRectBack
		drawSingleButton(&spBackHomeButton, &ButtonRectBack, 0, 0, BUTTON_BACK_X + BIG_POP_WINDOW_X, BUTTON_BACK_Y + BIG_POP_WINDOW_Y, BUTTON_HOME_BACK_EDGE_LENTH, BUTTON_HOME_BACK_EDGE_LENTH);
		//ButtonRectSL1-6
		drawSingleButton(&spRectangle, &ButtonRectSLOne, 0, 0, SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_RECTANGLE_Y_1 + BIG_POP_WINDOW_Y, RECTANGLE_WIDTH, RECTANGLE_HEIGHT);
		drawSingleButton(&spRectangle, &ButtonRectSLTwo, 0, 0, SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_RECTANGLE_Y_2 + BIG_POP_WINDOW_Y, RECTANGLE_WIDTH, RECTANGLE_HEIGHT);
		drawSingleButton(&spRectangle, &ButtonRectSLThree, 0, 0, SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_RECTANGLE_Y_3 + BIG_POP_WINDOW_Y, RECTANGLE_WIDTH, RECTANGLE_HEIGHT);
		drawSingleButton(&spRectangle, &ButtonRectSLFour, 0, 0, SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_RECTANGLE_Y_1 + BIG_POP_WINDOW_Y, RECTANGLE_WIDTH, RECTANGLE_HEIGHT);
		drawSingleButton(&spRectangle, &ButtonRectSLFive, 0, 0, SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_RECTANGLE_Y_2 + BIG_POP_WINDOW_Y, RECTANGLE_WIDTH, RECTANGLE_HEIGHT);
		drawSingleButton(&spRectangle, &ButtonRectSLSix, 0, 0, SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_RECTANGLE_Y_3 + BIG_POP_WINDOW_Y, RECTANGLE_WIDTH, RECTANGLE_HEIGHT);
		break;

	case GAME_OVER_PAGE:
		//ButtonRectRestart
		drawSingleButton(&spButtons, &ButtonRectRestart, 4, 0, BUTTON_RESTART_X + POP_WINDOW_X, BUTTON_RESTART_Y + POP_WINDOW_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
		//ButtonRectExit
		drawSingleButton(&spButtons, &ButtonRectExit, 1, 0, BUTTON_GAMEOVER_EXIT_X + POP_WINDOW_X, BUTTON_GAMEOVER_EXIT_Y + POP_WINDOW_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
		break;

	default:
		break;
	}
}

void Game::drawPiece()
{
	for (int i = 0; i < 32; i++)
	{
		if (!chess.piece[i].isDeath)
		{
			chess.piece[i].spPiece.setOrigin(PIECE_EDGE_LENTH / 2, PIECE_EDGE_LENTH / 2);
			chess.piece[i].spPiece.setPosition(ORIGIN_GRID_CENTER_POINT_X + chess.piece[i].piecePosition.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + chess.piece[i].piecePosition.y * GRID_SIZE);
			window.draw(chess.piece[i].spPiece);
		}
	}
}

void Game::drawSaveWord(std::string s, int saveWordPosX, int saveWordPosY, int saveTimePosX, int saveTimePosY)
{
	std::stringstream ss;

	text.setCharacterSize(48);
	text.setFillColor(Color::Color(0, 0, 0, 255));
	if (s == "save 1.txt")
		text.setString(L"存档一");
	else if (s == "save 2.txt")
		text.setString(L"存档二");
	else if (s == "save 3.txt")
		text.setString(L"存档三");
	else if (s == "save 4.txt")
		text.setString(L"存档四");
	else if (s == "save 5.txt")
		text.setString(L"存档五");
	else if (s == "save 6.txt")
		text.setString(L"存档六");
	text.setOrigin(0, 0);
	text.setPosition(saveWordPosX, saveWordPosY);
	window.draw(text);

	in.open(s);
	if (!in)
	{
		fRect = spNoDataWord.getLocalBounds();
		spNoDataWord.setOrigin(fRect.width, fRect.height);
		spNoDataWord.setPosition(saveTimePosX, saveTimePosY);
		window.draw(spNoDataWord);
	}
	else
	{
		text.setCharacterSize(36);
		in >> sysTime.wYear >> sysTime.wMonth >> sysTime.wDay;
		in >> sysTime.wHour >> sysTime.wMinute >> sysTime.wSecond;

		ss.str("");
		ss << sysTime.wYear << " / " << sysTime.wMonth << " / " << sysTime.wDay << "  " << sysTime.wHour << ":" << sysTime.wMinute << ":" << sysTime.wSecond;
		text.setString(ss.str());
		fRect = text.getLocalBounds();
		text.setOrigin(fRect.width, fRect.height);
		text.setPosition(saveTimePosX, saveTimePosY);
		window.draw(text);
	}
	in.close();
}

void Game::gamePageDraw()
{
	spBackground.setPosition(0, 0);
	window.draw(spBackground);

	if (chess.isClicked && !chess.firstClick)
	{
		chess.spMarqueeGrey.setPosition(ORIGIN_GRID_CENTER_POINT_X + chess.chosenPos.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + chess.chosenPos.y * GRID_SIZE);
		window.draw(chess.spMarqueeGrey);
	}

	if (!chess.firstOpen && !chess.secondClick)
	{
		chess.spMarqueeRed.setPosition(ORIGIN_GRID_CENTER_POINT_X + chess.chosenPos2.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + chess.chosenPos2.y * GRID_SIZE);
		window.draw(chess.spMarqueeRed);
	}

	if (chess.isClicked && chess.firstClick)
	{
		chess.spMarqueeGrey.setPosition(ORIGIN_GRID_CENTER_POINT_X + chess.chosenPos.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + chess.chosenPos.y * GRID_SIZE);
		window.draw(chess.spMarqueeGrey);
	}

	drawPiece();

	spPieceTakerWord.setPosition(PIECE_TAKER_WORD_X, PIECE_TAKER_WORD_Y);
	window.draw(spPieceTakerWord);

	if (chess.bloc == c_RED && !chess.firstOpen)
		spBlocWord.setTexture(tRedBlocWord);
	else if (chess.bloc == c_BLACK && !chess.firstOpen)
		spBlocWord.setTexture(tBlackBlocWord);
	else if (chess.firstOpen)
		spBlocWord.setTexture(tUnknownBlocWord);

	spBlocWord.setPosition(BLOC_WORD_X, BLOC_WORD_Y);
	window.draw(spBlocWord);

	spLastDeathWord.setPosition(LAST_DEATH_WORD_X, LAST_DEATH_WORD_Y);
	window.draw(spLastDeathWord);

	spDeathPieceMarquee.setPosition(DEATH_PIECE_MARQUEE_X, DEATH_PIECE_MARQUEE_Y);
	window.draw(spDeathPieceMarquee);

	switch (chess.lastDeadPieceNum)
	{
	case 0:
		break;
	case 1:
		chess.lastDeadPiece[0].spPiece.setPosition(DEATH_PIECE_1_X, DEATH_PIECE_Y);
		chess.lastDeadPiece[0].pieceOpen(&chess.tPiece);
		window.draw(chess.lastDeadPiece[0].spPiece);
		break;
	case 2:
		chess.lastDeadPiece[0].spPiece.setPosition(DEATH_PIECE_2_FIRST_X, DEATH_PIECE_Y);
		chess.lastDeadPiece[1].spPiece.setPosition(DEATH_PIECE_2_SECOND_X, DEATH_PIECE_Y);
		chess.lastDeadPiece[0].pieceOpen(&chess.tPiece);
		chess.lastDeadPiece[1].pieceOpen(&chess.tPiece);
		window.draw(chess.lastDeadPiece[0].spPiece);
		window.draw(chess.lastDeadPiece[1].spPiece);
		break;
	}

	if (chess.firstClick && !chess.secondClick && chess.Attacker->isOpened)
	{
		Vector2i Pos1, Pos2, Pos3, Pos4;
		Pos1.x = chess.Attacker->piecePosition.x - 1;
		Pos1.y = chess.Attacker->piecePosition.y;
		Pos2.x = chess.Attacker->piecePosition.x + 1;
		Pos2.y = chess.Attacker->piecePosition.y;
		Pos3.x = chess.Attacker->piecePosition.x;
		Pos3.y = chess.Attacker->piecePosition.y - 1;
		Pos4.x = chess.Attacker->piecePosition.x;
		Pos4.y = chess.Attacker->piecePosition.y + 1;

		ChessPiece* p_Left = new ChessPiece;
		ChessPiece* p_Right = new ChessPiece;
		ChessPiece* p_Up = new ChessPiece;
		ChessPiece* p_Down = new ChessPiece;

		p_Left->bloc = -1;
		p_Right->bloc = -1;
		p_Up->bloc = -1;
		p_Down->bloc = -1;

		p_Left->isOpened = false;
		p_Right->isOpened = false;
		p_Up->isOpened = false;
		p_Down->isOpened = false;

		for (int i = 0; i < 32; i++)
		{
			if (chess.piece[i].isDeath)
				continue;

			if (chess.piece[i].piecePosition == Pos1)
			{
				p_Left = &chess.piece[i];
				break;
			}
		}

		for (int i = 0; i < 32; i++)
		{
			if (chess.piece[i].isDeath)
				continue;

			if (chess.piece[i].piecePosition == Pos2)
			{
				p_Right = &chess.piece[i];
				break;
			}
		}

		for (int i = 0; i < 32; i++)
		{
			if (chess.piece[i].isDeath)
				continue;

			if (chess.piece[i].piecePosition == Pos3)
			{
				p_Up = &chess.piece[i];
				break;
			}
		}

		for (int i = 0; i < 32; i++)
		{
			if (chess.piece[i].isDeath)
				continue;

			if (chess.piece[i].piecePosition == Pos4)
			{
				p_Down = &chess.piece[i];
				break;
			}
		}

		switch (chess.Attacker->pieceType)
		{
		case c_CANNON:
			if (Pos1.x >= 0 && Pos1.x < 8 && Pos1.y >= 0 && Pos1.y < 4 && !chess.cb.isPiecePosUsed[Pos1.x][Pos1.y])
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos1.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos1.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}
			else if (Pos1.x >= 0 && Pos1.x < 8 && Pos1.y >= 0 && Pos1.y < 4)
			{
				for (int i = Pos1.x - 1; i >= 0; i--)
				{
					if (chess.cb.isPiecePosUsed[i][Pos1.y])
					{
						chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + i * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos1.y * GRID_SIZE);
						window.draw(chess.spMarqueeGreen);
						break;
					}
				}
			}

			if (Pos2.x >= 0 && Pos2.x < 8 && Pos2.y >= 0 && Pos2.y < 4 && !chess.cb.isPiecePosUsed[Pos2.x][Pos2.y])
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos2.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos2.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}
			else if (Pos2.x >= 0 && Pos2.x < 8 && Pos2.y >= 0 && Pos2.y < 4)
			{
				for (int i = Pos2.x + 1; i < 8; i++)
				{
					if (chess.cb.isPiecePosUsed[i][Pos2.y])
					{
						chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + i * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos2.y * GRID_SIZE);
						window.draw(chess.spMarqueeGreen);
						break;
					}
				}
			}

			if (Pos3.x >= 0 && Pos3.x < 8 && Pos3.y >= 0 && Pos3.y < 4 && !chess.cb.isPiecePosUsed[Pos3.x][Pos3.y])
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos3.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos3.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}
			else if (Pos3.x >= 0 && Pos3.x < 8 && Pos3.y >= 0 && Pos3.y < 4)
			{
				for (int i = Pos3.y - 1; i >= 0; i--)
				{
					if (chess.cb.isPiecePosUsed[Pos3.x][i])
					{
						chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos3.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + i * GRID_SIZE);
						window.draw(chess.spMarqueeGreen);
						break;
					}
				}
			}

			if (Pos4.x >= 0 && Pos4.x < 8 && Pos4.y >= 0 && Pos4.y < 4 && !chess.cb.isPiecePosUsed[Pos4.x][Pos4.y])
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos4.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos4.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}
			else if (Pos4.x >= 0 && Pos4.x < 8 && Pos4.y >= 0 && Pos4.y < 4)
			{
				for (int i = Pos4.y + 1; i < 4; i++)
				{
					if (chess.cb.isPiecePosUsed[Pos4.x][i])
					{
						chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos4.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + i * GRID_SIZE);
						window.draw(chess.spMarqueeGreen);
						break;
					}
				}
			}

			break;

		case c_CHARIOT:
			if (Pos1.x >= 0 && Pos1.x < 8 && Pos1.y >= 0 && Pos1.y < 4)
			{
				if (p_Left->bloc != chess.Attacker->bloc || !p_Left->isOpened)
				{
					chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos1.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos1.y * GRID_SIZE);
					window.draw(chess.spMarqueeGreen);
				}

				Pos1.x -= 1;
				p_Left = new ChessPiece;
				p_Left->bloc = -1;
				p_Left->isOpened = false;

				for (int i = 0; i < 32; i++)
				{
					if (chess.piece[i].isDeath)
						continue;

					if (chess.piece[i].piecePosition == Pos1)
					{
						p_Left = &chess.piece[i];
						break;
					}
				}

				if (!chess.cb.isPiecePosUsed[Pos1.x + 1][Pos1.y] && Pos1.x >= 0 && (p_Left->bloc != chess.Attacker->bloc || !p_Left->isOpened))
				{
					chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos1.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos1.y * GRID_SIZE);
					window.draw(chess.spMarqueeGreen);
				}
			}

			if (Pos2.x >= 0 && Pos2.x < 8 && Pos2.y >= 0 && Pos2.y < 4)
			{
				if (p_Right->bloc != chess.Attacker->bloc || !p_Right->isOpened)
				{
					chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos2.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos2.y * GRID_SIZE);
					window.draw(chess.spMarqueeGreen);
				}

				Pos2.x += 1;
				p_Right = new ChessPiece;
				p_Right->bloc = -1;
				p_Right->isOpened = false;

				for (int i = 0; i < 32; i++)
				{
					if (chess.piece[i].isDeath)
						continue;

					if (chess.piece[i].piecePosition == Pos2)
					{
						p_Right = &chess.piece[i];
						break;
					}
				}

				if (!chess.cb.isPiecePosUsed[Pos2.x - 1][Pos2.y] && Pos2.x < 8 && (p_Right->bloc != chess.Attacker->bloc || !p_Right->isOpened))
				{
					chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos2.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos2.y * GRID_SIZE);
					window.draw(chess.spMarqueeGreen);
				}
			}

			if (Pos3.x >= 0 && Pos3.x < 8 && Pos3.y >= 0 && Pos3.y < 4)
			{
				if (p_Up->bloc != chess.Attacker->bloc || !p_Up->isOpened)
				{
					chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos3.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos3.y * GRID_SIZE);
					window.draw(chess.spMarqueeGreen);
				}

				Pos3.y -= 1;
				p_Up = new ChessPiece;
				p_Up->bloc = -1;
				p_Up->isOpened = false;

				for (int i = 0; i < 32; i++)
				{
					if (chess.piece[i].isDeath)
						continue;

					if (chess.piece[i].piecePosition == Pos3)
					{
						p_Up = &chess.piece[i];
						break;
					}
				}

				if (!chess.cb.isPiecePosUsed[Pos3.x][Pos3.y + 1] && Pos3.y >= 0 && (p_Up->bloc != chess.Attacker->bloc || !p_Up->isOpened))
				{
					chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos3.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos3.y * GRID_SIZE);
					window.draw(chess.spMarqueeGreen);
				}
			}

			if (Pos4.x >= 0 && Pos4.x < 8 && Pos4.y >= 0 && Pos4.y < 4)
			{
				if (p_Down->bloc != chess.Attacker->bloc || !p_Down->isOpened)
				{
					chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos4.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos4.y * GRID_SIZE);
					window.draw(chess.spMarqueeGreen);
				}

				Pos4.y += 1;
				p_Down = new ChessPiece;
				p_Down->bloc = -1;
				p_Down->isOpened = false;

				for (int i = 0; i < 32; i++)
				{
					if (chess.piece[i].isDeath)
						continue;

					if (chess.piece[i].piecePosition == Pos4)
					{
						p_Down = &chess.piece[i];
						break;
					}
				}

				if (!chess.cb.isPiecePosUsed[Pos4.x][Pos4.y - 1] && Pos4.y < 4 && (p_Down->bloc != chess.Attacker->bloc || !p_Down->isOpened))
				{
					chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos4.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos4.y * GRID_SIZE);
					window.draw(chess.spMarqueeGreen);
				}
			}
			break;

		case c_HORSE:
			if (Pos1.x >= 0 && Pos1.x < 8 && Pos1.y >= 0 && Pos1.y < 4 && (p_Left->bloc != chess.Attacker->bloc || !p_Left->isOpened))
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos1.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos1.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}

			if (Pos2.x >= 0 && Pos2.x < 8 && Pos2.y >= 0 && Pos2.y < 4 && (p_Right->bloc != chess.Attacker->bloc || !p_Right->isOpened))
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos2.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos2.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}

			if (Pos3.x >= 0 && Pos3.x < 8 && Pos3.y >= 0 && Pos3.y < 4 && (p_Up->bloc != chess.Attacker->bloc || !p_Up->isOpened))
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos3.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos3.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}

			if (Pos4.x >= 0 && Pos4.x < 8 && Pos4.y >= 0 && Pos4.y < 4 && (p_Down->bloc != chess.Attacker->bloc || !p_Down->isOpened))
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos4.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos4.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}

			Pos1.y -= 1;
			Pos2.y += 1;
			Pos3.x += 1;
			Pos4.x -= 1;

			p_Left = new ChessPiece;
			p_Right = new ChessPiece;
			p_Up = new ChessPiece;
			p_Down = new ChessPiece;

			p_Left->bloc = -1;
			p_Right->bloc = -1;
			p_Up->bloc = -1;
			p_Down->bloc = -1;

			p_Left->isOpened = false;
			p_Right->isOpened = false;
			p_Up->isOpened = false;
			p_Down->isOpened = false;

			for (int i = 0; i < 32; i++)
			{
				if (chess.piece[i].isDeath)
					continue;

				if (chess.piece[i].piecePosition == Pos1)
				{
					p_Left = &chess.piece[i];
					break;
				}
			}

			for (int i = 0; i < 32; i++)
			{
				if (chess.piece[i].isDeath)
					continue;

				if (chess.piece[i].piecePosition == Pos2)
				{
					p_Right = &chess.piece[i];
					break;
				}
			}

			for (int i = 0; i < 32; i++)
			{
				if (chess.piece[i].isDeath)
					continue;

				if (chess.piece[i].piecePosition == Pos3)
				{
					p_Up = &chess.piece[i];
					break;
				}
			}

			for (int i = 0; i < 32; i++)
			{
				if (chess.piece[i].isDeath)
					continue;

				if (chess.piece[i].piecePosition == Pos4)
				{
					p_Down = &chess.piece[i];
					break;
				}
			}

			if (Pos1.x >= 0 && Pos1.x < 8 && Pos1.y >= 0 && Pos1.y < 4 && (p_Left->bloc != chess.Attacker->bloc || !p_Left->isOpened))
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos1.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos1.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}

			if (Pos2.x >= 0 && Pos2.x < 8 && Pos2.y >= 0 && Pos2.y < 4 && (p_Right->bloc != chess.Attacker->bloc || !p_Right->isOpened))
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos2.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos2.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}

			if (Pos3.x >= 0 && Pos3.x < 8 && Pos3.y >= 0 && Pos3.y < 4 && (p_Up->bloc != chess.Attacker->bloc || !p_Up->isOpened))
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos3.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos3.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}

			if (Pos4.x >= 0 && Pos4.x < 8 && Pos4.y >= 0 && Pos4.y < 4 && (p_Down->bloc != chess.Attacker->bloc || !p_Down->isOpened))
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos4.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos4.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}
			break;
		default:
			if (Pos1.x >= 0 && Pos1.x < 8 && Pos1.y >= 0 && Pos1.y < 4 && (p_Left->bloc != chess.Attacker->bloc || !p_Left->isOpened))
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos1.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos1.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}

			if (Pos2.x >= 0 && Pos2.x < 8 && Pos2.y >= 0 && Pos2.y < 4 && (p_Right->bloc != chess.Attacker->bloc || !p_Right->isOpened))
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos2.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos2.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}

			if (Pos3.x >= 0 && Pos3.x < 8 && Pos3.y >= 0 && Pos3.y < 4 && (p_Up->bloc != chess.Attacker->bloc || !p_Up->isOpened))
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos3.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos3.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}

			if (Pos4.x >= 0 && Pos4.x < 8 && Pos4.y >= 0 && Pos4.y < 4 && (p_Down->bloc != chess.Attacker->bloc || !p_Down->isOpened))
			{
				chess.spMarqueeGreen.setPosition(ORIGIN_GRID_CENTER_POINT_X + Pos4.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + Pos4.y * GRID_SIZE);
				window.draw(chess.spMarqueeGreen);
			}
			break;
		}
	}

	if (chess.showWaitChosenPos)
	{
		chess.spMarqueeWhite.setPosition(ORIGIN_GRID_CENTER_POINT_X + chess.wait4ChosenPos.x * GRID_SIZE, ORIGIN_GRID_CENTER_POINT_Y + chess.wait4ChosenPos.y * GRID_SIZE);
		window.draw(chess.spMarqueeWhite);
	}

	drawButtons(GAME_PAGE);
}

void Game::onlineSetup()
{
	onlinePlay = true;

	std::cin >> consoleInput;
	if (consoleInput == "host")
	{
		listener.listen(53000);
		std::cout << "Waiting for connection..." << std::endl;
		if (listener.accept(socket) != Socket::Done)
		{
			gameState = START_PAGE;
			onlinePlay = false;
			return;
		}

		thisPlayer.player = PLAYER_1;
		anotherPlayer.player = PLAYER_2;
		playerNow.player = PLAYER_1;

		chess.initPiece();

		if (socket.send(packet) != Socket::Done)
		{
			std::cout << "Failed to send packet" << std::endl;
			gameState = START_PAGE;
			onlinePlay = false;
			return;
		}

		for (int i = 0; i < 32; i++)
		{
			packet << chess.piece[i].pieceType << chess.piece[i].bloc;
			packet << chess.piece[i].isDeath << chess.piece[i].isOpened;
			packet << chess.piece[i].piecePosition.x << chess.piece[i].piecePosition.y;
		}
	}
	else
	{
		std::cout << "Try to connect to..." << std::endl;
		if (socket.connect(consoleInput, 53000) != Socket::Done)
		{
			gameState = START_PAGE;
			onlinePlay = false;
			return;
		}

		thisPlayer.player = PLAYER_2;
		anotherPlayer.player = PLAYER_1;
		playerNow.player = PLAYER_1;

		chess.partInitPiece();
		Packet p;
		if (socket.receive(p) == Socket::Done)
		{
			for (int i = 0; i < 32; i++)
			{
				p >> chess.piece[i].pieceType >> chess.piece[i].bloc;
				p >> chess.piece[i].isDeath >> chess.piece[i].isOpened;
				p >> chess.piece[i].piecePosition.x >> chess.piece[i].piecePosition.y;
			}
		}
	}

	socket.setBlocking(false);
}

void Game::onlinePacketUpdate()
{
	//将packet递出
	if (playerNow.player == thisPlayer.player)
	{
		if (socket.send(packet) != Socket::Done)
		{
			std::cout << "Failed to send packet" << std::endl;
			gameState = START_PAGE;
			onlinePlay = false;
			return;
		}

		packet << playerNow.player << playerNow.bloc << thisPlayer.bloc << anotherPlayer.bloc;
		packet << chess.firstClick << chess.secondClick << chess.firstOpen << chess.isClicked;
		packet << chess.chosenPos.x << chess.chosenPos.y << chess.chosenPos2.x << chess.chosenPos2.y << chess.stepBeforeChosenPos.x << chess.stepBeforeChosenPos.y;
		packet << chess.pieceState << chess.lastDeadPieceNum;
		packet << chess.redPrice.blocCannonNum << chess.redPrice.blocPrice;
		packet << chess.blackPrice.blocCannonNum << chess.blackPrice.blocPrice;
		packet << chess.winner;
	}
	//收入packet
	else
	{
		Packet p;
		if (socket.receive(p) == Socket::Done)
		{
			p >> playerNow.player >> playerNow.bloc >> anotherPlayer.bloc >> thisPlayer.bloc;
			p >> chess.firstClick >> chess.secondClick >> chess.firstOpen >> chess.isClicked;
			p >> chess.chosenPos.x >> chess.chosenPos.y >> chess.chosenPos2.x >> chess.chosenPos2.y >> chess.stepBeforeChosenPos.x >> chess.stepBeforeChosenPos.y;
			p >> chess.pieceState >> chess.lastDeadPieceNum;
			p >> chess.redPrice.blocCannonNum >> chess.redPrice.blocPrice;
			p >> chess.blackPrice.blocCannonNum >> chess.blackPrice.blocPrice;
			p >> chess.winner;
		}
	}
}

void Game::gameInit()
{
	gameState = START_PAGE;
	gameOver = false;
	gameQuit = false;
	yesClicked = false;
	noClicked = false;
	BGMSliderClicked = false;
	SESliderClicked = false;
	isBoardOn = false;
	onlinePlay = false;
	clickedPos.x = -1;
	clickedPos.y = -1;
	originPos.x = -1;
	originPos.y = -1;
	lastClickState = PIECE;
	lastClickStateSL = -1;
	settingPage = SETTING_PAGE_LOGIC;
	ruleAdjustment = 0;
	formerRuleAdjustment = 0;
	AllOpen = 0;

	isMusicOn = true;
	isSoundOn = true;
	musicVolume = 50;
	soundVolume = 50;

	playerNow.player = -1;
	playerNow.bloc = -1;
	thisPlayer.player = -1;
	thisPlayer.bloc = -1;
	anotherPlayer.player = -1;
	anotherPlayer.bloc = -1;

	loadMediaData();

	StartPageBKMusic.setVolume(musicVolume);
	StartPageBKMusic.play();
	StartPageBKMusic.setLoop(true);

	GamePageBKMusic.setVolume(musicVolume);

}

void Game::gameInput()
{
	sf::Event event;
	while (window.pollEvent((event)))
	{
		if (event.type == sf::Event::Closed)
		{
			window.close();
			gameQuit = true;
		}

		if (event.type == sf::Event::EventType::KeyReleased && event.key.code == sf::Keyboard::Escape)
		{
			window.close();
			gameQuit = true;
		}

		switch (gameState)
		{
		case START_PAGE:
			switch (event.type)
			{
			case Event::MouseButtonPressed:
				if (event.mouseButton.button == Mouse::Left)
				{
					if (ButtonRectLocalStart.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectExit.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectSetting.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectOnlineStart.contains(event.mouseButton.x, event.mouseButton.y))
					{
						clickedPos.x = event.mouseButton.x;
						clickedPos.y = event.mouseButton.y;
					}
				}
				break;
			case Event::MouseButtonReleased:
				if (event.mouseButton.button == Mouse::Left)
				{
					if (ButtonRectLocalStart.contains(clickedPos.x, clickedPos.y))
					{
						if (isSoundOn)
							soundButton.play();

						gameState = GAME_PAGE;
						chess.initPiece();
						formerChess = chess;

						if (isMusicOn)
						{
							StartPageBKMusic.stop();
							GamePageBKMusic.play();
							GamePageBKMusic.setLoop(true);
						}

						clickedPos = originPos;
					}

					//if (ButtonRectOnlineStart.contains(clickedPos.x, clickedPos.y))
					//{
					//	if (isSoundOn)
					//		soundButton.play();

					//	gameState = GAME_PAGE;
					//	formerChess = chess;

					//	if (isMusicOn)
					//	{
					//		StartPageBKMusic.stop();
					//		GamePageBKMusic.play();
					//		GamePageBKMusic.setLoop(true);
					//	}

					//	clickedPos = originPos;

					//	//onlinePlay = true;
					//}

					if (ButtonRectExit.contains(clickedPos.x, clickedPos.y))
					{
						if (isSoundOn)
							soundButton.play();

						window.close();
						gameQuit = true;

						clickedPos = originPos;
					}

					if (ButtonRectSetting.contains(clickedPos.x, clickedPos.y))
					{
						if (isSoundOn)
							soundButton.play();

						lastClickState = SETTING_BUTTON_FROM_START_PAGE;
						gameState = GAME_PAUSED_PAGE;

						clickedPos = originPos;
					}
				}
				break;
			}
			break;
		case GAME_PAGE:
			if (!onlinePlay || (onlinePlay && (playerNow.player == thisPlayer.player)))
			{
				switch (event.type)
				{
				case Event::MouseButtonPressed:
					if (event.mouseButton.button == Mouse::Left)
					{
						if ((ButtonRectRegret.contains(event.mouseButton.x, event.mouseButton.y) && !chess.firstOpen) ||
							ButtonRectTie.contains(event.mouseButton.x, event.mouseButton.y) ||
							(ButtonRectSurrender.contains(event.mouseButton.x, event.mouseButton.y) && !chess.firstOpen) ||
							ButtonRectSetting.contains(event.mouseButton.x, event.mouseButton.y))
						{
							clickedPos.x = event.mouseButton.x;
							clickedPos.y = event.mouseButton.y;
						}

						if (!chess.firstClick)
						{
							if ((event.mouseButton.x - ORIGIN_GRID_LEFT_UP_POINT_X) / GRID_SIZE >= 0 && (event.mouseButton.x - ORIGIN_GRID_LEFT_UP_POINT_X) / GRID_SIZE < 8 &&
								(event.mouseButton.y - ORIGIN_GRID_LEFT_UP_POINT_Y) / GRID_SIZE >= 0 && (event.mouseButton.y - ORIGIN_GRID_LEFT_UP_POINT_Y) / GRID_SIZE < 4)
							{
								if (isSoundOn)
									soundPiece.play();

								chess.stepBeforeChosenPos = chess.chosenPos;

								chess.chosenPos.x = (event.mouseButton.x - ORIGIN_GRID_LEFT_UP_POINT_X) / GRID_SIZE;
								chess.chosenPos.y = (event.mouseButton.y - ORIGIN_GRID_LEFT_UP_POINT_Y) / GRID_SIZE;
								chess.firstClick = true;
								lastClickState = PIECE;
							}
						}
						else if (!chess.secondClick)
						{
							if ((event.mouseButton.x - ORIGIN_GRID_LEFT_UP_POINT_X) / GRID_SIZE >= 0 && (event.mouseButton.x - ORIGIN_GRID_LEFT_UP_POINT_X) / GRID_SIZE < 8 &&
								(event.mouseButton.y - ORIGIN_GRID_LEFT_UP_POINT_Y) / GRID_SIZE >= 0 && (event.mouseButton.y - ORIGIN_GRID_LEFT_UP_POINT_Y) / GRID_SIZE < 4)
							{
								if (isSoundOn)
									soundPiece.play();

								chess.chosenPos2.x = (event.mouseButton.x - ORIGIN_GRID_LEFT_UP_POINT_X) / GRID_SIZE;
								chess.chosenPos2.y = (event.mouseButton.y - ORIGIN_GRID_LEFT_UP_POINT_Y) / GRID_SIZE;
								chess.secondClick = true;
								lastClickState = PIECE;
							}
						}
					}
					break;
				case Event::MouseButtonReleased:
					if (event.mouseButton.button == Mouse::Left)
					{
						if (ButtonRectRegret.contains(clickedPos.x, clickedPos.y) && !chess.firstOpen)
						{
							if (isSoundOn)
								soundButton.play();

							lastClickState = REGRET_BUTTON;
						}

						if (ButtonRectTie.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							lastClickState = TIE_BUTTON;
						}

						if (ButtonRectSurrender.contains(clickedPos.x, clickedPos.y) && !chess.firstOpen)
						{
							if (isSoundOn)
								soundButton.play();

							lastClickState = SURRENDER_BUTTON;
						}

						if (ButtonRectSetting.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							lastClickState = SETTING_BUTTON_FROM_GAME_PAGE;
						}
						clickedPos = originPos;
					}
					break;
				case Event::KeyReleased:
					//后门（彩蛋），用于全部翻开
					if (event.key.code == Keyboard::O && AllOpen == 0)
						AllOpen++;
					else if (event.key.code == Keyboard::P && AllOpen == 1)
						AllOpen++;
					else if (event.key.code == Keyboard::E && AllOpen == 2)
						AllOpen++;
					else if (event.key.code == Keyboard::N && AllOpen == 3)
						AllOpen++;
					else
						AllOpen = 0;
					break;
				}
			}

			mousePos = Mouse::getPosition(window);
			if ((mousePos.x - ORIGIN_GRID_LEFT_UP_POINT_X) / GRID_SIZE >= 0 && (mousePos.x - ORIGIN_GRID_LEFT_UP_POINT_X) / GRID_SIZE < 8 &&
				(mousePos.y - ORIGIN_GRID_LEFT_UP_POINT_Y) / GRID_SIZE >= 0 && (mousePos.y - ORIGIN_GRID_LEFT_UP_POINT_Y) / GRID_SIZE < 4)
			{
				chess.wait4ChosenPos.x = (mousePos.x - ORIGIN_GRID_LEFT_UP_POINT_X) / GRID_SIZE;
				chess.wait4ChosenPos.y = (mousePos.y - ORIGIN_GRID_LEFT_UP_POINT_Y) / GRID_SIZE;
				chess.showWaitChosenPos = true;
			}
			else
			{
				chess.showWaitChosenPos = false;
			}

			break;
		case GAME_PAUSED_PAGE:
			switch (event.type)
			{
			case Event::EventType::MouseButtonPressed:
				if (event.mouseButton.button == Mouse::Left)
				{
					switch (lastClickState)
					{
					case SETTING_BUTTON_FROM_START_PAGE:
						switch (settingPage)
						{
						case SETTING_PAGE_LOGIC:
							if (ButtonRectTurnOff.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectBGMVolumeSubstruct.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectBGMVolumePlus.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectBGMVolumeTurn.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSEVolumeSubstruct.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSEVolumePlus.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSEVolumeTurn.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSettingPageLogic.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSettingPageRule.contains(event.mouseButton.x, event.mouseButton.y))
							{
								clickedPos.x = event.mouseButton.x;
								clickedPos.y = event.mouseButton.y;
							}
							else if (ButtonRectBGMSlider.contains(event.mouseButton.x, event.mouseButton.y))
								BGMSliderClicked = true;
							else if (ButtonRectSESlider.contains(event.mouseButton.x, event.mouseButton.y))
								SESliderClicked = true;
							else if (ButtonRectBGMStripe.contains(event.mouseButton.x, event.mouseButton.y))
							{
								musicVolume = (event.mouseButton.x - POP_WINDOW_X - BUTTON_BGM_STRIPE_X) * (float)100 / BUTTON_VOLUME_STRIPE_WIDTH;
								BGMSliderClicked = true;
							}
							else if (ButtonRectSEStripe.contains(event.mouseButton.x, event.mouseButton.y))
							{
								soundVolume = (event.mouseButton.x - POP_WINDOW_X - BUTTON_SE_STRIPE_X) * (float)100 / BUTTON_VOLUME_STRIPE_WIDTH;
								SESliderClicked = true;
							}
							break;
						case SETTING_PAGE_RULE:
							if (ButtonRectTurnOff.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSettingPageLogic.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSettingPageRule.contains(event.mouseButton.x, event.mouseButton.y))
							{
								clickedPos.x = event.mouseButton.x;
								clickedPos.y = event.mouseButton.y;
							}
							else if (ButtonRectRuleSlider.contains(event.mouseButton.x, event.mouseButton.y))
							{
								RuleSliderClicked = true;
								formerRuleAdjustment = ruleAdjustment;

								clickedPos.x = event.mouseButton.x;
								clickedPos.y = event.mouseButton.y;
							}
							break;
						}
						break;
					case SETTING_BUTTON_FROM_GAME_PAGE:
						switch (settingPage)
						{
						case SETTING_PAGE_LOGIC:
							if (ButtonRectTurnOff.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSave.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectLoad.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectHome.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectBGMVolumeSubstruct.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectBGMVolumePlus.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectBGMVolumeTurn.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSEVolumeSubstruct.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSEVolumePlus.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSEVolumeTurn.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSettingPageLogic.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSettingPageRule.contains(event.mouseButton.x, event.mouseButton.y))
							{
								clickedPos.x = event.mouseButton.x;
								clickedPos.y = event.mouseButton.y;
							}
							else if (ButtonRectBGMSlider.contains(event.mouseButton.x, event.mouseButton.y))
								BGMSliderClicked = true;
							else if (ButtonRectSESlider.contains(event.mouseButton.x, event.mouseButton.y))
								SESliderClicked = true;
							else if (ButtonRectBGMStripe.contains(event.mouseButton.x, event.mouseButton.y))
							{
								musicVolume = (event.mouseButton.x - POP_WINDOW_X - BUTTON_BGM_STRIPE_X) * (float)100 / BUTTON_VOLUME_STRIPE_WIDTH;
								BGMSliderClicked = true;
							}
							else if (ButtonRectSEStripe.contains(event.mouseButton.x, event.mouseButton.y))
							{
								soundVolume = (event.mouseButton.x - POP_WINDOW_X - BUTTON_SE_STRIPE_X) * (float)100 / BUTTON_VOLUME_STRIPE_WIDTH;
								SESliderClicked = true;
							}
							break;
						case SETTING_PAGE_RULE:
							if (ButtonRectTurnOff.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSettingPageLogic.contains(event.mouseButton.x, event.mouseButton.y) ||
								ButtonRectSettingPageRule.contains(event.mouseButton.x, event.mouseButton.y))
							{
								clickedPos.x = event.mouseButton.x;
								clickedPos.y = event.mouseButton.y;
							}
							else if (ButtonRectRuleSlider.contains(event.mouseButton.x, event.mouseButton.y))
							{
								RuleSliderClicked = true;
								formerRuleAdjustment = ruleAdjustment;

								clickedPos.x = event.mouseButton.x;
								clickedPos.y = event.mouseButton.y;
							}
							break;
						}
						break;
					default:
						if (ButtonRectYes.contains(event.mouseButton.x, event.mouseButton.y))
						{
							clickedPos.x = event.mouseButton.x;
							clickedPos.y = event.mouseButton.y;
						}
						else if (ButtonRectNo.contains(event.mouseButton.x, event.mouseButton.y) || ButtonRectTurnOff.contains(event.mouseButton.x, event.mouseButton.y))
						{
							clickedPos.x = event.mouseButton.x;
							clickedPos.y = event.mouseButton.y;
						}
						break;
					}
				}
				break;
			case Event::EventType::MouseMoved:
				if (BGMSliderClicked && musicVolume >= 0 && musicVolume <= 100)
				{
					musicVolume = (event.mouseMove.x - POP_WINDOW_X - BUTTON_BGM_STRIPE_X) * (float)100 / BUTTON_VOLUME_STRIPE_WIDTH;
					if (musicVolume < 0)
						musicVolume = 0;
					else if (musicVolume > 100)
						musicVolume = 100;

					if (!isMusicOn)
					{
						isMusicOn = true;
						StartPageBKMusic.play();
					}

					StartPageBKMusic.setVolume(musicVolume);
					GamePageBKMusic.setVolume(musicVolume);
				}

				if (SESliderClicked && soundVolume >= 0 && soundVolume <= 100)
				{
					soundVolume = (event.mouseMove.x - POP_WINDOW_X - BUTTON_SE_STRIPE_X) * (float)100 / BUTTON_VOLUME_STRIPE_WIDTH;
					if (soundVolume < 0)
						soundVolume = 0;
					else if (soundVolume > 100)
						soundVolume = 100;

					if (!isSoundOn)
					{
						isSoundOn = true;
					}

					soundButton.setVolume(soundVolume);
					soundPiece.setVolume(soundVolume);
				}

				if (RuleSliderClicked && ruleAdjustment >= 0 && ruleAdjustment + RULE_SHOW_HEIGHT <= RULE_HEIGHT)
				{
					ruleAdjustment = formerRuleAdjustment + (event.mouseMove.y - clickedPos.y) * RULE_HEIGHT / (RULE_SLIDER_LAST_Y - RULE_SLIDER_Y);

					if (ruleAdjustment <= 0)
						ruleAdjustment = 0;

					if (ruleAdjustment + RULE_SHOW_HEIGHT >= RULE_HEIGHT)
						ruleAdjustment = RULE_HEIGHT - RULE_SHOW_HEIGHT;
				}
				break;
			case Event::EventType::MouseWheelScrolled:
				if ((lastClickState == SETTING_BUTTON_FROM_START_PAGE || lastClickState == SETTING_BUTTON_FROM_GAME_PAGE) && settingPage == SETTING_PAGE_RULE && !RuleSliderClicked)
				{
					ruleAdjustment -= (int)(event.mouseWheelScroll.delta * 70);

					if (RULE_SHOW_HEIGHT + ruleAdjustment >= RULE_HEIGHT)
						ruleAdjustment = RULE_HEIGHT - RULE_SHOW_HEIGHT;

					if (ruleAdjustment <= 0)
						ruleAdjustment = 0;
				}
				break;
			case Event::EventType::MouseButtonReleased:
				if (event.mouseButton.button == Mouse::Left)
				{
					switch (lastClickState)
					{
					case SETTING_BUTTON_FROM_START_PAGE:
						if (ButtonRectTurnOff.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							noClicked = true;
						}

						if (ButtonRectSettingPageLogic.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							settingPage = SETTING_PAGE_LOGIC;
						}

						if (ButtonRectSettingPageRule.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							if (settingPage != SETTING_PAGE_RULE)
								ruleAdjustment = 0;

							settingPage = SETTING_PAGE_RULE;
						}

						if (ButtonRectBGMVolumeSubstruct.contains(clickedPos.x, clickedPos.y) && musicVolume > 0)
						{
							if (isSoundOn)
								soundButton.play();

							if (!isMusicOn)
							{
								isMusicOn = true;
								StartPageBKMusic.play();
							}

							musicVolume--;
							StartPageBKMusic.setVolume(musicVolume);
							GamePageBKMusic.setVolume(musicVolume);
						}

						if (ButtonRectBGMVolumePlus.contains(clickedPos.x, clickedPos.y) && musicVolume < 100)
						{
							if (isSoundOn)
								soundButton.play();

							if (!isMusicOn)
							{
								isMusicOn = true;
								StartPageBKMusic.play();
							}

							musicVolume++;
							StartPageBKMusic.setVolume(musicVolume);
							GamePageBKMusic.setVolume(musicVolume);
						}

						if (ButtonRectSEVolumeSubstruct.contains(clickedPos.x, clickedPos.y) && soundVolume > 0)
						{
							if (isSoundOn)
								soundButton.play();
							else
							{
								isSoundOn = true;
								soundButton.play();
							}

							soundVolume--;
							soundButton.setVolume(soundVolume);
							soundPiece.setVolume(soundVolume);
						}

						if (ButtonRectSEVolumePlus.contains(clickedPos.x, clickedPos.y) && soundVolume < 100)
						{
							if (isSoundOn)
								soundButton.play();
							else
							{
								isSoundOn = true;
								soundButton.play();
							}

							soundVolume++;
							soundButton.setVolume(soundVolume);
							soundPiece.setVolume(soundVolume);
						}

						if (ButtonRectBGMVolumeTurn.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							if (isMusicOn)
							{
								isMusicOn = false;
								StartPageBKMusic.pause();
							}
							else
							{
								isMusicOn = true;
								StartPageBKMusic.play();
							}
						}

						if (ButtonRectSEVolumeTurn.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								isSoundOn = false;
							else
							{
								isSoundOn = true;
								soundButton.play();
							}
						}

						if (BGMSliderClicked)
						{
							if (isSoundOn)
								soundButton.play();

							BGMSliderClicked = false;
						}

						if (SESliderClicked)
						{
							if (isSoundOn)
								soundButton.play();

							SESliderClicked = false;
						}

						if (RuleSliderClicked)
						{
							RuleSliderClicked = false;
						}

						break;
					case SETTING_BUTTON_FROM_GAME_PAGE:
						if (ButtonRectTurnOff.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							noClicked = true;
						}

						if (ButtonRectSave.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							gameState = SAVE_PAGE;
						}

						if (ButtonRectLoad.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							gameState = LOAD_PAGE;
						}

						if (ButtonRectHome.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							lastClickState = HOME_BUTTON;
						}

						if (ButtonRectSettingPageLogic.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							settingPage = SETTING_PAGE_LOGIC;
						}

						if (ButtonRectSettingPageRule.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							if (settingPage != SETTING_PAGE_RULE)
								ruleAdjustment = 0;

							settingPage = SETTING_PAGE_RULE;
						}

						if (ButtonRectBGMVolumeSubstruct.contains(clickedPos.x, clickedPos.y) && musicVolume > 0)
						{
							if (isSoundOn)
								soundButton.play();

							if (!isMusicOn)
							{
								isMusicOn = true;
								StartPageBKMusic.play();
							}

							musicVolume--;
							StartPageBKMusic.setVolume(musicVolume);
							GamePageBKMusic.setVolume(musicVolume);
						}

						if (ButtonRectBGMVolumePlus.contains(clickedPos.x, clickedPos.y) && musicVolume < 100)
						{
							if (isSoundOn)
								soundButton.play();

							if (!isMusicOn)
							{
								isMusicOn = true;
								StartPageBKMusic.play();
							}

							musicVolume++;
							StartPageBKMusic.setVolume(musicVolume);
							GamePageBKMusic.setVolume(musicVolume);
						}

						if (ButtonRectSEVolumeSubstruct.contains(clickedPos.x, clickedPos.y) && soundVolume > 0)
						{
							if (isSoundOn)
								soundButton.play();
							else
							{
								isSoundOn = true;
								soundButton.play();
							}

							soundVolume--;
							soundButton.setVolume(soundVolume);
							soundPiece.setVolume(soundVolume);
						}

						if (ButtonRectSEVolumePlus.contains(clickedPos.x, clickedPos.y) && soundVolume < 100)
						{
							if (isSoundOn)
								soundButton.play();
							else
							{
								isSoundOn = true;
								soundButton.play();
							}

							soundVolume++;
							soundButton.setVolume(soundVolume);
							soundPiece.setVolume(soundVolume);
						}

						if (ButtonRectBGMVolumeTurn.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							if (isMusicOn)
							{
								isMusicOn = false;
								GamePageBKMusic.pause();
							}
							else
							{
								isMusicOn = true;
								GamePageBKMusic.play();
							}
						}

						if (ButtonRectSEVolumeTurn.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								isSoundOn = false;
							else
							{
								isSoundOn = true;
								soundButton.play();
							}
						}

						if (BGMSliderClicked)
						{
							if (isSoundOn)
								soundButton.play();

							BGMSliderClicked = false;
						}

						if (SESliderClicked)
						{
							if (isSoundOn)
								soundButton.play();

							SESliderClicked = false;
						}

						if (RuleSliderClicked)
						{
							RuleSliderClicked = false;
						}
						break;
					default:
						if (ButtonRectYes.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							yesClicked = true;
						}
						else if (ButtonRectNo.contains(clickedPos.x, clickedPos.y) || ButtonRectTurnOff.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							noClicked = true;
						}
						break;
					}
					clickedPos = originPos;
				}
				break;
			}
			break;
		case SAVE_PAGE:
			switch (event.type)
			{
			case Event::MouseButtonPressed:
				if (event.mouseButton.button == Mouse::Left)
				{
					if (ButtonRectBack.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectSLOne.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectSLTwo.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectSLThree.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectSLFour.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectSLFive.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectSLSix.contains(event.mouseButton.x, event.mouseButton.y))
					{
						clickedPos.x = event.mouseButton.x;
						clickedPos.y = event.mouseButton.y;
					}

					if (lastClickStateSL > 0)
					{
						if (ButtonRectYes.contains(event.mouseButton.x, event.mouseButton.y) ||
							ButtonRectNo.contains(event.mouseButton.x, event.mouseButton.y) ||
							ButtonRectTurnOff.contains(event.mouseButton.x, event.mouseButton.y))
						{
							clickedPos.x = event.mouseButton.x;
							clickedPos.y = event.mouseButton.y;
						}
					}
				}
				break;
			case Event::MouseButtonReleased:
				if (event.mouseButton.button == Mouse::Left)
				{
					if (lastClickStateSL > 0)
					{
						if (ButtonRectYes.contains(clickedPos.x, clickedPos.y))
						{
							yesClicked = true;
						}

						if (ButtonRectNo.contains(clickedPos.x, clickedPos.y) || ButtonRectTurnOff.contains(clickedPos.x, clickedPos.y))
						{
							noClicked = true;
						}
					}

					if (lastClickStateSL <= 0)
					{
						if (ButtonRectBack.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							gameState = GAME_PAUSED_PAGE;
						}

						if (ButtonRectSLOne.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							in.open("save 1.txt");
							if (!in)
							{
								save("save 1.txt");
							}
							else
							{
								in.close();
								lastClickStateSL = SAVE_BUTTON_1;
							}
						}

						if (ButtonRectSLTwo.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							in.open("save 2.txt");
							if (!in)
							{
								save("save 2.txt");
							}
							else
							{
								in.close();
								lastClickStateSL = SAVE_BUTTON_2;
							}
						}

						if (ButtonRectSLThree.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							in.open("save 3.txt");
							if (!in)
							{
								save("save 3.txt");
							}
							else
							{
								in.close();
								lastClickStateSL = SAVE_BUTTON_3;
							}
						}

						if (ButtonRectSLFour.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							in.open("save 4.txt");
							if (!in)
							{
								save("save 4.txt");
							}
							else
							{
								in.close();
								lastClickStateSL = SAVE_BUTTON_4;
							}
						}

						if (ButtonRectSLFive.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							in.open("save 5.txt");
							if (!in)
							{
								save("save 5.txt");
							}
							else
							{
								in.close();
								lastClickStateSL = SAVE_BUTTON_5;
							}
						}

						if (ButtonRectSLSix.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							in.open("save 6.txt");
							if (!in)
							{
								save("save 6.txt");
							}
							else
							{
								in.close();
								lastClickStateSL = SAVE_BUTTON_6;
							}
						}
					}

					clickedPos = originPos;
				}
			}
			break;
		case LOAD_PAGE:
			switch (event.type)
			{
			case Event::MouseButtonPressed:
				if (event.mouseButton.button == Mouse::Left)
				{
					if (ButtonRectBack.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectSLOne.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectSLTwo.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectSLThree.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectSLFour.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectSLFive.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectSLSix.contains(event.mouseButton.x, event.mouseButton.y))
					{
						clickedPos.x = event.mouseButton.x;
						clickedPos.y = event.mouseButton.y;
					}

					if (lastClickStateSL > 0)
					{
						if (ButtonRectYes.contains(event.mouseButton.x, event.mouseButton.y) ||
							ButtonRectNo.contains(event.mouseButton.x, event.mouseButton.y) ||
							ButtonRectTurnOff.contains(event.mouseButton.x, event.mouseButton.y))
						{
							clickedPos.x = event.mouseButton.x;
							clickedPos.y = event.mouseButton.y;
						}
					}
				}
				break;
			case Event::MouseButtonReleased:
				if (event.mouseButton.button == Mouse::Left)
				{
					if (lastClickStateSL > 0)
					{
						if (ButtonRectYes.contains(clickedPos.x, clickedPos.y))
						{
							yesClicked = true;
						}

						if (ButtonRectNo.contains(clickedPos.x, clickedPos.y) || ButtonRectTurnOff.contains(clickedPos.x, clickedPos.y))
						{
							noClicked = true;
						}
					}

					if (lastClickStateSL <= 0)
					{
						if (ButtonRectBack.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							gameState = GAME_PAUSED_PAGE;
						}

						if (ButtonRectSLOne.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							in.open("save 1.txt");
							if (!in)
							{
								break;
							}
							else if (!chess.firstOpen)
							{
								in.close();
								lastClickStateSL = SAVE_BUTTON_1;
							}
							else
							{
								in.close();
								load("save 1.txt");
								gameState = GAME_PAGE;
								lastClickState = PIECE;
							}
						}

						if (ButtonRectSLTwo.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							in.open("save 2.txt");
							if (!in)
							{
								break;
							}
							else if (!chess.firstOpen)
							{
								in.close();
								lastClickStateSL = SAVE_BUTTON_2;
							}
							else
							{
								in.close();
								load("save 2.txt");
								gameState = GAME_PAGE;
								lastClickState = PIECE;
							}
						}

						if (ButtonRectSLThree.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							in.open("save 3.txt");
							if (!in)
							{
								break;
							}
							else if (!chess.firstOpen)
							{
								in.close();
								lastClickStateSL = SAVE_BUTTON_3;
							}
							else
							{
								in.close();
								load("save 3.txt");
								gameState = GAME_PAGE;
								lastClickState = PIECE;
							}
						}

						if (ButtonRectSLFour.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							in.open("save 4.txt");
							if (!in)
							{
								break;
							}
							else if (!chess.firstOpen)
							{
								in.close();
								lastClickStateSL = SAVE_BUTTON_4;
							}
							else
							{
								in.close();
								load("save 4.txt");
								gameState = GAME_PAGE;
								lastClickState = PIECE;
							}
						}

						if (ButtonRectSLFive.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							in.open("save 5.txt");
							if (!in)
							{
								break;
							}
							else if (!chess.firstOpen)
							{
								in.close();
								lastClickStateSL = SAVE_BUTTON_5;
							}
							else
							{
								in.close();
								load("save 5.txt");
								gameState = GAME_PAGE;
								lastClickState = PIECE;
							}
						}

						if (ButtonRectSLSix.contains(clickedPos.x, clickedPos.y))
						{
							if (isSoundOn)
								soundButton.play();

							in.open("save 6.txt");
							if (!in)
							{
								break;
							}
							else if (!chess.firstOpen)
							{
								in.close();
								lastClickStateSL = SAVE_BUTTON_6;
							}
							else
							{
								in.close();
								load("save 6.txt");
								gameState = GAME_PAGE;
								lastClickState = PIECE;
							}
						}
					}

					clickedPos = originPos;
				}
			}
			break;
		case GAME_OVER_PAGE:
			switch (event.type)
			{
			case Event::MouseButtonPressed:
				if (event.mouseButton.button == Mouse::Left)
				{
					if (ButtonRectRestart.contains(event.mouseButton.x, event.mouseButton.y) ||
						ButtonRectExit.contains(event.mouseButton.x, event.mouseButton.y))
					{
						clickedPos.x = event.mouseButton.x;
						clickedPos.y = event.mouseButton.y;
					}
				}
				break;
			case Event::MouseButtonReleased:
				if (event.mouseButton.button == Mouse::Left)
				{
					if (ButtonRectRestart.contains(clickedPos.x, clickedPos.y))
					{
						if (isSoundOn)
							soundButton.play();

						chess.initPiece();
						formerChess = chess;
						gameState = GAME_PAGE;
						gameOver = false;
						lastClickState = PIECE;

						break;
					}

					if (ButtonRectExit.contains(clickedPos.x, clickedPos.y))
					{
						if (isSoundOn)
							soundButton.play();

						window.close();
						gameQuit = true;

						break;
					}
					clickedPos = originPos;
				}
				break;
			case Event::KeyReleased:
				break;
			}
			break;
		default:
			break;
		}
	}
}

void Game::gameLogic()
{
	switch (gameState)
	{
	case START_PAGE:
		break;
	case GAME_PAGE:
		switch (lastClickState)
		{
		case PIECE:
			gameOver = chess.isGameOver();

			//第一次点击时
			if (chess.firstClick && !chess.secondClick)
			{
				chess.stepBeforeAttacker = chess.Attacker;
				//如果点击的位置没有棋子
				if (!chess.cb.isPiecePosUsed[chess.chosenPos.x][chess.chosenPos.y])
				{
					chess.firstClick = false;
					chess.chosenPos = chess.stepBeforeChosenPos;
					chess.Attacker = chess.stepBeforeAttacker;
					break;
				}

				for (int i = 0; i < 32; i++)
				{
					if (chess.piece[i].isDeath)
						continue;

					if (chess.piece[i].piecePosition == chess.chosenPos)
					{
						chess.Attacker = &chess.piece[i];
						break;
					}
				}

				//如果这是第一次点击
				if (!chess.isClicked)
					chess.isClicked = true;

				//如果点击对象未翻开
				if (!chess.Attacker->isOpened)
				{
					chess.pieceState = WAIT_4_OPEN;
					break;
				}
				//如果点击对象已翻开且为我方阵营棋子
				else if (chess.Attacker->bloc == chess.bloc)
				{
					chess.pieceState = WAIT_4_ATTACK;
					break;
				}
				//如果点击对象已翻开但不是我方阵营棋子（等于未点击）
				else
				{
					chess.firstClick = false;
					chess.chosenPos = chess.stepBeforeChosenPos;
					chess.Attacker = chess.stepBeforeAttacker;
					break;
				}
			}

			//第二次点击后
			if (chess.firstClick && chess.secondClick)
			{
				//如果第一次点击对象是等待翻开状态
				if (chess.pieceState == WAIT_4_OPEN)
				{
					//如果第二次点击对象不存在棋子（视为未点击第二次） ×
					if (!chess.cb.isPiecePosUsed[chess.chosenPos2.x][chess.chosenPos2.y])
					{
						chess.secondClick = false;
						chess.chosenPos2 = formerChess.chosenPos2;
						break;
					}

					for (int i = 0; i < 32; i++)
					{
						if (chess.piece[i].isDeath)
							continue;

						if (chess.piece[i].piecePosition == chess.chosenPos2)
						{
							chess.Defencer = &chess.piece[i];
							break;
						}
					}

					//如果第一次点击对象是等待翻开状态，且第二次点击对象依旧是该对象 √
					if (chess.chosenPos2 == chess.Attacker->piecePosition)
					{
						formerChess = chess;

						chess.Attacker->pieceOpen(&chess.tPiece);

						//如果这是全场第一个翻开的棋子
						if (chess.firstOpen)
						{
							chess.bloc = chess.Attacker->bloc;
							chess.firstOpen = false;
							if (onlinePlay)
							{
								thisPlayer.bloc = chess.bloc;
								playerNow.bloc = chess.bloc;
								if (chess.bloc == c_RED)
									anotherPlayer.bloc = c_BLACK;
								else
									anotherPlayer.bloc = c_RED;
							}
						}

						chess.pieceState = WAIT_4_NONE;
						chess.firstClick = false;
						chess.secondClick = false;

						if (chess.bloc == c_BLACK)
							chess.bloc = c_RED;
						else
							chess.bloc = c_BLACK;

						if (onlinePlay)
						{
							playerNow.player = anotherPlayer.player;
							playerNow.bloc = anotherPlayer.bloc;
						}

						break;
					}
					//如果第二次点击对象不是第一次点击对象，且是当前阵营棋子或未翻开棋子（视本次第二次点击为第一次点击）×
					else if (chess.bloc == chess.Defencer->bloc || !chess.Defencer->isOpened)
					{
						chess.secondClick = false;
						chess.chosenPos = chess.chosenPos2;
						chess.Attacker = chess.Defencer;
						chess.chosenPos2 = formerChess.chosenPos2;

						break;
					}
					//如果第二次点击对象不是第一次点击对象，且不是我方阵营棋子（视为未点击第二次） ×
					else
					{
						chess.secondClick = false;
						chess.chosenPos2 = formerChess.chosenPos2;
						break;
					}
				}

				//如果第一次点击对象是等待攻击状态
				if (chess.pieceState == WAIT_4_ATTACK)
				{
					for (int i = 0; i < 32; i++)
					{
						if (chess.piece[i].isDeath)
							continue;

						if (chess.piece[i].piecePosition == chess.chosenPos2)
						{
							chess.Defencer = &chess.piece[i];
							break;
						}
					}

					//如果第一次点击对象和第二次点击对象是同一对象，（视本次第二次点击为第一次点击）×
					if (chess.Attacker->piecePosition == chess.chosenPos2)
					{
						chess.secondClick = false;
						chess.chosenPos = chess.chosenPos2;
						chess.Attacker = chess.Defencer;
						chess.chosenPos2 = formerChess.chosenPos2;

						break;
					}

					//如果第二次点击位置符合移动的条件 √
					if (chess.cb.pieceMove(chess.Attacker, chess.chosenPos2))
					{
						formerChess = chess;

						chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x][chess.Attacker->piecePosition.y] = false;
						chess.cb.isPiecePosUsed[chess.chosenPos2.x][chess.chosenPos2.y] = true;
						chess.Attacker->piecePosition = chess.chosenPos2;

						chess.pieceState = WAIT_4_NONE;
						chess.firstClick = false;
						chess.secondClick = false;

						if (chess.bloc == c_BLACK)
							chess.bloc = c_RED;
						else
							chess.bloc = c_BLACK;

						if (onlinePlay)
						{
							playerNow.player = anotherPlayer.player;
							playerNow.bloc = anotherPlayer.bloc;
						}

						break;
					}
					//如果第一次点击对象不是炮，且第二次点击位置符合攻击条件
					else if (chess.Attacker->pieceType != c_CANNON &&
						((abs(chess.Attacker->piecePosition.x - chess.chosenPos2.x) == 1 && chess.Attacker->piecePosition.y - chess.chosenPos2.y == 0) ||
						(abs(chess.Attacker->piecePosition.y - chess.chosenPos2.y) == 1 && chess.Attacker->piecePosition.x - chess.chosenPos2.x == 0)))
					{
						//如果第二次点击对象已经翻开了 
						if (chess.Defencer->isOpened)
						{
							//如果第二次点击对象已经翻开且不是第一次点击对象阵营 √
							if (chess.Defencer->bloc != chess.bloc)
							{
								formerChess = chess;
								chess.cb.pieceCompare(chess.Attacker, chess.Defencer, chess.lastDeadPiece, &chess.lastDeadPieceNum, &chess.redPrice, &chess.blackPrice);

								chess.pieceState = WAIT_4_NONE;
								chess.firstClick = false;
								chess.secondClick = false;

								if (chess.bloc == c_BLACK)
									chess.bloc = c_RED;
								else
									chess.bloc = c_BLACK;

								if (onlinePlay)
								{
									playerNow.player = anotherPlayer.player;
									playerNow.bloc = anotherPlayer.bloc;
								}

								break;
							}
							//如果第二次点击对象已翻开但是第一次点击对象阵营（视第二次点击为第一次点击）×
							else
							{
								chess.secondClick = false;

								chess.chosenPos = chess.chosenPos2;
								for (int i = 0; i < 32; i++)
								{
									if (chess.piece[i].isDeath)
										continue;

									if (chess.piece[i].piecePosition == chess.chosenPos)
									{
										chess.Attacker = &chess.piece[i];
										break;
									}
								}

								if (!chess.Attacker->isOpened)
								{
									chess.pieceState = WAIT_4_OPEN;
								}
								else if (chess.Attacker->bloc == chess.bloc)
								{
									chess.pieceState = WAIT_4_ATTACK;
								}

								chess.chosenPos2 = formerChess.chosenPos2;

								break;
							}
						}
						//如果第二次点击对象未翻开且其阵营与我方不同 √
						else if (chess.Defencer->bloc != chess.bloc)
						{
							formerChess = chess;

							chess.Defencer->pieceOpen(&chess.tPiece);
							chess.cb.pieceCompare(chess.Attacker, chess.Defencer, chess.lastDeadPiece, &chess.lastDeadPieceNum, &chess.redPrice, &chess.blackPrice);

							chess.pieceState = WAIT_4_NONE;
							chess.firstClick = false;
							chess.secondClick = false;

							if (chess.bloc == c_BLACK)
								chess.bloc = c_RED;
							else
								chess.bloc = c_BLACK;

							if (onlinePlay)
							{
								playerNow.player = anotherPlayer.player;
								playerNow.bloc = anotherPlayer.bloc;
							}

							break;
						}
						//如果第二次点击对象未翻开且为我方阵营（视为翻开第二次点击对象） √
						else
						{
							formerChess = chess;

							chess.Defencer->pieceOpen(&chess.tPiece);

							chess.pieceState = WAIT_4_NONE;
							chess.firstClick = false;
							chess.secondClick = false;

							if (chess.bloc == c_BLACK)
								chess.bloc = c_RED;
							else
								chess.bloc = c_BLACK;

							if (onlinePlay)
							{
								playerNow.player = anotherPlayer.player;
								playerNow.bloc = anotherPlayer.bloc;
							}

							break;
						}
					}
					//如果第一次点击对象是炮，且且第二次点击位置在横竖方向距离大于一的位置
					else if (chess.Attacker->pieceType == c_CANNON &&
						((abs(chess.Attacker->piecePosition.x - chess.chosenPos2.x) > 1 && chess.Attacker->piecePosition.y == chess.chosenPos2.y) ||
						(abs(chess.Attacker->piecePosition.y - chess.chosenPos2.y) > 1 && chess.Attacker->piecePosition.x == chess.chosenPos2.x)))
					{
						bool isAbleToAttack = true;

						//如果第二次点击的位置没有棋子（视为未点击第二次） ×
						if (!chess.cb.isPiecePosUsed[chess.chosenPos2.x][chess.chosenPos2.y])
						{
							chess.secondClick = false;
							chess.chosenPos2 = formerChess.chosenPos2;
							break;
						}
						//如果第二次点击对象周围没有炮架
						else if ((chess.Defencer->piecePosition.x < chess.Attacker->piecePosition.x && !chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x - 1][chess.Attacker->piecePosition.y]) ||
							(chess.Defencer->piecePosition.x > chess.Attacker->piecePosition.x && !chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x + 1][chess.Attacker->piecePosition.y]) ||
							(chess.Defencer->piecePosition.y < chess.Attacker->piecePosition.y && !chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x][chess.Attacker->piecePosition.y - 1]) ||
							(chess.Defencer->piecePosition.y > chess.Attacker->piecePosition.y && !chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x][chess.Attacker->piecePosition.y + 1]))
						{
							isAbleToAttack = false;
						}
						//如果第二次点击对象在第一次点击对象左侧
						else if (chess.Defencer->piecePosition.x < chess.Attacker->piecePosition.x && chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x - 1][chess.Attacker->piecePosition.y])
						{
							//如果距离为二，则直接可以攻击
							if (chess.Attacker->piecePosition.x - chess.Defencer->piecePosition.x == 2)
							{
								isAbleToAttack = true;
							}

							//如果距离大于二，则判断两次点击之间有没有更多的棋子
							for (int i = chess.Defencer->piecePosition.x + 1; i < chess.Attacker->piecePosition.x - 1; i++)
							{
								if (chess.cb.isPiecePosUsed[i][chess.Attacker->piecePosition.y])
								{
									isAbleToAttack = false;
									break;
								}
							}
						}
						//如果第二次点击对象在第一次点击对象右侧
						else if (chess.Defencer->piecePosition.x > chess.Attacker->piecePosition.x && chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x + 1][chess.Attacker->piecePosition.y])
						{
							//如果距离为二，则直接可以攻击
							if (chess.Defencer->piecePosition.x - chess.Attacker->piecePosition.x == 2)
							{
								isAbleToAttack = true;
							}

							//如果距离大于二，则判断两次点击之间有没有更多的棋子
							for (int i = chess.Attacker->piecePosition.x + 2; i < chess.Defencer->piecePosition.x; i++)
							{
								if (chess.cb.isPiecePosUsed[i][chess.Attacker->piecePosition.y])
								{
									isAbleToAttack = false;
									break;
								}
							}
						}
						//如果第二次点击对象在第一次点击对象上侧
						else if (chess.Defencer->piecePosition.y < chess.Attacker->piecePosition.y && chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x][chess.Attacker->piecePosition.y - 1])
						{
							//如果距离为二，则直接可以攻击
							if (chess.Attacker->piecePosition.y - chess.Defencer->piecePosition.y == 2)
							{
								isAbleToAttack = true;
							}

							//如果距离大于二，则判断两次点击之间有没有更多的棋子
							for (int i = chess.Defencer->piecePosition.y + 1; i < chess.Attacker->piecePosition.y - 1; i++)
							{
								if (chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x][i])
								{
									isAbleToAttack = false;
									break;
								}
							}
						}
						//如果第二次点击对象在第一次点击对象下侧
						else if (chess.Defencer->piecePosition.y > chess.Attacker->piecePosition.y && chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x][chess.Attacker->piecePosition.y + 1])
						{
							//如果距离为二，则直接可以攻击
							if (chess.Defencer->piecePosition.y - chess.Attacker->piecePosition.y == 2)
							{
								isAbleToAttack = true;
							}

							//如果距离大于二，则判断两次点击之间有没有更多的棋子
							for (int i = chess.Attacker->piecePosition.y + 2; i < chess.Defencer->piecePosition.y; i++)
							{
								if (chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x][i])
								{
									isAbleToAttack = false;
									break;
								}
							}
						}

						//如果可以攻击 √
						if (isAbleToAttack)
						{
							formerChess = chess;

							chess.Defencer->pieceOpen(&chess.tPiece);
							chess.cb.pieceCompare(chess.Attacker, chess.Defencer, chess.lastDeadPiece, &chess.lastDeadPieceNum, &chess.redPrice, &chess.blackPrice);

							chess.pieceState = WAIT_4_NONE;
							chess.firstClick = false;
							chess.secondClick = false;

							if (chess.bloc == c_BLACK)
								chess.bloc = c_RED;
							else
								chess.bloc = c_BLACK;

							if (onlinePlay)
							{
								playerNow.player = anotherPlayer.player;
								playerNow.bloc = anotherPlayer.bloc;
							}

							break;
						}
						//如果不能攻击 ×
						else
						{
							//如果第二次点击的位置有对象存在
							if (chess.cb.isPiecePosUsed[chess.chosenPos2.x][chess.chosenPos2.y])
							{
								//如果第二次点击对象已经翻开
								if (chess.Defencer->isOpened)
								{
									//如果第二次点击对象已经翻开且不是第一次点击对象阵营（视未点击第二次） ×
									if (chess.Defencer->bloc != chess.bloc)
									{
										chess.secondClick = false;
										chess.chosenPos2 = formerChess.chosenPos2;
										break;
									}
									//如果第二次点击对象已翻开但是第一次点击对象阵营（视第二次点击为第一次点击）×
									else
									{
										chess.secondClick = false;
										chess.chosenPos = chess.chosenPos2;
										chess.Attacker = chess.Defencer;
										chess.pieceState = WAIT_4_ATTACK;

										chess.chosenPos2 = formerChess.chosenPos2;

										break;
									}
								}
								//如果第二次点击对象未翻开（视第二次点击为第一次点击）×
								else
								{
									chess.secondClick = false;
									chess.chosenPos = chess.chosenPos2;
									chess.Attacker = chess.Defencer;
									chess.pieceState = WAIT_4_OPEN;

									chess.chosenPos2 = formerChess.chosenPos2;

									break;
								}
							}
							//如果第二次点击的位置没有对象存在（视未点击第二次） ×
							else
							{
								chess.secondClick = false;
								chess.chosenPos2 = formerChess.chosenPos2;
								break;
							}
						}
					}
					//如果第一次点击对象是车，且第二次点击位置在横竖方向距离等于二的位置
					else if (chess.Attacker->pieceType == c_CHARIOT &&
						((abs(chess.Attacker->piecePosition.x - chess.chosenPos2.x) == 2 && chess.Attacker->piecePosition.y - chess.chosenPos2.y == 0) ||
						(abs(chess.Attacker->piecePosition.y - chess.chosenPos2.y) == 2 && chess.Attacker->piecePosition.x - chess.chosenPos2.x == 0)))
					{
						bool isAbleToAttack = false;
						
						//第二次点击棋子的阵营与第一次点击棋子不同，或者第二次点击棋子未翻开
						if ((chess.Attacker->bloc != chess.Defencer->bloc || !chess.Defencer->isOpened))
						{
							//在车左侧且中间没有棋子
							if (chess.Defencer->piecePosition.x < chess.Attacker->piecePosition.x && !chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x - 1][chess.Attacker->piecePosition.y])
								isAbleToAttack = true;
							//在车右侧且中间没有棋子
							else if (chess.Defencer->piecePosition.x > chess.Attacker->piecePosition.x && !chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x + 1][chess.Attacker->piecePosition.y])
								isAbleToAttack = true;
							//在车上侧且中间没有棋子
							else if (chess.Defencer->piecePosition.y < chess.Attacker->piecePosition.y && !chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x][chess.Attacker->piecePosition.y - 1])
								isAbleToAttack = true;
							//在车下侧且中间没有棋子
							else if (chess.Defencer->piecePosition.y > chess.Attacker->piecePosition.y && !chess.cb.isPiecePosUsed[chess.Attacker->piecePosition.x][chess.Attacker->piecePosition.y + 1])
								isAbleToAttack = true;
							else
								isAbleToAttack = false;
						}

						if (isAbleToAttack)
						{
							formerChess = chess;

							chess.Defencer->pieceOpen(&chess.tPiece);
							chess.cb.pieceCompare(chess.Attacker, chess.Defencer, chess.lastDeadPiece, &chess.lastDeadPieceNum, &chess.redPrice, &chess.blackPrice);

							chess.pieceState = WAIT_4_NONE;
							chess.firstClick = false;
							chess.secondClick = false;

							if (chess.bloc == c_BLACK)
								chess.bloc = c_RED;
							else
								chess.bloc = c_BLACK;

							if (onlinePlay)
							{
								playerNow.player = anotherPlayer.player;
								playerNow.bloc = anotherPlayer.bloc;
							}

							break;
						}
						else
						{
							//如果第二次点击的位置有对象存在
							if (chess.cb.isPiecePosUsed[chess.chosenPos2.x][chess.chosenPos2.y])
							{
								//如果第二次点击对象已经翻开
								if (chess.Defencer->isOpened)
								{
									//如果第二次点击对象已经翻开且不是第一次点击对象阵营（视未点击第二次） ×
									if (chess.Defencer->bloc != chess.bloc)
									{
										chess.secondClick = false;
										chess.chosenPos2 = formerChess.chosenPos2;
										break;
									}
									//如果第二次点击对象已翻开但是第一次点击对象阵营（视第二次点击为第一次点击）×
									else
									{
										chess.secondClick = false;
										chess.chosenPos = chess.chosenPos2;
										chess.Attacker = chess.Defencer;
										chess.pieceState = WAIT_4_ATTACK;

										chess.chosenPos2 = formerChess.chosenPos2;

										break;
									}
								}
								//如果第二次点击对象未翻开（视第二次点击为第一次点击）×
								else
								{
									chess.secondClick = false;
									chess.chosenPos = chess.chosenPos2;
									chess.Attacker = chess.Defencer;
									chess.pieceState = WAIT_4_OPEN;

									chess.chosenPos2 = formerChess.chosenPos2;

									break;
								}
							}
							//如果第二次点击的位置没有对象存在（视未点击第二次） ×
							else
							{
								chess.secondClick = false;
								chess.chosenPos2 = formerChess.chosenPos2;
								break;
							}
						}
					}
					else if (chess.Attacker->pieceType == c_HORSE && 
						abs(chess.Attacker->piecePosition.x - chess.Defencer->piecePosition.x) <= 1 && abs(chess.Attacker->piecePosition.y - chess.Defencer->piecePosition.y) <= 1)
					{
						//如果第二次点击对象已经翻开了 
						if (chess.Defencer->isOpened)
						{
							//如果第二次点击对象已经翻开且不是第一次点击对象阵营 √
							if (chess.Defencer->bloc != chess.bloc)
							{
								formerChess = chess;
								chess.cb.pieceCompare(chess.Attacker, chess.Defencer, chess.lastDeadPiece, &chess.lastDeadPieceNum, &chess.redPrice, &chess.blackPrice);

								chess.pieceState = WAIT_4_NONE;
								chess.firstClick = false;
								chess.secondClick = false;

								if (chess.bloc == c_BLACK)
									chess.bloc = c_RED;
								else
									chess.bloc = c_BLACK;

								if (onlinePlay)
								{
									playerNow.player = anotherPlayer.player;
									playerNow.bloc = anotherPlayer.bloc;
								}

								break;
							}
							//如果第二次点击对象已翻开但是第一次点击对象阵营（视第二次点击为第一次点击）×
							else
							{
								chess.secondClick = false;

								chess.chosenPos = chess.chosenPos2;
								for (int i = 0; i < 32; i++)
								{
									if (chess.piece[i].isDeath)
										continue;

									if (chess.piece[i].piecePosition == chess.chosenPos)
									{
										chess.Attacker = &chess.piece[i];
										break;
									}
								}

								if (!chess.Attacker->isOpened)
								{
									chess.pieceState = WAIT_4_OPEN;
								}
								else if (chess.Attacker->bloc == chess.bloc)
								{
									chess.pieceState = WAIT_4_ATTACK;
								}

								chess.chosenPos2 = formerChess.chosenPos2;

								break;
							}
						}
						//如果第二次点击对象未翻开且其阵营与我方不同 √
						else if (chess.Defencer->bloc != chess.bloc)
						{
							formerChess = chess;

							chess.Defencer->pieceOpen(&chess.tPiece);
							chess.cb.pieceCompare(chess.Attacker, chess.Defencer, chess.lastDeadPiece, &chess.lastDeadPieceNum, &chess.redPrice, &chess.blackPrice);

							chess.pieceState = WAIT_4_NONE;
							chess.firstClick = false;
							chess.secondClick = false;

							if (chess.bloc == c_BLACK)
								chess.bloc = c_RED;
							else
								chess.bloc = c_BLACK;

							if (onlinePlay)
							{
								playerNow.player = anotherPlayer.player;
								playerNow.bloc = anotherPlayer.bloc;
							}

							break;
						}
						//如果第二次点击对象未翻开且为我方阵营（视为翻开第二次点击对象） √
						else
						{
							formerChess = chess;

							chess.Defencer->pieceOpen(&chess.tPiece);

							chess.pieceState = WAIT_4_NONE;
							chess.firstClick = false;
							chess.secondClick = false;

							if (chess.bloc == c_BLACK)
								chess.bloc = c_RED;
							else
								chess.bloc = c_BLACK;

							if (onlinePlay)
							{
								playerNow.player = anotherPlayer.player;
								playerNow.bloc = anotherPlayer.bloc;
							}

							break;
						}
					}
					//如果第二次点击的位置既不能移动到也不能被攻击
					else
					{
						//如果第二次点击的位置有对象存在
						if (chess.cb.isPiecePosUsed[chess.chosenPos2.x][chess.chosenPos2.y])
						{
							//如果第二次点击对象已经翻开
							if (chess.Defencer->isOpened)
							{
								//如果第二次点击对象已经翻开且不是第一次点击对象阵营（视未点击第二次） ×
								if (chess.Defencer->bloc != chess.bloc)
								{
									chess.secondClick = false;
									chess.chosenPos2 = formerChess.chosenPos2;
									break;
								}
								//如果第二次点击对象已翻开但是第一次点击对象阵营（视第二次点击为第一次点击）×
								else
								{
									chess.secondClick = false;
									chess.chosenPos = chess.chosenPos2;
									chess.Attacker = chess.Defencer;
									chess.pieceState = WAIT_4_ATTACK;

									chess.chosenPos2 = formerChess.chosenPos2;

									break;
								}
							}
							//如果第二次点击对象未翻开（视第二次点击为第一次点击）×
							else
							{
								chess.secondClick = false;
								chess.chosenPos = chess.chosenPos2;
								chess.Attacker = chess.Defencer;
								chess.pieceState = WAIT_4_OPEN;

								chess.chosenPos2 = formerChess.chosenPos2;

								break;
							}
						}
						//如果第二次点击的位置没有对象存在（视未点击第二次） ×
						else
						{
							chess.secondClick = false;
							chess.chosenPos2 = formerChess.chosenPos2;
							break;
						}
					}
				}
			}

			//后门（彩蛋），用于翻开全部棋子
			if (AllOpen == 4)
			{
				for (int i = 0; i < 32; i++)
				{
					chess.piece[i].pieceOpen(&chess.tPiece);
				}

				if (chess.firstOpen)
				{
					chess.firstOpen = false;
					chess.bloc = c_RED;
				}

				AllOpen = -1;
			}

			break;
		case REGRET_BUTTON:
		case SURRENDER_BUTTON:
		case TIE_BUTTON:
			gameState = GAME_PAUSED_PAGE;
			break;
		case SETTING_BUTTON_FROM_GAME_PAGE:
			gameState = GAME_PAUSED_PAGE;
			break;
		default:
			break;
		}

		if (gameOver)
			gameState = GAME_OVER_PAGE;
		break;

	case GAME_PAUSED_PAGE:
		switch (lastClickState)
		{
		case REGRET_BUTTON:
			if (yesClicked)
			{
				chess = formerChess;
				chess.firstClick = false;
				chess.secondClick = false;

				lastClickState = PIECE;
				gameState = GAME_PAGE;
				yesClicked = false;
			}
			else if (noClicked)
			{
				lastClickState = PIECE;
				gameState = GAME_PAGE;
				noClicked = false;
			}
			break;
		case TIE_BUTTON:
			if (yesClicked)
			{
				chess.winner = -1;
				gameOver = true;

				lastClickState = PIECE;
				gameState = GAME_OVER_PAGE;
				yesClicked = false;
			}
			else if (noClicked)
			{
				lastClickState = PIECE;
				gameState = GAME_PAGE;
				noClicked = false;
			}
			break;
		case SURRENDER_BUTTON:
			if (yesClicked)
			{
				if (chess.bloc == c_RED)
				{
					chess.winner = c_BLACK;
					gameOver = true;
				}
				else
				{
					chess.winner = c_RED;
					gameOver = true;
				}

				lastClickState = PIECE;
				gameState = GAME_OVER_PAGE;
				yesClicked = false;
			}
			else if (noClicked)
			{
				lastClickState = PIECE;
				gameState = GAME_PAGE;
				noClicked = false;
			}
			break;
		case SETTING_BUTTON_FROM_START_PAGE:
			if (noClicked)
			{
				settingPage = SETTING_PAGE_LOGIC;
				lastClickState = PIECE;
				gameState = START_PAGE;
				ruleAdjustment = 0;
				noClicked = false;
			}
			break;
		case SETTING_BUTTON_FROM_GAME_PAGE:
			if (noClicked)
			{
				settingPage = SETTING_PAGE_LOGIC;
				lastClickState = PIECE;
				gameState = GAME_PAGE;
				ruleAdjustment = 0;
				noClicked = false;
			}
			break;
		case HOME_BUTTON:
			if (yesClicked)
			{
				gameState = START_PAGE;
				lastClickState = PIECE;
				yesClicked = false;

				if (isMusicOn)
				{
					GamePageBKMusic.stop();
					StartPageBKMusic.play();
					StartPageBKMusic.setLoop(true);
				}
			}
			else if (noClicked)
			{
				lastClickState = SETTING_BUTTON_FROM_GAME_PAGE;
				noClicked = false;
			}
			break;
		}
		break;
	case SAVE_PAGE:
		if (yesClicked)
		{
			switch (lastClickStateSL)
			{
			case SAVE_BUTTON_1:
				save("save 1.txt");
				break;
			case SAVE_BUTTON_2:
				save("save 2.txt");
				break;
			case SAVE_BUTTON_3:
				save("save 3.txt");
				break;
			case SAVE_BUTTON_4:
				save("save 4.txt");
				break;
			case SAVE_BUTTON_5:
				save("save 5.txt");
				break;
			case SAVE_BUTTON_6:
				save("save 6.txt");
				break;
			}

			lastClickStateSL = -1;
			yesClicked = false;
		}
		else if (noClicked)
		{
			lastClickStateSL = -1;
			noClicked = false;
		}
		break;
	case LOAD_PAGE:
		if (yesClicked)
		{
			switch (lastClickStateSL)
			{
			case SAVE_BUTTON_1:
				load("save 1.txt");
				break;
			case SAVE_BUTTON_2:
				load("save 2.txt");
				break;
			case SAVE_BUTTON_3:
				load("save 3.txt");
				break;
			case SAVE_BUTTON_4:
				load("save 4.txt");
				break;
			case SAVE_BUTTON_5:
				load("save 5.txt");
				break;
			case SAVE_BUTTON_6:
				load("save 6.txt");
				break;
			}

			gameState = GAME_PAGE;
			lastClickState = PIECE;
			lastClickStateSL = -1;
			yesClicked = false;
		}
		else if (noClicked)
		{
			lastClickStateSL = -1;
			noClicked = false;
		}
		break;
	case GAME_OVER_PAGE:
		break;
	default:
		break;
	}
}

void Game::gameDraw()
{
	int grid_x = 0;
	int grid_y = 0;
	std::stringstream ss;
	switch (gameState)
	{
	case START_PAGE:
		window.clear(Color::Color(255, 255, 255, 255));

		spStartPage.setPosition(0, 0);
		window.draw(spStartPage);

		drawButtons(gameState);

		window.display();
		break;

	case GAME_PAGE:
		window.clear();

		gamePageDraw();

		window.display();
		break;

	case GAME_PAUSED_PAGE:
		window.clear();

		if (lastClickState != SETTING_BUTTON_FROM_START_PAGE)
			gamePageDraw();
		else
		{
			spStartPage.setPosition(0, 0);
			window.draw(spStartPage);

			drawButtons(START_PAGE);
		}

		spPopWindow.setPosition(POP_WINDOW_X, POP_WINDOW_Y);
		window.draw(spPopWindow);

		switch (lastClickState)
		{
		case REGRET_BUTTON:
			spAcceptWord.setTexture(tAcceptRetractWord);
			spAcceptWord.setPosition(ACCEPT_RETRACT_WORD_X + POP_WINDOW_X, ACCEPT_RETRACT_WORD_Y + POP_WINDOW_Y);
			window.draw(spAcceptWord);

			drawButtons(gameState);

			break;

		case TIE_BUTTON:
			spAcceptWord.setTexture(tAcceptTieWord);
			spAcceptWord.setPosition(ACCEPT_TIE_WORD_X + POP_WINDOW_X, ACCEPT_TIE_WORD_Y + POP_WINDOW_Y);
			window.draw(spAcceptWord);

			drawButtons(gameState);

			break;

		case SURRENDER_BUTTON:
			spAcceptWord.setTexture(tToSurrenderWord);
			spAcceptWord.setPosition(TO_SURRENDER_WORD_X + POP_WINDOW_X, TO_SURRENDER_WORD_Y + POP_WINDOW_Y);
			window.draw(spAcceptWord);

			drawButtons(gameState);

			break;

		case SETTING_BUTTON_FROM_START_PAGE:
		case SETTING_BUTTON_FROM_GAME_PAGE:
			switch (settingPage)
			{
			case SETTING_PAGE_LOGIC:
				spBGMWord.setPosition(BGM_WORD_X + POP_WINDOW_X, BGM_WORD_Y + POP_WINDOW_Y);
				window.draw(spBGMWord);
				spSEWord.setPosition(SE_WORD_X + POP_WINDOW_X, SE_WORD_Y + POP_WINDOW_Y);
				window.draw(spSEWord);

				ss.str("");
				text.setCharacterSize(36);
				text.setFillColor(Color::Color(0, 0, 0, 255));
				if (isMusicOn)
				{
					ss << (int)musicVolume;
					text.setString(ss.str());
				}
				else
				{
					text.setString(L"×");
				}
				text.setPosition(BGM_VOLUME_VALUE_X + POP_WINDOW_X, BGM_VOLUME_VALUE_Y + POP_WINDOW_Y);
				text.setOrigin(0, 0);
				window.draw(text);

				ss.str("");
				text.setCharacterSize(36);
				text.setFillColor(Color::Color(0, 0, 0, 255));
				if (isSoundOn)
				{
					ss << (int)soundVolume;
					text.setString(ss.str());
				}
				else
				{
					text.setString(L"×");
				}
				text.setPosition(SE_VOLUME_VALUE_X + POP_WINDOW_X, SE_VOLUME_VALUE_Y + POP_WINDOW_Y);
				text.setOrigin(0, 0);
				window.draw(text);
				break;
			case SETTING_PAGE_RULE:
				spRule.setTextureRect(IntRect(0, ruleAdjustment, RULE_WIDTH, RULE_SHOW_HEIGHT));
				spRule.setPosition(RULE_POS_X + POP_WINDOW_X, RULE_POS_Y + POP_WINDOW_Y);
				window.draw(spRule);
				break;
			}
			drawButtons(gameState);
			break;

		case HOME_BUTTON:
			spBackHomeWord.setPosition(BACK_HOME_WORD_X + POP_WINDOW_X, BACK_HOME_WORD_Y + POP_WINDOW_Y);
			window.draw(spBackHomeWord);

			drawButtons(gameState);
			break;
		}
		window.display();
		break;
	case SAVE_PAGE:
		window.clear();

		spBigPopWindow.setPosition(BIG_POP_WINDOW_X, BIG_POP_WINDOW_Y);
		window.draw(spBigPopWindow);

		spSaveWord.setPosition(SL_WORD_X, SL_WORD_Y);
		window.draw(spSaveWord);

		drawButtons(gameState);

		drawSaveWord("save 1.txt", SL_DETAIL_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_DETAIL_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_1 + BIG_POP_WINDOW_Y, 
			SL_TIME_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_TIME_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_1 + BIG_POP_WINDOW_Y);
		drawSaveWord("save 2.txt", SL_DETAIL_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_DETAIL_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_2 + BIG_POP_WINDOW_Y, 
			SL_TIME_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_TIME_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_2 + BIG_POP_WINDOW_Y);
		drawSaveWord("save 3.txt", SL_DETAIL_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_DETAIL_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_3 + BIG_POP_WINDOW_Y, 
			SL_TIME_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_TIME_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_3 + BIG_POP_WINDOW_Y);
		drawSaveWord("save 4.txt", SL_DETAIL_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_DETAIL_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_1 + BIG_POP_WINDOW_Y, 
			SL_TIME_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_TIME_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_1 + BIG_POP_WINDOW_Y);
		drawSaveWord("save 5.txt", SL_DETAIL_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_DETAIL_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_2 + BIG_POP_WINDOW_Y, 
			SL_TIME_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_TIME_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_2 + BIG_POP_WINDOW_Y);
		drawSaveWord("save 6.txt", SL_DETAIL_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_DETAIL_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_3 + BIG_POP_WINDOW_Y, 
			SL_TIME_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_TIME_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_3 + BIG_POP_WINDOW_Y);


		if (lastClickStateSL > 0)
		{
			spPopWindow.setPosition(POP_WINDOW_X, POP_WINDOW_Y);
			window.draw(spPopWindow);

			spCoverFileWord.setPosition(COVER_FILE_WORD_X + POP_WINDOW_X, COVER_FILE_WORD_Y + POP_WINDOW_Y);
			window.draw(spCoverFileWord);

			//ButtonRectTurnOff
			drawSingleButton(&spTurnOffButton, &ButtonRectTurnOff, 0, 0, BUTTON_TURN_OFF_X + POP_WINDOW_X, BUTTON_TURN_OFF_Y + POP_WINDOW_Y, BUTTON_TURN_OFF_EDGE_LENTH, BUTTON_TURN_OFF_EDGE_LENTH);

			//ButtonRectYes
			drawSingleButton(&spButtons, &ButtonRectYes, 2, 2, BUTTON_YES_X + POP_WINDOW_X, BUTTON_YES_Y + POP_WINDOW_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
			//ButtonRectNo
			drawSingleButton(&spButtons, &ButtonRectNo, 3, 2, BUTTON_NO_X + POP_WINDOW_X, BUTTON_NO_Y + POP_WINDOW_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
		}

		window.display();
		break;
	case LOAD_PAGE:
		window.clear();
		spBigPopWindow.setPosition(BIG_POP_WINDOW_X, BIG_POP_WINDOW_Y);
		window.draw(spBigPopWindow);

		spLoadWord.setPosition(SL_WORD_X, SL_WORD_Y);
		window.draw(spLoadWord);

		drawButtons(gameState);

		drawSaveWord("save 1.txt", SL_DETAIL_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_DETAIL_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_1 + BIG_POP_WINDOW_Y,
			SL_TIME_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_TIME_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_1 + BIG_POP_WINDOW_Y);
		drawSaveWord("save 2.txt", SL_DETAIL_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_DETAIL_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_2 + BIG_POP_WINDOW_Y,
			SL_TIME_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_TIME_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_2 + BIG_POP_WINDOW_Y);
		drawSaveWord("save 3.txt", SL_DETAIL_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_DETAIL_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_3 + BIG_POP_WINDOW_Y,
			SL_TIME_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_1 + BIG_POP_WINDOW_X, SL_TIME_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_3 + BIG_POP_WINDOW_Y);
		drawSaveWord("save 4.txt", SL_DETAIL_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_DETAIL_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_1 + BIG_POP_WINDOW_Y,
			SL_TIME_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_TIME_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_1 + BIG_POP_WINDOW_Y);
		drawSaveWord("save 5.txt", SL_DETAIL_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_DETAIL_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_2 + BIG_POP_WINDOW_Y,
			SL_TIME_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_TIME_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_2 + BIG_POP_WINDOW_Y);
		drawSaveWord("save 6.txt", SL_DETAIL_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_DETAIL_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_3 + BIG_POP_WINDOW_Y,
			SL_TIME_WORD_X_IN_RECTANGLE + SL_RECTANGLE_X_2 + BIG_POP_WINDOW_X, SL_TIME_WORD_Y_IN_RECTANGLE + SL_RECTANGLE_Y_3 + BIG_POP_WINDOW_Y);

		if (lastClickStateSL > 0 && !chess.firstOpen)
		{
			spPopWindow.setPosition(POP_WINDOW_X, POP_WINDOW_Y);
			window.draw(spPopWindow);

			spWhetherLoadWord.setPosition(COVER_FILE_WORD_X + POP_WINDOW_X, COVER_FILE_WORD_Y + POP_WINDOW_Y);
			window.draw(spWhetherLoadWord);

			//ButtonRectTurnOff
			drawSingleButton(&spTurnOffButton, &ButtonRectTurnOff, 0, 0, BUTTON_TURN_OFF_X + POP_WINDOW_X, BUTTON_TURN_OFF_Y + POP_WINDOW_Y, BUTTON_TURN_OFF_EDGE_LENTH, BUTTON_TURN_OFF_EDGE_LENTH);

			//ButtonRectYes
			drawSingleButton(&spButtons, &ButtonRectYes, 2, 2, BUTTON_YES_X + POP_WINDOW_X, BUTTON_YES_Y + POP_WINDOW_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
			//ButtonRectNo
			drawSingleButton(&spButtons, &ButtonRectNo, 3, 2, BUTTON_NO_X + POP_WINDOW_X, BUTTON_NO_Y + POP_WINDOW_Y, BUTTON_WIDTH, BUTTON_HEIGHT);
		}

		window.display();

		break;
	case GAME_OVER_PAGE:
		window.clear();

		gamePageDraw();

		spPopWindow.setPosition(POP_WINDOW_X, POP_WINDOW_Y);
		window.draw(spPopWindow);
		
		switch (chess.winner)
		{
		case c_RED:
			grid_y = 0;
			spWinnerWord.setPosition(WINNER_WORD_X + POP_WINDOW_X, WINNER_WORD_Y + POP_WINDOW_Y);
			break;
		case c_BLACK:
			grid_y = 1;
			spWinnerWord.setPosition(WINNER_WORD_X + POP_WINDOW_X, WINNER_WORD_Y + POP_WINDOW_Y);
			break;
		default:
			grid_y = 2;
			spWinnerWord.setPosition(TIE_WORD_X + POP_WINDOW_X, TIE_WORD_Y + POP_WINDOW_Y);
			break;
		}
		spWinnerWord.setTextureRect(IntRect(0, grid_y * WINNER_WORD_HEIGHT, WINNER_WORD_WIDTH, WINNER_WORD_HEIGHT));
		window.draw(spWinnerWord);

		drawButtons(gameState);

		window.display();
		break;
	default:
		break;
	}
}

void Game::gameRun()
{
	gameInit();

	while (!gameQuit)
	{
		if (!onlinePlay)
		{
			while (!onlinePlay)
			{
				gameInput();
				gameLogic();
				gameDraw();
			}
		}
		else
		{
			onlineSetup();
			while (onlinePlay)
			{
				gameInput();
				gameLogic();
				gameDraw();
				onlinePacketUpdate();
			}
		}

		std::cout << "换路！" << std::endl;
	}
}
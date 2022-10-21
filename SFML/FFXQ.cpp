#include "Game.h"
using namespace sf;

int main()
{
	Game FFXQ;
	while (FFXQ.window.isOpen())
		FFXQ.gameRun();
	return 0;
}
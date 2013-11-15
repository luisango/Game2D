#ifndef __GAMEPADCONTROLLER_H__
#define __GAMEPADCONTROLLER_H__

#include "stdafx.h"
#include "Config.h"

class Game;

class GamepadController
{
private:
    Game * m_pGame;

public:
	GamepadController(Game * pGame);

    void ProcessInput();
};

#endif
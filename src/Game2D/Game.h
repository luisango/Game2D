#ifndef __GAME_H__
#define __GAME_H__

#include "stdafx.h"
#include "Config.h"
#include "Vector2D.h"
#include "List.h"
#include "Entity.h"
#include "Hero.h"
#include "GamepadController.h"
#include "Render.h"

class Game
{
public:
    static enum GameState { INIT, BEGIN, PLAY, END };

private:
    GamepadController * m_pGamepadController;
    Render * m_pRender;
    
    Vector2D m_vWorldSize;
	Entity * m_pHero;

    GameState m_eState;
    GameState m_eNextState;

public:
    Game();

    Entity * GetHero();
    void SetState(GameState state);
    void ProcessInput();
    void Update();
    void Draw();
};

#endif
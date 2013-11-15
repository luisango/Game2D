#include "stdafx.h"
#include "GamepadController.h"
#include "Game.h"

GamepadController::GamepadController(Game * pGame) : m_pGame(pGame) { }

void GamepadController::ProcessInput()
{
    if (_kbhit())
    {
        // Key is pressed, so we get it
        char input = _getch();

        switch(input)
        {
        case KEY_UP:
            m_pGame->GetHero()->MoveUp();
		    break;
	    case KEY_DOWN:
		    m_pGame->GetHero()->MoveDown();
		    break;
        case KEY_LEFT:
            m_pGame->GetHero()->MoveLeft();
		    break;
	    case KEY_RIGHT:
		    m_pGame->GetHero()->MoveRight();
		    break;
        case KEY_EXIT:
            m_pGame->SetState(Game::GameState::END);
        }   
    }
}
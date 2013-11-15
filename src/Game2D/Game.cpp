#include "stdafx.h"
#include "Config.h"
#include "Game.h"

Game::Game()
{
    m_pRender            = new Render();
    m_pGamepadController = new GamepadController(this);

    m_eState             = Game::GameState::INIT;
    m_eNextState         = Game::GameState::INIT;

	m_pHero              = new Hero();
}

Entity * Game::GetHero()
{
    return m_pHero;
}

void Game::SetState(Game::GameState state)
{
    m_eNextState = state;
}
    
void Game::ProcessInput()
{
    m_pGamepadController->ProcessInput();
}

void Game::Update()
{
    m_eState = m_eNextState;

	switch (m_eState)
    {
    case Game::GameState::INIT:
        m_eNextState = Game::GameState::BEGIN;
        break;

    case Game::GameState::BEGIN:
        m_eNextState = Game::GameState::PLAY;
        break;

    case Game::GameState::PLAY:
        m_pHero->Update();
        break;

    case Game::GameState::END:
        std::exit(EXIT_SUCCESS);
        break;
    }
}

void Game::Draw()
{
    switch (m_eState)
    {
    case Game::GameState::INIT:
        break;

    case Game::GameState::BEGIN:
        break;

    case Game::GameState::PLAY:
        m_pRender->Draw(m_pHero);
        break;

    case Game::GameState::END:
        break;
    }
		
	// EVADE ULTRA-HYPER-MEGA-FAST-SPEED
    Sleep(CFG_WAIT_TIME_PER_TICK);
}
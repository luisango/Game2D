#include "stdafx.h"
#include "Hero.h"

Hero::Hero()
{
    m_cAvatar = '*';
}

void Hero::Update()
{

}

void Hero::Move(Vector2D v)
{
    Entity::Move(v);
}

void Hero::MoveUp()
{
    Vector2D movement(0, -1);

    Move(movement);
}

void Hero::MoveDown()
{
    Vector2D movement(0, 1);

    Move(movement);
}

void Hero::MoveLeft()
{
    Vector2D movement(-1, 0);

    Move(movement);
}

void Hero::MoveRight()
{
    Vector2D movement(1, 0);

    Move(movement);
}
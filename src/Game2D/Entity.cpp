#include "stdafx.h"
#include "Entity.h"

Entity::Entity() 
    : m_iSpeed(1), m_vPosition() { }

void Entity::Update() { }

void Entity::Draw()
{
    printf("%c", m_cAvatar);
}

void Entity::Move(Vector2D v) 
{
    m_vPosition = m_vPosition + v;
}

void Entity::MoveUp() { }

void Entity::MoveDown() { }

void Entity::MoveLeft() { }

void Entity::MoveRight() { }

Vector2D Entity::GetPosition()
{
    return m_vPosition;
}

float Entity::GetX()
{
    return m_vPosition.x;
}

float Entity::GetY()
{
    return m_vPosition.y;
}
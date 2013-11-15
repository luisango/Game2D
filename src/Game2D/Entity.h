#ifndef __ENTITY_H__
#define __ENTITY_H__

#include "stdafx.h"
#include "Config.h"
#include "Vector2D.h"s

class Entity 
{
protected:
    Vector2D m_vPosition;
    int  m_iSpeed;
    char m_cAvatar;

    void Move(Vector2D m);

public:
    Entity();

    virtual void Update();
    virtual void Draw();
    virtual void MoveUp();
    virtual void MoveDown();
    virtual void MoveLeft();
    virtual void MoveRight();
    Vector2D GetPosition();
    int GetX();
    int GetY();
};

#endif
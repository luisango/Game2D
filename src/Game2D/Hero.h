#ifndef __HERO_H__
#define __HERO_H__

#include "stdafx.h"
#include "Config.h"
#include "Entity.h"

class Hero : public Entity
{
private:
    virtual void Move(Vector2D m);

public:
    Hero();

    virtual void Update();
    virtual void MoveUp();
    virtual void MoveDown();
    virtual void MoveLeft();
    virtual void MoveRight();
};

#endif
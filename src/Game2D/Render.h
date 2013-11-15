#ifndef __RENDER_H__
#define __RENDER_H__

#include "stdafx.h"
#include "Config.h"
#include "Vector2D.h"
#include "String.h"
#include "Entity.h"

class Render
{
public:
    Render();

	void ClearScreen();
    void GoToXY(int x, int y);
    void GoToPosition(Vector2D v);
    void HideCursor();
    void SetColorTo(int color);
    void Draw(Entity * e);
    void Draw(int x, int y, char c);
    void Draw(Vector2D v, String s);
    void Draw(int x, int y, String s);
};

#endif
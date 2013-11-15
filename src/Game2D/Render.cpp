#include "stdafx.h"
#include "Render.h"

Render::Render() { }

void Render::ClearScreen()
{
	printf("%c", CFG_CLEAR_CHARACTER);
}

void Render::GoToXY(int x, int y)
{
    COORD pos = { x, y };
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}

void Render::GoToPosition(Vector2D v)
{
    GoToXY(v.x, v.y);
}

void Render::HideCursor()
{
    HANDLE hdl;
    hdl = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO t;
    t.bVisible = false;
    SetConsoleCursorInfo(hdl, &t);
}

void Render::SetColorTo(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void Render::Draw(Entity * e) 
{
    GoToPosition(e->GetPosition());
    e->Draw();
}

void Render::Draw(int x, int y, char c)
{
    GoToXY(x, y);
    printf("%c", c);
}

void Render::Draw(Vector2D v, String s)
{
    Draw(v.x, v.y, s);
}

void Render::Draw(int x, int y, String s)
{
    GoToXY(x, y);
    printf("%s", s);
}

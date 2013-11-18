#ifndef __VECTOR2D_H__
#define __VECTOR2D_H__

#include "stdafx.h"
#include <cmath>

class Vector2D
{
public:
    float x;
    float y;

    Vector2D();
    Vector2D(const float x, const float y);
    
    static Vector2D Vector2D::FromPolar(const float angle, const float radius)
    {
        return Vector2D(
            radius * cos(angle), 
            radius * sin(angle)
        );
    }

    static Vector2D Vector2D::Normalize(const Vector2D &vector)
    {
        float m = vector.Magnitude();

        if (m > 0)
            return Vector2D(
                vector.x / m,
                vector.y / m
            );
        else
            return Vector2D();
    }

    Vector2D operator+(const Vector2D &other) const;
    Vector2D operator-(const Vector2D &other) const;
    Vector2D operator*(const float scale) const;
    float Magnitude() const;
};

Vector2D operator*(const float scale, const Vector2D &vector);

#endif
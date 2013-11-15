#include "Vector2D.h"

Vector2D::Vector2D() : x(0), y(0) { }
Vector2D::Vector2D(const float x, const float y) : x(x), y(y) { }

Vector2D Vector2D::operator+(const Vector2D &other) const
{
    return Vector2D(
        x + other.x,
        y + other.y
    );
}

Vector2D Vector2D::operator-(const Vector2D &other) const
{
    return Vector2D(
        x - other.x,
        y - other.y
    );
}

Vector2D Vector2D::operator*(const float scale) const
{
    return Vector2D(
        x * scale,
        y * scale
    );
}

float Vector2D::Magnitude() const
{
    return sqrt(x * x + y * y);
}

Vector2D operator*(const float scale, const Vector2D &vector)
{
    return Vector2D(
        vector.x * scale,
        vector.y * scale
    );
}
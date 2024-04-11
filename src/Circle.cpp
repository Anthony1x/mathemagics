#include "Circle.h"
#include <raylib.h>

Circle::Circle()
{
}

Circle::Circle(int x, int y, float radius, Color color) : x(x), y(y), radius(radius), color(color)
{
}

void Circle::Draw()
{
    DrawCircle(x, y, radius, color);
}
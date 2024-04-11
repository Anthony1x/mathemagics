#include <raylib.h>
struct Circle
{
    // Variables
    int x, y;
    float radius;
    Color color;

    // Methods
    Circle();
    Circle(int x, int y, float radius, Color color);
    void Draw();
};
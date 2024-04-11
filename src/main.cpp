#include "PyTheorem.h"
#include "raylib.h"

int main(void)
{
    PyTheorem game = PyTheorem();

    while (!WindowShouldClose())
    {
        game.Update();
        game.Draw();
    }

    CloseWindow();

    return 0;
}
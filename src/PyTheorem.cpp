#include "PyTheorem.h"
#include "raylib.h"
#include <cmath>

PyTheorem* PyTheorem::instance = nullptr;

PyTheorem::PyTheorem()
{
    const int screenWidth = 1280;
    const int screenHeight = 720;

    InitWindow(screenWidth, screenHeight, "PyTheorem");

    SetTargetFPS(1000);

    pointA = Circle(screenWidth / 2 + 100, screenHeight / 2 + 100, 10, BLUE);
    pointB = Circle(screenWidth / 2 - 100, screenHeight / 2 - 100, 10, RED);
}

PyTheorem* PyTheorem::GetInstance()
{
    if (instance == nullptr)
    {
        instance = new PyTheorem();
    }

    return instance;
}

void PyTheorem::Update()
{
    bool leftMouseDown = IsMouseButtonDown(MOUSE_LEFT_BUTTON);
    bool pickedSomethingUp;

    bool mouseOverPointA =
        std::sqrt(std::pow(GetMouseX() - pointA.x, 2) + std::pow(GetMouseY() - pointA.y, 2)) <= pointA.radius;

    bool mouseOverPointB =
        std::sqrt(std::pow(GetMouseX() - pointB.x, 2) + std::pow(GetMouseY() - pointB.y, 2)) <= pointB.radius;

    if (mouseOverPointA)
    {
        pointA.color = GREEN;
        if (IsMouseButtonDown(MOUSE_LEFT_BUTTON))
        {
            pointA.x = GetMouseX();
            pointA.y = GetMouseY();
        }
    }
    else
        pointA.color = BLUE;

    if (mouseOverPointB)
    {
        pointB.color = GREEN;
        if (IsMouseButtonDown(MOUSE_LEFT_BUTTON))
        {
            pointB.x = GetMouseX();
            pointB.y = GetMouseY();
        }
    }
    else
        pointB.color = BLUE;
}

void PyTheorem::Draw()
{
    BeginDrawing();
    ClearBackground(BLACK);

    pointA.Draw();
    pointB.Draw();

    EndDrawing();
}

PyTheorem::~PyTheorem()
{
    delete instance;
}
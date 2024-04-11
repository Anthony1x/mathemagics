#pragma once
#include "Circle.h"
#include "raylib.h"

class PyTheorem
{
  public:
    void Update();
    void Draw();

    PyTheorem();

  private:
    Circle pointA, pointB;
};

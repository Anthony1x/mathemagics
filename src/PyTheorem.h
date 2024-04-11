#pragma once
#include "Circle.h"
#include "raylib.h"

class PyTheorem
{
  public:
    // Access the single instance of the Game class
    static PyTheorem* GetInstance();

    void Update();
    void Draw();

  private:
    PyTheorem();                            // Private constructor to prevent external creation
    PyTheorem(const PyTheorem&);            // Delete copy constructor
    PyTheorem& operator=(const PyTheorem&); // Delete assignment operator

    ~PyTheorem();

    static PyTheorem* instance;

    Circle pointA, pointB;
};

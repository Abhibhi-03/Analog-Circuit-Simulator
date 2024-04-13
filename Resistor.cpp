// 12-Sept-23 Fahad A. Khan Created
// Functions defintion for the resistor class

#include "Resistor.h"
#include <iostream>

Resistor::Resistor(double resistance, double red, double green, double blue, std::string name) {
    this->resistance = resistance;
    this->Red = red;
    this->Green = green;
    this->Blue = blue;
    this->name = name;
}

std::string Resistor::GetName() const
{
    return name;
}

void Resistor::Update()
{
    //pass
}

double Resistor::GetVoltage(double current, double timestep) {
    return current * resistance;
}

void Resistor::Display(double xpos, double ypos)
{
    //set color to the color of the component
    glColor3f(Red, Green, Blue);
    // Draw a point at the specified position
    glBegin(GL_POINTS);
    glVertex2f(xpos, ypos);
    glEnd();

    // Force execution of OpenGL commands in finite time
    glFlush();
}

void Resistor::SetColor() const
{
    // set the color to the color of the component
    glColor3f(Red, Green, Blue);
}


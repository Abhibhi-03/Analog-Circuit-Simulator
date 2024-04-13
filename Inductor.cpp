// 12-Sept-23 Fahad A. Khan Created
// // Functions defintion for the inductor class

#include "Inductor.h"

Inductor::Inductor(double inductance, double red, double green, double blue, std::string name) {
    this->inductance = inductance;
    this->Red = red;
    this->Green = green;
    this->Blue = blue;
    this->name = name;
}

double Inductor::GetVoltage(double current, double timestep) {
    double Vl = inductance * (current - C0) / timestep;
    this->current = current;
    return Vl;
}

std::string Inductor::GetName() const {
    return name;
}

void Inductor::Display(double xpos, double ypos) {
    //set color to the color of the component
    glColor3f(Red, Green, Blue);
    // Draw a point at the specified position
    glBegin(GL_POINTS);
    glVertex2f(xpos, ypos);
    glEnd();

    // Force execution of OpenGL commands in finite time
    glFlush();
}

void Inductor::Update()
{   
    //set the current to the next time step
    C0 = this->current;
}

double Inductor::GetInductance()
{
    return this->inductance;
}

void Inductor::SetInductance(double l)
{
    	this->inductance = l;
}


void Inductor::SetColor() const
{
    // set the color to the color of the component
    glColor3f(Red, Green, Blue);
}

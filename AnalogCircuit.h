//AnalogCircuit.h - header file for the analog circuit
//
// 21-May-22  M. Watler         Created.
// 27-May-22  M. Watler         Added graphical display.

#ifndef _ANALOGCIRCUIT_H_
#define _ANALOGCIRCUIT_H_
#include <GL/glew.h>   //for GLEW library
#include <gl/GL.h>    
#include <gl/GLU.h>    
#include <gl/glut.h>
#include <gl/freeglut.h>
#include "Component.h"
#include <iomanip>//setw
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>//M_PI
#include <stdlib.h>//abs
#include "Capacitor.h"
#include "Inductor.h"
#include "Resistor.h"

extern int windowWidth, windowHeight;
extern double scalingFactor;

void start();

class AnalogCircuit {
	const double T = 0.000001;//timestep of 1uS
	const double timeMax = 0.1;
	const double tolerance = 0.0001;//
	const double freq = 50;//50Hz
	const double Vpeak = 10.0;//10V
	const int xoffset = 50;
	double I =0.0;  //current 
	std::list<Component*> component;//polymorphism with the STL
	std::ofstream fout;
public:
	AnalogCircuit(std::string filename);//dump output data to a file
	static void display(float R, float G, float B);//display output data on the screen
	void run();
	void CostFunctionV(double& current, double V);
	void initializeCircuit(); // to initialize the componenets
	void drawStaticElements(); // to draw the Static Elemenets
	~AnalogCircuit();
};

#endif// _ANALOGCIRCUIT_H_
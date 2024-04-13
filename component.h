//Component.h - abstract base class for electronic components

//
// 19-May-22  M. Watler         Created.
// 27-May-22  M. Watler         Added graphical display.
// 09-September-23 Fahad A.Khan  

#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include <iostream>
#include <GL/glew.h>   //for GLEW library
#include <GL/glut.h>

#include <fstream>
#include <list>
#include <Windows.h>    
#include <gl/GL.h>    
#include <gl/GLU.h>    
#include <gl/glut.h>
#include <gl/freeglut.h>

class Component {
protected:
	float Red;
	float Green;
	float Blue;
	std::string name;
public:
	virtual std::string GetName() const = 0;
	virtual void Update() = 0;
	virtual double GetVoltage(double _current, double timestep)=0;
	virtual void Display(double xpos, double ypos) = 0;
	virtual void SetColor() const = 0;
};

#endif// _COMPONENT_H_
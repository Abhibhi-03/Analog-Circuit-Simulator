// 09-Sept-23 Fahad A. Khan Created
#ifndef _RESISTOR_H_
#define _RESISTOR_H_
#include "component.h"

class Resistor : public Component {
    double resistance;
    double Vr = 0.0;
public:
    Resistor(double resistance, double red, double green, double blue, std::string name);
    std::string GetName() const override;
    void Update() override;
    double GetVoltage(double current, double timestep) override;
    void Display(double xpos, double ypos) override;
    void SetColor() const override;
};
#endif //_RESISTOR_H

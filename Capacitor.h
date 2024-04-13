// 09-Sept-23 Fahad A. Khan Created

#ifndef _CAPACITOR_H
#define _CAPACITOR_H
#include "component.h"

class Capacitor : public Component {
    double capacitance;
    std::string name;
    double V0 = 0.0;
    double voltage = 0.0;
    public:
        Capacitor(double capacitance, double red, double green, double blue, std::string name);
        double GetVoltage(double current, double timestep) override;
        std::string GetName() const override;
        //display
        void Display(double xpos, double ypos) override;
        //update
        void Update( ) override;
        //getters
        double GetInductance();
        void SetColor() const override;
};
#endif // !_CAPACITOR_H_;
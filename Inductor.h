// 09-Sept-23 Fahad A. Khan Created
// Compare this snippet from Capacitor.h:

#ifndef _INDUCTOR_H
#define _INDUCTOR_H
#include "component.h"
class Inductor : public Component {
	double inductance;
	double current = 0.0;
	double C0 = 0.0;  // to store next time step
	public:
		Inductor(double inductance, double red, double green, double blue, std::string name);
		double GetVoltage(double current, double timestep) override;
		std::string GetName() const override;
		//display
		void Display(double xpos, double ypos) override;
		//update	
		void Update() override;
		//getters
		double GetInductance();
		//setters
		void SetInductance(double l);
		void SetColor() const override;
};
#endif // !_INDUCTOR_H_

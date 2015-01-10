// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef PNEUMATICSTESTER_H
#define PNEUMATICSTESTER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class PneumaticsTester: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	Solenoid* solenoid0;
	Solenoid* solenoid1;
	Solenoid* solenoid2;
	Solenoid* solenoid3;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	PneumaticsTester();
	void InitDefaultCommand();

	// solenoidNum: the number of the solenoid to set
	// state: On (1) or Off (0)
	void m_setSolenoidState(int solenoidNum, int state);
};

#endif

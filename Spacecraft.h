/* Spacecraft.h
*
* Homework 6: Show of force
* Edvin Jakobsson
* 2017-11-01
* 
* No collaborators
* Time: approximately 6 hours
*
* header for class Spacecraft
*/

#include <iostream>
#include <string>
using namespace std;

class Spacecraft {
	
	public:
	
	//constructor and destructor
	Spacecraft(string modelType, int modelYear);
	~Spacecraft(){};	//destructor is defined only here
	
	//getters, defined only here
	string getModel(){return modelType;}		
	int getModelYear() {return modelYear;}
	double getSpeed() {return speed;}
	double getMaxSpeed(){return maxSpeed;}

	//setters (functions)
	void setSpeed(double newSpeed);
	void setMaxSpeed(double newMaxSpeed);
	
	//functions
	void activateHyperDrive();		//sets the spacecraft to maximum speed
	void accelerate();				//adds 10 km/s to the speed
	void brake();					//removes 10 km/s to the speed
	
	//variables
	private:
	int const modelYear;
	string const modelType;
	double speed;		//velocites given in km/s
	double maxSpeed;	//velocites given in km/s
	
	
	
	
	
	
};

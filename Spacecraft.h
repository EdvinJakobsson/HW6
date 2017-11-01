#include <iostream>
#include <string>
using namespace std;

class Spacecraft {
	
	public:
	Spacecraft(string modelType);
	~Spacecraft();
	
	string getModel(){return model;}
	int getModelYear() {return modelYear;}
	double getSpeed() {return speed;}
	double getMaxSpeed(){return maxSpeed;}

	
	void setModelYear(int newModelYear){modelYear = newModelYear;}
	
	void activateHyperDrive();
	void accelerate();
	void brake();
	
	private:
	int modelYear;
	double speed;
	double maxSpeed;
	string model;
	
	
	
	
	
	
	
};

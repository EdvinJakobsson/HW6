#include "Spacecraft.h"

Spacecraft::Spacecraft(string model, int year) : modelType(model),modelYear(year){
	speed = 0;
	maxSpeed = 299792.458;
}

void Spacecraft::setSpeed(double newSpeed){
	if(newSpeed <=maxSpeed)
		speed = newSpeed;
	else{
		speed = maxSpeed;
		cout << "Speed request denied: New speed exceeds the spacecraft's maximum speed." << endl
		 << "Speed set to maximum speed: " << speed << " km/s" << endl;
	}
}




int main(){
	
	Spacecraft *sp = new Spacecraft("Destroyer", 2974);
		
	cout << sp->getModel() << ", " << sp->getModelYear() << endl;
	
	cout << sp->getSpeed() << endl;
	
	sp->setSpeed(4157777.4);
	
	cout << sp->getSpeed() << endl;

}

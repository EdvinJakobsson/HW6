#include "Spacecraft.h"

Spacecraft::Spacecraft(string modelType){
	model = modelType;
	maxSpeed = 299792.458;
}

Spacecraft::~Spacecraft(){
}


int main(){
	
	Spacecraft sp = Spacecraft("Destroyer");

	double a = 121.5223;
	
	cout << sp.getMaxSpeed() << endl;
		
	cout << a << endl;
	
}

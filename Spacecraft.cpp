#include "Spacecraft.h"


//constructor for Spacecraft
Spacecraft::Spacecraft(string model, int year) : modelType(model),modelYear(year){	//sets first argument to the model name, second argument to model year. These values are set on this line because they are constant in the header

	speed = 0;					//initial speed set to zero
	maxSpeed = 299792.458;		//initial maximum speed set to the speed of light. Units used is km/s
}


//function: set new speed
void Spacecraft::setSpeed(double newSpeed){
	
	if(newSpeed < 0)	 //check that new speed is positive
		cout << "New speed request of " << newSpeed << " km/s is denied: Only positive speeds allowed. Current speed is unchanged at: " << speed << " km/s" << endl;
	
	else if(newSpeed <= maxSpeed){	//check that new speed does not exceed maximum speed
		speed = newSpeed;
		cout << "Speed request granted. New speed is: " << speed << " km/s." << endl;
	}
	
	else{	//If new speed exceeds maximum speed for ship then the speed is instead set to maximum speed
		speed = maxSpeed; 
		cout << "New speed request of " << newSpeed << " km/s is denied: New speed exceeds the ships maximum speed. New speed set to maximum speed of: " << speed << " km/s" << endl;
	}
}


//function: set new max speed
void Spacecraft::setMaxSpeed(double newMaxSpeed){
	
	if(newMaxSpeed < 0) //check that new max speed is positive
		cout << "New maximum speed request denied: Only positive speeds allowed. Current maximum speed is unchanged at: " << maxSpeed << " km/s." << endl;
		
	else{
		maxSpeed = newMaxSpeed; // if positive, the new max speed is accepted
		cout << "New maximum speed request granted. New maximum speed is: " << maxSpeed << " km/s." << endl;
	}
}


//function: Activate the hyperdrive (Sets the speed to maximum speed)
void Spacecraft::activateHyperDrive(){
	
	if(speed == maxSpeed)	//check so that the ship is not already at maximum speed
	cout << "Hyperdrive request denied: Ship is already at maximum speed." << endl;
	
	else{	//Activates the hyperdrive, i.e. sets the speed to maximum speed
		speed = maxSpeed;
		cout << "Hyperdrive activated..." << endl;
		cout << "Hyperdrive complete. Maximum speed of: " << speed << " km/s reached." << endl;
	}
}

//function: Accelerate (Increases the speed by 10)
void Spacecraft::accelerate(){
	
	if(speed = maxSpeed)	//check so that speed is not already at maximum
		cout << "Acceleration request denied: Ship is already at maximum speed of: " << speed << " km/s." << endl;
	
	if(speed < maxSpeed-10){	//check if the new speed is less than maximum speed
	speed += 10;	//increase speed by 10
	cout << "Acceleration request granted. New speed is: " << speed << " km/s." << endl;
	}
	
	else{ 	//if the increase would mean a new speed above the maximum speed then maximum speed is set instead
		speed = maxSpeed;
		cout << "Acceleration request granted. Ship is now at maximum speed of: " << speed << " km/s." << endl;
	}
}


//function: Brake (Decreases the speed by 10)
void Spacecraft::brake(){
	
	if(speed == 0)	//check so that speed is not already at zero
	cout << "Brake request denied: Ship is already standing still." << endl;
	
	else if(speed >= 10){	//check if the new speed is more than zero
		speed -= 10;	//decrease speed by 10
		cout << "Brakes activated. New speed is: " << speed << " km/s." << endl;
	}
		
	else{	//if the decrease would mean a new speed below zero then the new speed is set to zero instead
		speed = 0;
		cout << "Brakes activated. Ship is now standing still." << endl;
	}
}

//main function in order to test the class
int main(){
	
	Spacecraft *sp = new Spacecraft("Destroyer", 2974);		//create new object of class Spacecraft
		
	cout << sp->getModel() << ", " << sp->getModelYear() << endl;	//print model name and model year
	
	cout << "Current maximum speed: " << sp->getMaxSpeed() << " km/s. " << endl;	//print max speed
		
	cout << "Current speed: " << sp->getSpeed() << " km/s. " << endl;				//print current speed
	
	sp->setMaxSpeed(400);		//set new max speed to 400
	
	sp->accelerate();
	
	sp->activateHyperDrive();
	
	sp->activateHyperDrive();
	
	sp->setSpeed(-777.4);		//try to set negative speed
	
	sp->setSpeed(500);			//try to set speed above max speed

	sp->setSpeed(sp->getMaxSpeed()-27.2);	//set new speed slighty below max speed

for(int i=0; i<4; i++)	//accelerate to and beyond max speed to see what happens
	sp->accelerate();
	
	sp->setSpeed(24.2);	//set new speed slightly above zero
	
	for(int i=0; i<4; ++i)	//brake until and past zero to see what happens
	sp->brake();
	
	cout << "Current speed: " << sp->getSpeed() << " km/s. " << endl;	//print current speed
}

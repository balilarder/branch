#ifndef CAR
#define CAR
#include <iostream>
#include <string>
using namespace std;
class Car
{
public:
	Car(string carname, int max_speed);
	
	void accelerate();
	void setCurrentSpeed(int s);
	void ShowSpeed();
	void explosion();
private:
	string color;
	string brand;
	int size;
	int max_speed;
	int current_speed;
};

#endif
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

const double UNIVERSAL_G = 6.67 * pow(10, -11);

int main(int argc, char *argv[])
{
	double radiusAppend = 0;
	
	if(argc == 2)
	{
		radiusAppend = atof(argv[1]);
		cout << radiusAppend << endl;
	}

	double radius = 6.371 * pow(10, 6) + radiusAppend * pow(10, 3);
	double mass = 5.972 * pow(10, 24);
	double fieldStrength = UNIVERSAL_G * mass / pow(radius, 2);
	cout << fieldStrength << endl;

	return 0;
}

#include <iostream>

using namespace std;

int main(int args, char *argv[])
{
	cout << "Hello World" << endl;		// prints Helllo World to console and moves to next line

	int sideLength;						// declare int sideLength
	cout << "Please input "				// promt user to input side length
		 << "side length: ";

	cin >> sideLength;					// read in data from user

	int squareArea = sideLength * sideLength;	// declare and initialize squareArea

	cout << "The area of the square with a side length of " << sideLength << " is " << squareArea << endl;
	return 0;


}
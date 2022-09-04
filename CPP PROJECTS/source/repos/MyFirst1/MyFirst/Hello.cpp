#include <iostream>

using namespace std;

int main(int args, char* argv[])
{
	cout << "Hello" << endl;
	cout << "World" << endl;

	int sideLength;

	cout << "Enter a side length: ";
	cin >> sideLength;

	int squareArea = sideLength * sideLength; // squares the area that you input

	cout << "Area of square = " << squareArea << endl;


	return 0;	// return code - 0 issues with this piece of code
}
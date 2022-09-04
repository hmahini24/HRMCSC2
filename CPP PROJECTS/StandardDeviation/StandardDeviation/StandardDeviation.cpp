#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	// declare fileName variable
	string fileName;

	// prompt for fileName
	cout << "Please input file name: ";
	cin >> fileName;

	// construct new input stream
	ifstream inputFile(fileName);		// .c_str() if not working

	// test to see if file read 
	if (!inputFile)
	{
		cout << "File could not be opened for reading!";
		return 1;
	}

	// declare/initialize variables and array
	int sum = 0;
	double average;
	int nextVal;
	double numVal = 0;
	int index = 0;
	double difference;
	double numeratorTotal = 0;
	double quotient = 0;
	double root = 0;
	int array[10];
	
	// prime while loop
	inputFile >> nextVal;

	// while reading inputFile, update array index to nextVal, caclulate sum and number of values
	while (inputFile)
	{
		array[index] = nextVal;
		index++;
		sum += nextVal;
		inputFile >> nextVal;
		numVal++;

	}

	// testing outputs
	cout << "The sum is: " << sum << endl;
	cout << "The number of values is: " << numVal << endl;

	// calculate average
	average = sum/numVal;

	// test output
	cout << "The average is: " << average << endl;

	// sum of differences of values and the averages, squared
	for (int i = 0; i < 4; i++)
	{
		difference = array[i] - average;
		difference *= difference;
		numeratorTotal += difference;
	}

	// calculate quotient of numerator divided by n-1
	quotient = numeratorTotal / (numVal - 1);
	
	// square root quotient to find std dev
	root = sqrt(quotient);

	// output standard deviation of inputFile
	cout << "The standard deviation: " << root;

	return 0;
}
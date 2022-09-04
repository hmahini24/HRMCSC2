#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream inputFile("data.txt");								// constructor for new inputFile object, type ifstream

	if (!inputFile)
	{
		cout << "File could not be opened for reading!";
		return 1;												// return 1 to signify there was an error, leave current function call
	}

	double sum = 0;
	double nextVal;
	double average;
	unsigned int numValues = 0;

	inputFile >> nextVal;										
	while (inputFile)
	{
		sum += nextVal;										
		inputFile >> nextVal;
		numValues++;
	}

	average = sum / numValues;

	cout << "The average of all things is: " << average << endl;						// print to console the nextVal read from inputFile

	return 0;
}
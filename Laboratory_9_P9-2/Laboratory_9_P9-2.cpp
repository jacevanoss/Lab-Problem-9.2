/* Date: 10/31/2024
* Name: Jace Van Oss
* File: Laboratory_9_P9-2.cpp
* 
* Description: program that tests functions for an array of 6 elements
*/

#include <iostream>

using namespace std;

bool isSortedIncreasing(int array[], int size);

int main() {

	const int arraySize = 6;
	int values[arraySize];
	for (int i = 0; i < arraySize; i++) {
		cout << "Enter integer #" << i << ": ";
		cin >> values[i];
	}
	if (isSortedIncreasing(values, arraySize)) {
		cout << "The data are increasing." << endl;
	}
	else {
		cout << "The data are not increasing." << endl;
	}



	return 0;
}
bool isSortedIncreasing(int array[], int size) {
	for (int i = 1; i < size; i++) {
		if (array[i] < array[i - 1]) {
			return false;
		}
		else {
			return true;
		}
	}
}
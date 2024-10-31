/* Date: 10/31/2024
* Name: Jace Van Oss
* File: Laboratory_9_P9-2.cpp
* 
* Description: program that tests functions for an array of 6 elements
*/

#include <iostream>

using namespace std;

bool isSortedIncreasing(int array[], int size);
bool isSortedDecreasing(int array[], int size);
bool hasAdjecentDuplicates(int array[], int size);
bool hasDuplicates(int array[], int size);

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

	if (isSortedDecreasing(values, arraySize)) {
		cout << "The data are decreasing." << endl;
	}
	else {
		cout << "The data are not decreasing." << endl;
	}

	if (hasAdjecentDuplicates(values, arraySize)) {
		cout << "The data has adjacent duplicates." << endl;
	}
	else {
		cout << "The data does not have adjacent duplicates." << endl;
	}


	return 0;
}
bool isSortedIncreasing(int array[], int size) {
	for (int i = 1; i < size; i++) {
		if (array[i] < array[i - 1]) {
			return false;
		}
	}
	return true;
}
bool isSortedDecreasing(int array[], int size) {
	for (int i = 1; i < size; i++) {
		if (array[i] > array[i - 1]) {
			return false;
		}
	}
	return true;
}
bool hasAdjecentDuplicates(int array[], int size) {
	for (int i = 1; i < size; i++) {
		if (array[i] == array[i - 1]) {
			return true;
		}
	}
	return false;
}
bool hasDuplicates(int array[], int size) {

}
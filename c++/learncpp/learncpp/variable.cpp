#include <iostream>
#include "function.h"
using namespace std;

int a = 2;
int b = 3;
int c;

void variableTest() {

	c = a * b;
	cout << c << endl;

	int x = 10;
	int y = 18;
	c = x * y;
	cout << c << endl;
	return;
}

void initializationTest() {

	int h; // uninitialized variable
	h = 10;
	cout << h << endl;

	int i = 5;	// copy initialized
	cout << i << endl;

	int j(6);	// direct initialized
	cout << j << endl;

	int k{ 7 }; // direct list initialized
	cout << k << endl;

	int l{};	// default initialized(empty braces)
	cout << l << endl;

	return;
}
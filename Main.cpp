// Time.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdexcept>
#include "Time.h"

using namespace std;

void displayTime(const string& message, const Time& time) {
	cout << message << "\nUniversal time: " << time.toUniversalString() << "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main()
{
	Time t;

	displayTime("Initial time:", t);
	t.setTime(15, 02, 34);
	displayTime("After setTime:", t);
	try {
		t.setTime(99, 99, 99);
	}
	catch (invalid_argument& e) {
		cout << "Exception: " << e.what() << "\n\n";
	}

	displayTime("After attemping to set an invalid time:", t);
}


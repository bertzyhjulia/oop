#pragma once
#include "Human.h"
#include <iostream>
#include <string>
using namespace std;

class Employee  {

public:
	int monthSalary;
	void makeReport(int number, int daysCount);
	void typeOfWork(string typeOfWork);
	virtual void getSalary(int daysOfWork) = 0; 
};

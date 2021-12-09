#pragma once
#include "Employee.h"
#include "Human.h"
#include <string>
class Deliver : Employee, Human {
public:
	Deliver(int passportNumber, int identificationNumber, char sex, string typeOfWork1) {
		identification(passportNumber, identificationNumber);
		
		typeOfWork(typeOfWork1);
	}
	~Deliver();
	using Human::identification;
	void salary(int salary);
	void getSalary(int daysOfWork) override
	{
		monthSalary = daysOfWork * 30;
	}
};

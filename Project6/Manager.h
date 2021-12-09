#pragma once
#include "Employee.h"
#include "Human.h"
#include "Salary.h"
#include <string>
class Manager : Employee, public Human{
public:
	Manager() {};
	Manager(int passportNumber, int identificationNumber, char sex, string typeOfWork1) {
		identification(passportNumber, identificationNumber);
		typeOfWork(typeOfWork1);
	}
	~Manager();
	using Human::identification;
	void salary(int salary);
	void getSalary(int daysOfWork) override
	{
		monthSalary = daysOfWork * 50;
	}
};

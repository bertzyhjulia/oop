#pragma once
#include <string>
class Human {
public:
	Human() {};
	virtual ~Human() {};
	void identification(int passportNumber, int identificationNumber);
	void identification(char sex);
};

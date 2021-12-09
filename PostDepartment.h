#pragma once
#include <string>
#include "Company.h"
using namespace std;
class Department: Company {
	int department;
	string street;
	string city;
public:
	int price;
	int discount;
	int cityIndex;
	Department();
	Department(int department, string street, string city);
	Department(const Department& dep);
	~Department();
	void Location(string city, string street, int department);
	void Location(string city, int cityIndex, string street, int department);
	Department readFromFile();
	void writeToFile();
	int Price(int price);
	int Price(int price, int discount);
	Department depart(Department depart);
	using Company::defineNumberOfDepartment;
	using Company::setPrice;

};

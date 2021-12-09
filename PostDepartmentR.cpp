#include "Customer.h"
#include "Parce.h"
#include "PostDepartment.h"
#include <iostream>
#include <fstream>
using namespace std;

Department::Department() {
	this->department = 0;
	this->street = "None";
	this->city = "None";
}

Department::Department(int department, string street, string city) {
	this->department = department;
	this->street = street;
	this->city = city;
}

Department::Department(const Department& dep) {
	this->department = dep.department;
	this->street = dep.street;
	this->city = dep.city;
	this->price = dep.price;
	this->discount = dep.discount;
	this->cityIndex = dep.cityIndex;
}

Department::~Department() {

}

void Department::Location(string city, string street, int department) {
	this->city = city;
	this->street = street;
	this->department = department;
}
void Department::Location(string city, int cityIndex, string street, int department) {
	this->city = city;
	this->cityIndex = cityIndex;
	this->street = street;
	this->department = department;
}
Department Department::readFromFile() {
	ifstream file;
	file.open("department.txt");
	Department department;

	file >> department.department;
	file >> department.city;
	file >> department.cityIndex;
	file >> department.street;
	file >> department.city;
	file >> department.price;
	file >> department.discount;

	file.close();
	return department;
}
void Department::writeToFile() {
	ofstream file;
	file.open("department.txt");
	file << department;
	file << city;
	file << cityIndex;
	file << street;
	file << price;
	file << discount;
	file.close();
}
int Department::Price(int price) {
	this->price = price;
	cout << "Price = " << this->price << endl;
	return price;
}
int Department::Price(int price, int discount) {
	this->price = price -  discount;
	cout << "Price with discount = " << this->price<<endl;
	return this->price;
}
Department Department::depart(Department depart) {
	Department dep;
	dep.Location("Khmelnitskyi", "Kurchatova", 25);
	cout<< "Location of Department:"<<endl<<"City: "<<dep.city<<"   Street: "<<dep.street<<"   Number of department is "<<dep.department<<endl;
		return dep;
}

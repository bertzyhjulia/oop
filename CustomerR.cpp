#include "Customer.h"
//#include "Parce.h"
#include <iostream>
#include <fstream>
using namespace std;


void Customer::writeToFile() {
	ofstream file;
	file.open("customer.txt");
	file << name << lastName << tel;
	file.close();
}
Customer Customer::readFromFile() {
	ifstream file;
	file.open("customer.txt");
	Customer customer;

	file >> customer.name;
	file >> customer.lastName;
	file >> customer.age;
	file >> customer.adress;
	file >> customer.city;
	file >> customer.tel;
	file >> customer.passportNumber;
	file >> customer.index;

	file.close();
	return customer;
}

void Customer::authorisation(string name, string lastName, int age) {

	//cout << "Autorization";
	/*<< endl << "Enter your name : ";
	cin >> name;
	cout << endl << "Enter your lastname: ";
	cin >> lastName;
	cout << endl << "Enter your telephone: ";
	cin >> tel;*/
	this->name = name;
	
	this->lastName = lastName;
	this->age = age;
	//writeToFile();
}
void Customer::authorisation(string adress, int passportNumber) {
	/*cout << endl << "Enter your adress: ";
	cin >> adress;
	cout << endl << "passportNumber: ";
	cin >> passportNumber;*/
	this->adress = adress;
	this->passportNumber = passportNumber;
}

void Customer::send(string city, int index)
{
	this->city = city;
	this->index = index;

}
void Customer::send(string city, int index, int tel) {
	this->city = city;
	this->index = index;
	this->tel = tel;
}


void Customer::mustToPay(int price) {
	this->price = price;
	cout <<  "Customer must to pay = " << this->price << endl;
}
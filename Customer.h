#pragma once
#include <string>
#include <iostream>
#include "Human.h"
using namespace std;
class Customer :Human{
private:
	string name;
	string lastName;
	int age;
	string adress;
	int passportNumber;
public:
	string city;
	int index;
	int tel;
	int price;
	void authorisation(string name, string lastName, int age);
	void authorisation(string adress, int passportNumber);
	void writeToFile();
	static Customer readFromFile();
	void send(string city, int index);
	void send(string city, int index, int tel);
	void mustToPay(int price);
	void deleteCustomer(int price) {
		if (price < 30) {
			static int countDeletedCustomers = 0;
			countDeletedCustomers++;
			cout << endl << "deleted " << countDeletedCustomers << endl;
		}
		
	}
};
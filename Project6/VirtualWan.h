#pragma once
#include<iostream>
#include<string>
#include "VirtualPostman.h"
using namespace std;
class Wan : virtual Postman {
	int priceOfGass;
	int km;
public:
	Wan() {};
	virtual ~Wan() {};
	void deliveryPrice(int priceOfGass, int km) throw() {
		this->km = km;
		this->priceOfGass = priceOfGass;
		int price = this->km * this->priceOfGass;
		count << "Gass price is " << price << endl;
	}
	void wherePostman(void) throw() {
		count << "Postman is vay" << endl;
	}
};

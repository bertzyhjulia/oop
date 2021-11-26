#pragma once
#include <string>
#include <iostream>
using namespace std;
class Postman {
	int km;
	int priceFrom1km;
public:
	void deliveryPrice(int km, int priceFrom1km) {
		this->km = km;
		this->priceFrom1km = priceFrom1km;
		int price = this->km * this->priceFrom1km;
		count << "Delivery price is " << price<<endl;
	}

};

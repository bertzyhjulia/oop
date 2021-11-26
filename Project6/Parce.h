#pragma once
#include <string>
#include <iostream>
#include "Customer.h"
using namespace std;
class Post {
private:
	string dateOfDeparture;
	string dateOfArrival;
	int weight;
	int height;
	int orderNumber;
public:
	
	void count() throw() {
		static int countOfPosts[10];
		++countOfPosts[10];
		cout << "Count of posts " << countOfPosts << endl;
	}
	Post() {};
	Post(int money) {};
	int price;
	int width;
	int length;
	Customer customer;
	void writeToFile() throw();
	static Post readFromFile();
	void sendPost(int height, int width, int length, int weight);
	void sendPost(Customer customer);
	int setPrice(int price);
	int setPrice(int height, int width, int length);
	void setTime(string dateOfDeparture, string dateOfArrival);
	void show();
	int* RandomDunamicMemory();
	int getNumber();
};
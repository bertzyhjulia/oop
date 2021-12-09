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
	int box;
	int leter;
	int packet;
	int postsIndex[10];
public:

	Post() { box = leter = packet = 0; };
	Post(int c, int d, int f) { box = c; leter = d; packet = f; };
	Post operator+(Post obj); 
	Post operator-(Post obj);
	Post operator*(Post obj);
	Post operator=(Post obj); 
	Post operator+=(Post obj); 
	Post operator-=(Post obj); 
	int& operator[] (const int index);
	template <typename T>
	const T& maxConst(const T& a, const T& b, const T& c)
	{
		if ((a > b) && (a > c))
			return a;
		else if ((b > a) && (b > c))
			return b;
		else return c;
	}
	void Show(int s);
	 void count() throw() { 
		static int countOfPosts[10];
		++countOfPosts[10];
		cout << "Count of posts " << countOfPosts << endl;
	}
	
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
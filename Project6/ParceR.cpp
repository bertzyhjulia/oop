#include "Customer.h"
#include <iostream>
#include <fstream>
#include <Windows.h>
#include "Parce.h"
using namespace std;
void Post::writeToFile() {
	ofstream file;
	file.open("post.txt");
	file << orderNumber << endl;
	file << width << endl;
	file << height << endl;
	file << length << endl;
	file << weight << endl;
	file << dateOfArrival << endl;
	file << dateOfDeparture << endl;
	file << price << endl;
	file.close();
}
Post Post::readFromFile() {
	ifstream file;
	file.open("post.txt");
	Post post;

	file >> post.orderNumber;
	file >> post.width;
	file >> post.height;
	file >> post.length;
	file >> post.weight;
	file >> post.dateOfArrival;
	file >> post.dateOfDeparture;
	file >> post.price;
	file.close();
	return post;
}
void Post::sendPost(int height, int width, int length, int weight) {
	this->height = height;
	this->width = width;
	this->length = length;
	this->weight = weight;
}
void Post::sendPost(Customer customer) {
	this->customer = customer;
}
int Post::setPrice(int price) {
	this->price = price;
	return this->price;
}

int Post::setPrice(int height, int width, int length) {
	this->price = height * 1 + width * 2 + length * 3;
	return price;
}
void Post::show() {
	cout <<"About post:"<<endl<< "   width = " << width << endl;
	cout << "   height = " << height << endl;
	cout << "   length = " << length << endl;
	cout << "   weight = " << weight << endl;
	cout << "   dateOfArrival = " << dateOfArrival << endl;
	cout << "   dateOfDeparture = " << dateOfDeparture << endl;
	cout << "   price = " << price << endl;
}
void Post::setTime(string dateOfDeparture, string dateOfArrival) {
	this->dateOfDeparture = dateOfDeparture;
	this->dateOfArrival = dateOfArrival;
}
int* Post::RandomDunamicMemory()
{
	int* arr = new int[5];
	return arr;
}
int Post::getNumber()
{
	this->orderNumber = rand() % 10;
	return this->orderNumber;
}

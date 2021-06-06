#pragma once
#include <iostream>
using namespace std;

class Books {
public:
	Books(char* name, char* author, double price);
	void set_name(char*);
	char* get_name();
	void set_author(char*);
	char* get_author();
	void set_price(double);
	double get_price();
private:
	char* name;
	char* author;
	double price;
};
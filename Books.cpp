#include <iostream>
#include "Books.h"
using namespace std;

Books::Books(char* name, char* author, double price)
{
	Books::set_name(name);
	Books::set_author(author);
	Books::set_price(price);
}

void Books::set_name(char*)
{
}

char* Books::get_name()
{
	return Books::name;
}

void Books::set_author(char*)
{
}

char* Books::get_author()
{
	return Books::author;
}

void Books::set_price(double)
{
}


double Books::get_price()
{
	return Books::price;
}
#include <iostream>
#include <istream>
#include "Books.h"
using namespace std;

int main()
{
	char* name{};
	char* author{};
	double price{};
	cout << "Название книги: ";
	cin >> name;
	cout << "Автор книги: ";
	cin >> author;
	cout << "Стоимость книги: ";
	cin >> price;

	Books* book = new Books(name, author, price);

	book->set_name(name);
	book->set_author(author);
	book->set_price(price);
		cout << "\nКонструктор по умолчанию работает" <<
			book->get_name() <<
			book->get_author() <<
			book->get_price() << endl;
}
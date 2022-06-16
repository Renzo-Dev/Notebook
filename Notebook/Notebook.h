#pragma once
#include <iostream>
#include <conio.h>
#include <boost/container/string.hpp>
#include <boost/container/vector.hpp>
#include <boost/date_time/local_time/local_date_time.hpp>

using boost::container::string;
using std::cout;

enum { ENTER = 13, ESC = 27, UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77 }; // to identify the keys

class Account
{public:

	string phone_number;
	string name;
	string surname;
	string patronymic;
	string email;

	int day = 0;
	int month = 0;
	int year = 0;
};


class Notebook
{
	int max_size_book_ = 51;

	boost::container::vector<Account> accounts;

	void add(); // Добавить в записную книжку

	void remove(); // Удалить из записной книжки

	void edit(); // Изменить в записной книжке

	void show_data(); // Показать данные

	void find(); // Найти по

public:

	void start(); // Главное Меню

};

#include "Notebook.h"


void Notebook::start()
{

	char choose = ' ';
	char move = '1';
	int size = 0;

	Account st;
	st.name = "Дан";
	st.surname = "Кошевой";
	st.patronymic = "Николаевич";
	st.email = "dankoshevoy@gmail.com";
	st.phone_number = "0982936605";

	accounts.push_back(st);

	if (accounts.size()<max_size_book_)
	{
		size = accounts.size();
	}
	else
	{
		size = max_size_book_;
	}

	while (true)
	{
		system("cls");
		cout << "\t\t\t-----------------------------------------------------------\n";
		cout << "\t\t\t|    ФИО    |    Номер Телефона    |   Дата  добавления   |\n";
		cout << "\t\t\t-----------------------------------------------------------\n";
		cout << "\t\t\t|                                                         |\n";
		if (size == 0)
		{
			cout << "\t\t\t|                      Блокнот Пуст                       |\n";
		}
		for (int i = 0; i < size; i++)
		{
			cout << "\t\t\t| " << accounts[i].name << " " << accounts[i].surname << " "
				<< accounts[i].patronymic << " " << accounts[i].phone_number
				<< " " << accounts[i].day << " " << accounts[i].month << " " << accounts[i].year << std::endl;
		}

		switch (move)
		{
		case '1':
		{
			cout << "\t\t\t-----------------------------------------------------------\n";
			cout << "\t\t\t\t     | \033[104mДобавить\033[0m \033[97m|" << " Удалить " << "| Изменить |\n";
			cout << "\t\t\t\t     ---------------------------------\n";
		}break;
		case '2':
		{
			cout << "\t\t\t-----------------------------------------------------------\n";
			cout << "\t\t\t\t     | Добавить |" << " \033[104mУдалить\033[0m \033[97m" << "| Изменить |\n";
			cout << "\t\t\t\t     ---------------------------------\n";
		}break;
		case '3':
		{
			cout << "\t\t\t-----------------------------------------------------------\n";
			cout << "\t\t\t\t     | Добавить |" << " Удалить " << "| \033[104mИзменить\033[0m \033[97m|\n";
			cout << "\t\t\t\t     ---------------------------------\n";
		}break;
		default:;
		}
		choose = _getch();
		if (static_cast<int>(choose) == ESC)
		{
			return;
		}
		if(static_cast<int>(choose)==ENTER)
		{
			if(move == '1')
			{
				add();
			}
			if(move == '2')
			{
				remove();
			}
			if(move == '3')
			{
				edit();
			}
		}
		if (static_cast<int>(choose) == RIGHT)
		{
			if(move == '1')
			{
				move = '2';
			}
			else if(move == '2')
			{
				move = '3';
			}
		}
		if(static_cast<int>(choose) == LEFT)
		{
			if(move == '3')
			{
				move = '2';
			}
			else if(move == '2')
			{
				move = '1';
			}
		}
	}

}

void Notebook::add()
{
}

void Notebook::remove()
{
}

void Notebook::edit()
{
}
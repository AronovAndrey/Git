#include<iostream>
#include<string>
using namespace std;
struct books {
	string name;
	string aftor;
	string print;
	string janr;
	void output() {
		cout << "Название: " << name << endl << "Автор: " << aftor << endl << "Издатель: " << print << endl
			<< "Жанр: " << janr << "\n\n\n";
	}
	
	
}; books a[10];

int main() {
	setlocale(LC_ALL, "ru");
	a[0] = { "The Catcher in the Rye", "Salinger", "Eksmo", "Roman" };
	a[1] = { "It", "King", "AST", "Mystical foreign fiction" };
	a[2] = { "Ender", "Card", "Book", "Novel" };
	a[3] = { "Battle Royale", "Takami", "Swallowtail", "thriller" };
	a[4] = { "Battlefield Earth", "Hubbard", "Eksmo", "Fiction" };
	a[5] = { "Food Department", "Alexey Ivanov", "Elena Shubina's Editorial Office", "Modern Russian Prose" };
	a[6] = { "Night Watch", "Sergey Lukyanenko", "AST", "Fiction" };
	a[7] = { "Bird box", "Mulerman", "AST", "Fiction" };
	a[8] = { "American Gods", "Neil Gaiman", "AST", "Fiction" };
	a[9] = { "Fight Club", "Chuck Palahniuk", "AST", "Modern Foreign Prose" };
	string f;
	char b = '0';
	do
	{
		cout << "1 - Редактировать книгу\n"
			"2 - Печать всех книг\n"
			"3 - Поиск книг по автору\n"
			"4 - Поиск книги по названию\n"
			"5 - Сортировка массива по названию книг\n"
			"6 - Сортировка массива по автору\n"
			"7 - Сортировка массива по издательству\n"
			"0 - Выход\n";
		cin >> b;
		system("cls");
		switch (b)
		{
		case '1':
			for (int i = 0; i < 10; i++)
			{
				cout << i + 1 << " Книга" << endl;
				a[i].output();
			}
			cout << "Ведите номер книги который ходите редактировать: " << endl;
			int c;
			cin >> c;
			cout << "Введите название книги" << endl;
			cin >> a[c - 1].name;
			cout << "Введите автора" << endl;
			cin >> a[c - 1].aftor;
			cout << "Введите издательство" << endl;
			cin >> a[c - 1].print;
			cout << "Введите жанр" << endl;
			cin >> a[c - 1].janr;
			cout << "Название: " << a[c-1].name << endl << "Автор: " << a[c - 1].aftor << endl << "Издатель: " << a[c - 1].print << endl
				<< "Жанр: " << a[c - 1].janr << "\n\n\n";
			break;
		case '2':
			for (int i = 0; i < 10; i++)
			{
				cout << i + 1 << " Книга" << endl;
				a[i].output();
			}
			break;
		case '3':
			cout << "Введине название автора\t";
			cin.ignore(32765, '\n');
			getline(cin, f);
			for (int i = 0; i < 10; i++)
				if (f == a[i].aftor)
					cout << "Название: " << a[i].name << endl << "Автор: " << a[i].aftor << endl << "Издатель: " << a[i].print << endl
					<< "Жанр: " << a[i].janr << "\n\n\n";
			break;
		case '4':
			cout << "Введине название книги\t";
			cin.ignore(32765, '\n');
			getline(cin, f);
			for (int i = 0; i < 10; i++)
				if (f == a[i].name)
					cout << "Название: " << a[i].name << endl << "Автор: " << a[i].aftor << endl << "Издатель: " << a[i].print << endl
					<< "Жанр: " << a[i].janr << "\n\n\n";
			break;
		case '5':
			for (int i = 0; i < 9; i++)
				for (int j = i + 1; j < 10; j++)
					if (a[i].name > a[j].name)
						swap(a[i].name, a[j].name);
			
			for (int i = 0; i < 10; i++)
			{
				cout << i + 1 << " Книга" << endl;
				a[i].output();
			}
			break;
		case '6':
			for (int i = 0; i < 9; i++)
				for (int j = i + 1; j < 10; j++)
					if (a[i].aftor > a[j].aftor)
						swap(a[i].aftor, a[j].aftor);

			for (int i = 0; i < 10; i++)
			{
				cout << i + 1 << " Книга" << endl;
				a[i].output();
			}
			break;
		case '7':
			for (int i = 0; i < 9; i++)
				for (int j = i + 1; j < 10; j++)
					if (a[i].print > a[j].print)
						swap(a[i].print, a[j].print);

			for (int i = 0; i < 10; i++)
			{
				cout << i + 1 << " Книга" << endl;
				a[i].output();
			}
			break;
		
		default:
			cout << "Ошибка ввода!!\n";
			break;
		}
		cout << "Повторить? 0 - нет, 1 - да\n";
		cin >> b;
	} while (b != '0');

}

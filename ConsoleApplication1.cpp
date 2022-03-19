//Task1

//#include <iostream>
//using namespace std;
//#define min(a, b) (a>b ? cout<<b : cout<<a)
//#define max(a, b) (a<b ? cout<<b : cout<<a)
//#define Pow(a) (cout<<pow(a,10))
//#define SQRT(a) (cout<<a*a)
//#define Parity(a) (a%2==1 ? cout<<"The number is not odd" : cout<<"The number is even")
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    min(1, 2); cout << endl;
//    max( 1, 2); cout << endl;
//    Pow(2); cout << endl;
//    SQRT(3); cout << endl;
//    Parity(10);
//}

//Task2

#include <iostream>
#include <string>
using namespace std;

struct Man
{
	string Surname;
	string Name;
	int Age;
	int Birthday;
	int MonthOfBirth;
	int YearOfBirth;
};
void input(Man array[])
{
	array[0] = { "Tishenko", "Kostya", 27, 11, 5, 1995 };
	array[1] = { "Myasnikov", "Danil", 26, 1, 3, 1996 };
	array[2] = { "Aronov", "Andrey", 30, 25, 11, 1991 };
	
}
void output(Man array[], const int size)
{
	int k = 1;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i + 1; j < size; j++)
			if (array[i].Surname > array[j].Surname)
				swap(array[i], array[j]);
	}
	for (int i = 0; i <size; i++)
	{
		cout << k << " people\n";
		cout << array[i].Surname << " ";
		cout << array[i].Name << " ";
		cout << array[i].Age << " ";
		cout << array[i].Birthday << "." << array[i].MonthOfBirth << "." << array[i].YearOfBirth << endl;
		k++;
	}
}
void birth(Man array[], const int size)
{
	cout << "What is the month number now? ";
	int a,m = 0;
	cin >> a;
	for (int i = 0; i < size; i++)
	{
		if (array[i].MonthOfBirth == a)
		{
			cout << "In this month name days at: ";
			cout << array[i].Surname << " ";
			cout << array[i].Name << " ";
			cout << array[i].Birthday << "." << array[i].MonthOfBirth << "." << array[i].YearOfBirth << endl;
			m++;
		}
		}
	if (m == 0)
		cout << "In this month has no birthday people.\n";
}
void search(Man array[], const int size)
{
	cout << "What Surname you want find? ";
	string a, m;
	int k = 0;
	cin >> a;
	cout << "What Name you want find? ";
	cin >> m;
	for (int i = 0; i < size; i++)
	{
		if ((array[i].Surname == a) && (array[i].Name == m))
		{
			cout << array[i].Surname << " ";
			cout << array[i].Name << " ";
			cout << array[i].Birthday << "." << array[i].MonthOfBirth << "." << array[i].YearOfBirth << endl;
			k++;
			
		}
	}
	if (k == 0)
		cout << "Not people found\n";
	
}
void editing(Man array[],int size)
{
	
	char choice = '0';
	cout << "Whom you want editing?\n"
		"1 - Aronov\n"
		"2 - Myasnikov\n"
		"3 - Tishenko\n";
	cin >> choice;
	switch (choice)
	{
	case '1':
		cout << "Input Surname ";
		cin.ignore(32765, '\n');
		getline(cin, array[0].Surname);
		cout << "Input Name ";
		getline(cin, array[0].Name);
		cout << "Input Age ";
		cin >> array[0].Age;
		cout << "Input Birthday ";
		cin >> array[0].Birthday;
		cout << "Input MonthOfBirth ";
		cin >> array[0].MonthOfBirth;
		cout << "Input YearOfBirth";
		cin >> array[0].YearOfBirth;
		break;
	case '2':
		cout << "Input Surname ";
		cin.ignore(32765, '\n');
		getline(cin, array[1].Surname);
		cout << "Input Name ";
		getline(cin, array[1].Name);
		cout << "Input Age ";
		cin >> array[1].Age;
		cout << "Input Birthday ";
		cin >> array[1].Birthday;
		cout << "Input MonthOfBirth ";
		cin >> array[1].MonthOfBirth;
		cout << "Input YearOfBirth";
		cin >> array[1].YearOfBirth;
		break;
	case '3':
		cout << "Input Surname ";
		cin.ignore(32765, '\n');
		getline(cin, array[2].Surname);
		cout << "Input Name ";
		getline(cin, array[2].Name);
		cout << "Input Age ";
		cin >> array[2].Age;
		cout << "Input Birthday ";
		cin >> array[2].Birthday;
		cout << "Input MonthOfBirth ";
		cin >> array[2].MonthOfBirth;
		cout << "Input YearOfBirth";
		cin >> array[2].YearOfBirth;
		break;
	default:
		break;
	}
	system("cls");
	int k = 1;
	for (int i = 0; i < size; i++)
	{
		cout << k << " people\n";
		cout << array[i].Surname << " ";
		cout << array[i].Name << " ";
		cout << array[i].Age << " ";
		cout << array[i].Birthday << "." << array[i].MonthOfBirth << "." << array[i].YearOfBirth << endl;
		k++;
	}
}
void Add(Man array[], int size)
{
	char choice = '0';
	cout << "What you want to do?\n"
		"1 - Add people\n"
		"2 - Delete people\n";
	cin >> choice;
	switch (choice)
	{
	case '1':
		size += 1;
		break;
	case '2':
		size -=1;
		break;
	default:
		break;
	}
	Man* array2 = new Man[size];
	if (choice == '1')
	{
		for (int i = 0; i < size - 1; i++)
		{
			array2[i].Surname = array[i].Surname;
			array2[i].Name = array[i].Name;
			array2[i].Age = array[i].Age;
			array2[i].Birthday = array[i].Birthday;
			array2[i].MonthOfBirth = array[i].MonthOfBirth;
			array2[i].YearOfBirth = array[i].YearOfBirth;
		}
		cout << "Input Surname new people ";
		cin.ignore(32765, '\n');
		getline(cin, array2[size - 1].Surname);
		cout << "Input Name new people ";
		getline(cin, array2[size - 1].Name);
		cout << "Input Age new people ";
		cin >> array2[size - 1].Age;
		cout << "Input Birthday new people ";
		cin >> array2[size - 1].Birthday;
		cout << "Input MonthOfBirth new people ";
		cin >> array2[size - 1].MonthOfBirth;
		cout << "Input YearOfBirth new people ";
		cin >> array2[size - 1].YearOfBirth;
		system("cls");
		int k = 1;
		for (int i = 0; i < size; i++)
		{
			cout << k << " people\n";
			cout << array2[i].Surname << " ";
			cout << array2[i].Name << " ";
			cout << array2[i].Age << " ";
			cout << array2[i].Birthday << "." << array2[i].MonthOfBirth << "." << array2[i].YearOfBirth << endl;
			k++;
		}
	}
	else if (choice == '2')
	{
		cout << "Whom you want to delete?\n";
		cout << "1 - " << array[0].Surname << endl;
		cout << "2 - " << array[1].Surname << endl;
		cout << "3 - " << array[2].Surname << endl;
		int a;
		cin >> a;
			swap(array[a-1].Surname, array[2].Surname);
			swap(array[a - 1].Name, array[2].Name);
			swap(array[a - 1].Age, array[2].Age);
			swap(array[a - 1].Birthday, array[2].Birthday);
			swap(array[a - 1].MonthOfBirth, array[2].MonthOfBirth);
			swap(array[a - 1].YearOfBirth, array[2].YearOfBirth);


		for (int i = 0; i < size; i++)
		{
			array2[i].Surname = array[i].Surname;
			array2[i].Name = array[i].Name;
			array2[i].Age = array[i].Age;
			array2[i].Birthday = array[i].Birthday;
			array2[i].MonthOfBirth = array[i].MonthOfBirth;
			array2[i].YearOfBirth = array[i].YearOfBirth;
		}
		system("cls");
		int k = 1;
		for (int i = 0; i < size; i++)
		{
			cout << k << " people\n";
			cout << array2[i].Surname << " ";
			cout << array2[i].Name << " ";
			cout << array2[i].Age << " ";
			cout << array2[i].Birthday << "." << array2[i].MonthOfBirth << "." << array2[i].YearOfBirth << endl;
			k++;
		}
	}
	delete[] array2;
}

int main()
{
	setlocale(LC_ALL, "ru");
	int size = 3;
	Man* array = new Man[size];
	input(array);
	output(array, size);
	birth(array,size);
	search(array,size);
	editing(array,size);
	Add(array,size);

	
	delete[] array;
}
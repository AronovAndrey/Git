#include <iostream>
#include <string>
using namespace std;

void input(int** array, const int rows, const int column)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < column; j++)
		{
			array[i][j] = rand() % 100;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

}

//Task1

//void in(int** array, const int rows, int column)
//{
//	cout << "Введите под каким номером вставить столбец: " << endl;
//	int a;
//	cin >> a;
//	if(a && (a<column+2)){
//	column += 1;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = column - 1; j > a - 1; j--)
//		{
//			swap(array[i][j - 1], array[i][j]);
//		}
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < column; j++)
//		{
//			if (j == a - 1)
//				array[i][j] = 0;
//		}
//
//	}
//}
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < column; j++)
//		{
//			cout << array[i][j] << " ";
//		}
//		cout << endl;
//	}
//	/*for (int i = 0; i < rows; i++) //Не работает удаление из-за того что я добавил один столбец, есть ли решение кроме создания второго массива?
//		{
//			delete[] array[i];
//		}
//		delete[] array;*/
//	
//}

//Task2

//void _delete(int** array, int rows, int column)
//{
//	cout << "Введите номер удаляемого столбца: " << endl;
//	int a;
//	cin >> a;
//	a-=1;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = a; j < column-1; j++)
//		{
//			
//			swap(array[i][j], array[i][j + 1]);
//		}
//	}
//	//delete[] array[column - 1];//Есть ли способ удалить только столбец?
//	column -= 1;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < column; j++)
//		{
//			cout << array[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < rows; i++) 
//		{
//			delete[] array[i];
//		}
//		delete[] array;
//}

//Task3
void shift(int** array, const int row, const int column)
{
    
    int permutation;
    char choice = '0';
    do
    {
        cout << "Выберите в какое направление хотите сделать сдвиг:\n"
            "1 - Вверх\n"
            "2 - Вниз\n"
            "3 - Влево\n"
            "4 - Вправо\n"
            "0 - Выход\n";
        cin >> choice;
        switch (choice)
        {
        case '1':
            cout << "Сколько раз сделать сдвиг?\n";            
            for (cin >> permutation; permutation != 0; permutation--)
            {
                for (int i = 0; i < row - 1; i++)
                {
                    for (int j = 0; j < column; j++)
                    {
                        if (i < 0)
                        {
                            i = row;
                            swap(array[i][j], array[i - 1][j]);
                        }
                        if (i == 0)
                            swap(array[i][j], array[row - 1][j]);
                        else
                            swap(array[i][j], array[i - 1][j]);
                    }
                }
            }
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    cout << array[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case '2':
            cout << "Сколько раз сделать сдвиг?\n";        
            for (cin >> permutation; permutation != 0; permutation--)
            {
                for (int i = row - 1; i != 0; i--)
                {
                    for (int j = 0; j < column; j++)
                    {
                        if (i < 0)
                        {
                            i = row;
                            swap(array[i][j], array[i - 1][j]);
                        }
                        if (i == 0)
                            swap(array[i][j], array[row - 1][j]);
                        else
                            swap(array[i][j], array[i - 1][j]);
                    }
                }
            }
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    cout << array[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case '3':
            cout << "Сколько раз сделать сдвиг?\n";            
            for (cin >> permutation; permutation != 0; permutation--)
            {
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < column - 1; j++)
                    {
                        swap(array[i][j], array[i][j + 1]);

                    }
                }

            }
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    cout << array[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case '4':
            cout << "Сколько раз сделать сдвиг?\n";            
            for (cin >> permutation; permutation != 0; permutation--)
            {
                for (int i = 0; i < row; i++)
                {
                    for (int j = column - 1; j != 0; j--)
                    {
                        swap(array[i][j], array[i][j - 1]);

                    }
                }

            }
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    cout << array[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case'0':
            cout << "До свидания!\n";
            break;
        default:
            cout << "Неверный ввод\n";
            break;
        }
    } while (choice != '0');
    for (int i = 0; i < row; i++)
    {
        delete[] array[i];
    }
    delete[] array;
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int r;
	int c;
	cout << "Input quantity rows:" << endl;
	cin >> r;
	cout << "Input quantity column:" << endl;
	cin >> c;
	int** array = new int* [r];
	for (int i = 0; i < r; i++)
		array[i] = new int[c];
	input(array, r, c);
	//in(array, r, c);    
	//_delete(array, r, c);
    shift(array, r, c);
	
}
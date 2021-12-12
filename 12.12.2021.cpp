#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    //Task1
    /* const int row = 10;
    const int column = 3;
    long long int array[row][column];
    cout << "Введите начальное число: \n";
    cin >> array[0][0];
    long long int num = array[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == 0 && j == 0)
                continue;
            array[i][j] = num * 2;
            num = array[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }*/

    //Task2
    /*const int row = 10;
    const int column = 3;
    long long int array[row][column];
    cout << "Введите начальное число: \n";
    cin >> array[0][0];
    long long int num = array[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == 0 && j == 0)
                continue;
            array[i][j] = num + 1;
            num = array[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }*/

    //Task3
    /*const int row =10;
    const int column =10;
    int array[row][column], permutation;
    char choice = '0';
    srand(time(NULL));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {

            array[i][j] = rand() % 100 + 1;

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
            cin >> permutation;
            for (; permutation != 0; permutation--)
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
            cin >> permutation;
            for (; permutation != 0; permutation--)
            {
                for (int i = row - 1; i !=0; i--)
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
            cin >> permutation;
            for (; permutation != 0; permutation--)
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
            cin >> permutation;
            for (; permutation != 0; permutation--)
            {
                for (int i = 0; i < row; i++)
                {
                    for (int j = column - 1; j !=0; j--)
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
    } while (choice != '0');*/
}
//Task 1 and 2
//#include <iostream>
//using namespace std;
//
//void input(int* array, int* array2, int size)
//{
//    srand(time(NULL));
//    for (int i = 0; i < size; i++)
//        array[i] = rand() % 2235 + 1;
//
//    for (int i = 0; i < size; i++)
//        array2[i] = array[i];
//
//}
//void output(int* array, int* array2, int size)
//{
//    cout << "\n\n\n" << "Первый массив: " << endl;
//    for (int i = 0; i < size; i++)
//        cout << array[i] << " ";
//
//    cout << "\n\n\n" << "Скопированный массив, вывод имен памяти: " << endl;
//    for (int i = 0; i < size; i++)
//        cout << &array2[i] << " ";
//
//    cout << "\n\n\n" << "Скопированный массив, разыменование и вывод с помощью арифметики: " << endl;
//    for (int i = 0; i < size; i++)
//        cout << *(array2 + i) << " ";
//    
//    for (int i = 0; i < size/2; i++)
//         swap(array[i], array[size-i-1]);
//
//    cout << "\n\n\n" << "Отсортированный массив: " << endl;
//    for (int i = 0; i < size; i++)
//        cout << array[i] << " ";
//
//    delete[] array;
//    delete[] array2;
//}
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    int size;
//    cout << "Введите размер массива: " << endl;
//    cin >> size;
//    int* array = new int[size];
//    int* array2 = new int[size];
//    input(array, array2, size);
//    output(array, array2, size);
//
//
//}

//Task3
#include <iostream>
using namespace std;

void input(int* array, int* array2, int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
        array[i] = rand() % 2235 + 1;

    for (int i = 0; i < size; i++)
        array2[size-i-1] = array[i];

}
void output(int* array, int* array2, int size)
{
    cout << "\n\n\n" << "Первый массив: " << endl;
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    
    cout << "\n\n\n" << "Скопированный массив, в обратном порядке: " << endl;
    for (int i = 0; i < size; i++)
        cout << *(array2 + i) << " ";

    cout <<  "\n\n\n";

    delete[] array;
    delete[] array2;
}
int main()
{
    setlocale(LC_ALL, "ru");
    int size;
    cout << "Введите размер массива: " << endl;
    cin >> size;
    int* array = new int[size];
    int* array2 = new int[size];
    input(array, array2, size);
    output(array, array2, size);


}

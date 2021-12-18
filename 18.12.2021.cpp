#include <iostream>
using namespace std;
//Task1
/*void input(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = 20 + rand() % (116 - 20 + 1);
    }
}
void sort(int* array, int size)
{
    
    for (int i = 0; i < size; i++)
    {
        if (i <= size / 2)        
            for (int j = i + 1; j <= size / 2; j++)
            {
                if (array[i] < array[j])
                    swap(array[i], array[j]);
            }        
        else       
            for (int j = i + 1; j < size; j++)
            {
                if (array[i] > array[j])
                    swap(array[i], array[j]);
            }
        
   
    }
}
void output(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
}
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    cout << "Задайте количество сортируемых элементов\n";
    int size;
    cin >> size;
    int* array =  new int [size];    
    input(array, size);    
    output(array, size);
    sort(array, size);
    output(array, size);
}*/

//Task2

    void input(int* array, int size)
    {
        for (int i = 0; i < size; i++)
        {
            array[i] = -20 + rand() % 41;
        }
    }
    void sort(int* array, int size)
    {
        int min1, max1;
        for (int i = 0; i < size; i++)
        {           
            if (array[i] < 0)
            {
                min1 = i;
                break;
            }
        }
        for (int i = size-1; i > 0; i--)
        {
            if (array[i] < 0)
            {
                max1 = i;
                break;
            }
        }
        for (int i = min1+1; i < size; i++)
        {
            for (int j = max1 - 1; j > i; j--)
            {
                if (array[i] < array[j])
                    swap(array[i], array[j]);
            }
        }
    }
    void output(int* array, int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << "\n";
    }
 int main()
 {
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    cout << "Задайте количество сортируемых элементов\n";
    int size;
    cin >> size;
    int* array =  new int [size];
    input(array, size);
    output(array, size);
    sort(array, size);
    output(array, size);


}

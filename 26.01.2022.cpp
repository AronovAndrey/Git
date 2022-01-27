
#include <iostream>
using namespace std;

void input(int* a, int* b, int m, int n)
{    
    for (int i = 0; i < m; i++)
    {
        a[i] = rand() % 99 + 1;
    }
    
    for (int i = 0; i < n; i++)
    {
       b[i] = rand() % 99 + 1;
    }
    
}
void output(int* a, int* b, int m, int n)
{  
    cout << "Первый массив: "<< endl;
    for (int i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl << "Второй массив: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    
}
void join(int* a, int* b, int m, int n)
{
    int f = 0;
    int* c = new int [f];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] < a[j])
                swap(a[i], a[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i] < b[j])
                swap(b[i], b[j]);
        }
    }
    f = -1;
    for (int i = 0; i < m; i++)
    {
        if (a[i] == a[i + 1])
            continue;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
                break;
            else if (j == n - 1)
            {  
                    ++f;
                    c[f] = a[i];    
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == b[i + 1])
            continue;
        for (int j = 0; j < m; j++)
        {
            if (b[i] == a[j])
                break;
            else if (j == m - 1)
            {
                ++f;
                c[f] = b[i];
            }
        }
    }
    cout << endl << "Сборный массив: " << endl;
    for (int i = 0; i < f+1; i++)
    {
        for (int j = 0; j < f+1; j++)
        {
            if (c[i] < c[j])
                swap(c[i], c[j]);
        }
    }
    for (int i = 0; i < f+1; i++)
    {
        cout << c[i] << " ";
    }
}
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int m, n; 
    cout << "Введите размер первого массива: ";
    cin >> m;
    cout << "Введите размер второго массива: ";
    cin >> n;
    int* a = new int[m];
    int* b = new int[n];
    input(a, b, m, n);
    output(a, b, m, n);
    join(a, b, m, n);

}

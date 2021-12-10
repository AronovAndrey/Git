
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    //Task1
    /*long long int mobileNumber[10] = {89199352282, 89220777526, 89220444725, 89245654215, 89456521321, 89456321522, 89465321235, 89132456545, 89123545651, 89565321254 };
    int homeNumber[10] = { 517618, 517515, 517532, 517895, 517986, 517465, 517123, 517978, 517956, 517321 };
    long long int general[20];
    int j = 0;
    char choice;
    for (int i = 0; i < 10; i++)
    {
        general[j] = mobileNumber[i];
        j++;
        general[j] = homeNumber[i];
        j++;
    }
    do
    {
        cout << "Здравствуйте, в каком виде вывести Вам список телефоных номеров?\n"
            "1 - Вывести как записаны у пользователя\n"
            "2 - Ввести отсортировав по мобильным номерам\n"
            "3 - Ввести отсортировав по домашним номерам\n"
            "0 - Выход\n";
        cin >> choice;
        switch (choice)
        {
        case '1':
            for (int i = 0; i < 10; i++)
            {
                cout << mobileNumber[i] << endl;
                cout << homeNumber[i] << endl;
            }

            break;
        case '2':
            for (int i = 0; i < 19; i++)
            {
                for (int j = i+1; j < 20; j++)
                {
                    if (general[i] < general[j])
                        swap(general[i], general[j]);
               }

            }
            for (int i = 0; i < 20; i++)
            {
                cout << general[i]<<endl;
            }
            break;
        case '3':
            for (int i = 0; i < 19; i++)
            {
                for (int j = i+1; j < 20; j++)
                {
                    if (general[i] > general[j])
                        swap(general[i], general[j]);
                }
            }
            for (int i = 0; i < 20; i++)
            {
                cout << general[i] << endl;
            }
            break;
        case '0':
            cout << "До встречи!\n";
            break;
        default:
            cout << "Ошибка ввода.\n";
            break;
        }
    } while (choice!='0');*/

    //Task2
    /*int number[10] = { 0, 1, -1, -5, -15, 12, 15, 21, 13, 18};
     int counter = 0;

            for (int i = 0; i < 10; i++)
            {
                counter = 0;
                for (int j = 0; j < 9-i; j++)
                {
                    if (number[j] < number[j + 1])
                    {
                        swap(number[j], number[j + 1]);
                        counter++;
                    }
               }
                if (counter == 0)
                    break;
            }
            for (int i = 0; i < 10; i++)
            {
                cout << number[i]<<endl;

            }*/

    //Task3
    /*int radius[10];
            int action=0;
            for (int i = 0; i < 10; i++)
            {
                cout << "Введите радиус " << i + 1 << " оладьи\n";
                cin >> radius[i];
            }

                    for (int i = 0; i < 10; i++)
                    {
                        for (int j = 0; j < 9-i; j++)
                        {
                            if (radius[j] > radius[j + 1])
                            {
                                swap(radius[j], radius[j + 1]);
                                action++;
                            }
                       }

                    }
                    cout << "Мы перевернули оладья, за " << action << " действий\n";
                    for (int i = 0; i < 10; i++)
                    {
                        cout << radius[i]<<endl;

                    }*/

    //Task4 //Мне пришлось создать массивы с 1-10 и с 11-20 одни и теже, потому что он не перезаписывал значения в массивах.
    /*int mass1[10] = { 2, 5, -10, 1, 5, 30, -5, -7, -45, 10 };
    int mass2[10] = { 10, -12, 14, 16, -21, 38, 44, -53, 69, 72 };
    int mass3[10] = { 8, 16, -23, 38, 1, -72, 7, 81, -9, 95 };
    int mass4[10] = { 5, -11, 12, 7, 38, -9, 59, 2, 83, -100 };
    int mass5[10] = { -2, 20, 9, -47, 60, 7, 84, 9, 90, -99 };
    int mass6[10] = { 8, -20, 26, 36, -37, 1, 5, 76, -84, 97 };
    int mass7[10] = { -23, 6, 28, -3, 48, 5, 7, -84, 90, 94 };
    int mass8[10] = { 2, 9, -3, 30, 33, -43, 77, 8, 96, -9 };
    int mass9[10] = { -8, 11, 2, 18, 3, -48, 5, 57, 6, -98 };
    int mass10[10] = { 9, -28, 4, 7, -47, 55, 57, 59, -77, 95 };
    int actionBuble = 0, actionInsert = 0;
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 9 - i; j++)
        {
            if (mass1[j] < mass1[j + 1])
            {
                swap(mass1[j], mass1[j + 1]);
                actionBuble++;
            }
        }

    }
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 9 - i; j++)
        {
            if (mass2[j] < mass2[j + 1])
            {
                swap(mass2[j], mass2[j + 1]);
                actionBuble++;
            }
        }

    }
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 9 - i; j++)
        {
            if (mass3[j] < mass3[j + 1])
            {
                swap(mass3[j], mass3[j + 1]);
                actionBuble++;
            }
        }

    }
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 9 - i; j++)
        {
            if (mass4[j] < mass4[j + 1])
            {
                swap(mass4[j], mass4[j + 1]);
                actionBuble++;
            }
        }

    }
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 9 - i; j++)
        {
            if (mass5[j] < mass5[j + 1])
            {
                swap(mass5[j], mass5[j + 1]);
                actionBuble++;
            }
        }

    }
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 9 - i; j++)
        {
            if (mass6[j] < mass6[j + 1])
            {
                swap(mass6[j], mass6[j + 1]);
                actionBuble++;
            }
        }

    }
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 9 - i; j++)
        {
            if (mass7[j] < mass7[j + 1])
            {
                swap(mass7[j], mass7[j + 1]);
                actionBuble++;
            }
        }

    }
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 9 - i; j++)
        {
            if (mass8[j] < mass8[j + 1])
            {
                swap(mass8[j], mass8[j + 1]);
                actionBuble++;
            }
        }

    }
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 9 - i; j++)
        {
            if (mass9[j] < mass9[j + 1])
            {
                swap(mass9[j], mass9[j + 1]);
                actionBuble++;
            }
        }

    }
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 9 - i; j++)
        {
            if (mass10[j] < mass10[j + 1])
            {
                swap(mass10[j], mass10[j + 1]);
                actionBuble++;
            }
        }

    }

    cout << "Пузырьковая сортировка сделала " << actionBuble << " действий сортировки\n";

    int mass11[10] = { 2, 5, -10, 1, 5, 30, -5, -7, -45, 10 };
    int mass12[10] = { 10, -12, 14, 16, -21, 38, 44, -53, 69, 72 };
    int mass13[10] = { 8, 16, -23, 38, 1, -72, 7, 81, -9, 95 };
    int mass14[10] = { 5, -11, 12, 7, 38, -9, 59, 2, 83, -100 };
    int mass15[10] = { -2, 20, 9, -47, 60, 7, 84, 9, 90, -99 };
    int mass16[10] = { 8, -20, 26, 36, -37, 1, 5, 76, -84, 97 };
    int mass17[10] = { -23, 6, 28, -3, 48, 5, 7, -84, 90, 94 };
    int mass18[10] = { 2, 9, -3, 30, 33, -43, 77, 8, 96, -9 };
    int mass19[10] = { -8, 11, 2, 18, 3, -48, 5, 57, 6, -98 };
    int mass20[10] = { 9, -28, 4, 7, -47, 55, 57, 59, -77, 95 };

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (mass11[i] < mass11[j])
            {
                swap(mass11[i], mass11[j]);
                actionInsert++;
            }
        }

    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (mass12[i] < mass12[j])
            {
                swap(mass12[i], mass12[j]);
                actionInsert++;
            }
        }

    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j <10; j++)
        {
            if (mass13[i] < mass13[j])
            {
                swap(mass13[i], mass13[j]);
                actionInsert++;
            }
        }

    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (mass14[i] < mass14[j])
            {
                swap(mass14[i], mass14[j]);
                actionInsert++;
            }
        }

    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (mass15[i] < mass15[j])
            {
                swap(mass15[i], mass15[j]);
                actionInsert++;
            }
        }

    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (mass16[i] < mass16[j])
            {
                swap(mass16[i], mass16[j]);
                actionInsert++;
            }
        }

    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (mass17[i] < mass17[j])
            {
                swap(mass17[i], mass17[j]);
                actionInsert++;
            }
        }

    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (mass18[i] < mass18[j])
            {
                swap(mass18[i], mass18[j]);
                actionInsert++;
            }
        }

    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (mass19[i] < mass19[j])
            {
                swap(mass19[i], mass19[j]);
                actionInsert++;
            }
        }

    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (mass20[i] < mass20[j])
            {
                swap(mass20[i], mass20[j]);
                actionInsert++;
            }
        }

    }

    
    cout << "Выборочная сортировка сделала " << actionInsert << " действий сортировки\n";*/

}


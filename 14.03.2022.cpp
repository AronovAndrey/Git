//Task1

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//struct numbers{
//    int number;
//}; numbers num[4];
//
//int main()
//{
//    int k = 1, b, c,d; char a = '0';
//    setlocale(LC_ALL, "rus");
//   
//    for (int i = 0; i < 4; i++)
//    {
//        cout << "Введите " << k << " число\n";
//        cin >> num[i].number;
//        k++;   
//    }
//    system("cls");
//    if (num[1].number < 0)
//        cout << "\nZ1 = " << num[0].number <<" "<< num[1].number << "i\n";
//    else
//        cout << "\nZ1 = " << num[0].number <<" + "<< num[1].number << "i\n";
//    if (num[3].number < 0)
//        cout << "\nZ2 = " << num[2].number << " " << num[3].number << "i\n";
//    else
//        cout << "\nZ2 = " << num[2].number << " + " << num[3].number << "i\n";
//    cout << "\nВыберите действие с комплексными числамы\n"
//        "1 - Сложение\n"
//        "2 - Вычитание\n"
//        "3 - Умножение\n"
//        "4 - Деление\n"
//        "0 - Выход\n";
//    cin >> a;
//    switch (a)
//    {
//    case '1':
//        if (num[3].number + num[1].number > 0)
//            cout << "\nZ = " << num[0].number + num[2].number << " + " << num[1].number + num[3].number << "i\n";
//        else
//            cout << "\nZ = " << num[0].number + num[2].number << "  " << num[1].number + num[3].number << "i\n";
//        break;
//    case '2':
//        num[2].number *= -1;
//        num[3].number *= -1;
//        if (num[3].number + num[1].number > 0)
//            cout << "\nZ = " << num[0].number + num[2].number << " + " << num[1].number + num[3].number << "i\n";
//        else
//            cout << "\nZ = " << num[0].number + num[2].number << "  " << num[1].number + num[3].number << "i\n";
//        break;
//    case '3':        
//        b = num[0].number * num[2].number + (num[1].number * num[3].number * -1);
//        c = num[0].number * num[3].number + num[1].number * num[2].number;
//        if (c > 0)
//            cout << "\nZ = " << b << " + " << c << "i\n";
//        else
//            cout << "\nZ = " << b << "  " << c << "i\n";
//        break;
//    case '4':
//        b = num[0].number * num[2].number + (num[1].number * (num[3].number*-1) * -1);
//        c = num[0].number * (num[3].number*-1) + num[1].number * num[2].number;
//        d = pow(num[2].number,2) + pow(num[3].number,2);
//        if (c > 0)
//            cout << "\nZ = " << (float)b/d << " + " << (float)c/d << "i\n";
//        else
//            cout << "\nZ = " << (float)b/d << "  " << (float)c/d << "i\n";
//        break;
//    case '0':
//        break;
//    default:
//        cout << "Ошибка ввода!";
//        break;
//    }    
//}

//Task2

#include <iostream>
#include <string>
using namespace std;

struct Auto
{
	string name;
	int length;
	int height;
	int engineCapacity;
	int enginePower;
	int wheelDiameter;
	string color;
	string transmission;
	void input()
	{
		cout << "Input name\n";
		getline(cin, name);
		cout << "Input length\n";
		cin >> length;
		cout << "Input height\n";
		cin >> height;
		cout << "Input engine capacity\n";
		cin >> engineCapacity;
		cout << "Input engine power\n";
		cin >> enginePower;
		cout << "Input wheel diameter\n";
		cin >> wheelDiameter;
		cout << "Input color\n";
		cin.ignore(32765, '\n');
		getline(cin, color);
		cout << "Input tranmission\n";
		getline(cin, transmission);
		cout << endl;
	}
	void output()
	{
		cout << "name\t";
		cout << name << endl;
		cout << "length\t";
		cout << length << endl;
		cout << "height\t";
		cout << height << endl;
		cout << "engine capacity\t";
		cout << engineCapacity << endl;
		cout << "engine power\t";
		cout << enginePower << endl;
		cout << "wheel diameter\t";
		cout << wheelDiameter << endl;
		cout << "color\t";
		cout << color << endl;
		cout << "tranmission\t";
		cout << transmission << endl;
		
	}
	


};

int main()
{
	Auto chevrolet;
	Auto toyota;
	Auto nissan;
	cout << "Chevrolet\n";
	chevrolet.input();
	cout << "Toyota\n";
	toyota.input();
	cout << "Nissan\n";
	nissan.input();
	system("cls");
	cout << "Chevrolet\n";
	chevrolet.output();
	cout << "Toyota\n";
	toyota.output();
	cout << "Nissan\n";
	nissan.output();
	char k = '0';
	int  a;
	string b;
	do
	{
		cout << "Which information you want find?\n"
			"1 - name\n"
			"2 - length\n"
			"3 - height\n"
			"4 - engineCapacity\n"
			"5 - enginePower\n"
			"6 - wheelDiameter\n"
			"7 - color\n"
			"8 - tranmission\n"
			"0 - Exit\n";
		cin >> k;
		system("cls");
		switch (k)
		{
		case '1':
			cout << "Input name which you want find. ";
			cin >> b;
			if (b == nissan.name) {
				cout << "Nissan\n";
				cout << nissan.name << endl;
			}
			if (b == chevrolet.name) {
				cout << "Chevrolet\n";
				cout << chevrolet.name << endl;
			}
			if (b == toyota.name) {
				cout << "Toyota\n";
				cout << toyota.name << endl;
			}
			else
				cout << "No mathes\n";
			break;
		case '2':
			cout << "Input name which you want find. ";
			cin >> a;
			if (a == nissan.length) {
				cout << "Nissan\n";
				cout << nissan.length << endl;
			}
			if (a == chevrolet.length) {
				cout << "Chevrolet\n";
				cout << chevrolet.length << endl;
			}
			if (a == toyota.length) {
				cout << "Toyota\n";
				cout << toyota.length << endl;
			}
			else
				cout << "No mathes\n";
			break;
		case '3':
			cout << "Input name which you want find. ";
			cin >> a;
			if (a == nissan.height) {
				cout << "Nissan\n";
				cout << nissan.height << endl;
			}
			if (a == chevrolet.height) {
				cout << "Chevrolet\n";
				cout << chevrolet.height << endl;
			}
			if (a == toyota.height) {
				cout << "Toyota\n";
				cout << toyota.height << endl;
			}
			else
				cout << "No mathes\n";
			break;
		case '4':
			cout << "Input name which you want find. ";
			cin >> a;
			if (a == nissan.engineCapacity) {
				cout << "Nissan\n";
				cout << nissan.engineCapacity << endl;
			}
			if (a == chevrolet.engineCapacity) {
				cout << "Chevrolet\n";
				cout << chevrolet.engineCapacity << endl;
			}
			if (a == toyota.engineCapacity) {
				cout << "Toyota\n";
				cout << toyota.engineCapacity << endl;
			}
			else
				cout << "No mathes\n";
			break;
		case '5':
			cout << "Input name which you want find. ";
			cin >> a;
			if (a == nissan.enginePower) {
				cout << "Nissan\n";
				cout << nissan.enginePower << endl;
			}
			if (a == chevrolet.enginePower) {
				cout << "Chevrolet\n";
				cout << chevrolet.enginePower << endl;
			}
			if (a == toyota.enginePower) {
				cout << "Toyota\n";
				cout << toyota.enginePower << endl;
			}
			else
				cout << "No mathes\n";
			break;
		case '6':
			cout << "Input name which you want find. ";
			cin >> a;
			if (a == nissan.wheelDiameter) {
				cout << "Nissan\n";
				cout << nissan.wheelDiameter << endl;
			}
			if (a == chevrolet.wheelDiameter) {
				cout << "Chevrolet\n";
				cout << chevrolet.wheelDiameter << endl;
			}
			if (a == toyota.wheelDiameter) {
				cout << "Toyota\n";
				cout << toyota.wheelDiameter << endl;
			}
			else
				cout << "No mathes\n";
			break;
		case '7':
			cout << "Input name which you want find. ";
			cin >> b;
			if (b == nissan.color) {
				cout << "Nissan\n";
				cout << nissan.color << endl;
			}
			if (b == chevrolet.color) {
				cout << "Chevrolet\n";
				cout << chevrolet.color << endl;
			}
			if (b == toyota.color) {
				cout << "Toyota\n";
				cout << toyota.color << endl;
			}
			else
				cout << "No mathes\n";
			break;
		case '8':
			cout << "Input name which you want find. ";
			cin >> b;
			if (b == nissan.transmission) {
				cout << "Nissan\n";
				cout << nissan.transmission << endl;
			}
			if (b == chevrolet.transmission) {
				cout << "Chevrolet\n";
				cout << chevrolet.transmission << endl;
			}
			if (b == toyota.transmission) {
				cout << "Toyota\n";
				cout << toyota.transmission << endl;
			}
			else
				cout << "No mathes\n";
			break;
		default:
			cout << "Wrong choice\n";
			break;
		}
	} while (k != '0');
}

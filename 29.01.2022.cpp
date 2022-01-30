#include <iostream>
#include <string>
using namespace std;

void task1(string poem)
{
    cout << "Task1" <<endl << poem << endl;
    int choice;    
    string poem2;
    cout << "Specify the number of the symbol to be deleted!(A space also counts)" << endl;
    cin >> choice;                 
        for (int i = 0; i < poem.length(); i++)
        {
            if (i + 1 == choice)
                continue;
            else
                poem2 += poem[i];
        }
        for (int i = 0; i < poem.length(); i++)
            cout << poem2[i]; 
        
}
void task2(string poem)
{
    cout << "\n\n\n"<< "Task2" << endl << poem << endl;
    char choice;
    string poem2;
    cout <<endl<< "specify the letter to delete!" << endl;
    cin >> choice;
    for (int i = 0; i < poem.length(); i++)
    {
        if (poem[i] == choice)
            continue;
        else
            poem2 += poem[i];
    }
    for (int i = 0; i < poem2.length(); i++)
        cout << poem2[i];
}
void task3(string poem)
{
    cout <<"\n\n\n"<< "Task3" << endl << poem << endl;
    char choice;
    int choice2;
    string poem2;
    cout << endl << "specify the letter to insert!" << endl;
    cin >> choice;
    cout << endl << "specify the number where to put the letter!" << endl;
    cin >> choice2;
    for (int i = 0; i < poem.length(); i++)
    {
        if (i == choice2)
        {
            poem2 += choice;
            poem2 += poem[i];
        }
        else
            poem2 += poem[i];
    }
    for (int i = 0; i < poem2.length(); i++)
        cout << poem2[i];
}
void task4(string poem)
{
    cout << "\n\n\n" << "Task4" << endl << poem << endl;
    char choice = ' ';
    string poem2;
    for (int i = 0; i < poem.length(); i++)
    {
        if (poem[i] == choice)            
            poem2 += '.';
        else
            poem2 += poem[i];
    }
    for (int i = 0; i < poem2.length(); i++)
        cout << poem2[i];
}
void task5(string poem)
{
    cout << "\n\n\n" << "Task5" << endl << poem << endl;
    char choice;
    int counter = 0;
    string poem2;
    cout << "Write which letter you need to count how many times it is written" << endl;
    cin >> choice;
    for (int i = 0; i < poem.length(); i++)
    {
        if (poem[i] == choice)
            counter++;
    }
        cout << "This letter occurs in the text: " << counter;
}
void task6()
{
    string text;
    cout  << "\n\n\n" << "Task6"<< endl << "Enter your text, enter letters with numbers:" << endl;
    cin.ignore(32765, '\n');
    getline(cin, text);
    int counterLetter = 0;
    int counterNumbers = 0;
    int counterSymbol = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if ((int)text[i] >= 48 && (int)text[i] <= 57)
            counterNumbers++;
        else if (((int)text[i] >= 65 && (int)text[i] <= 90) || (((int)text[i] >= 97 && (int)text[i] <= 122)))
            counterLetter++;
        else
            if ((int)text[i] == 32)
                continue;
            else
            counterSymbol++;
    }
    cout << "In Your text:\n"
        "Numbers - " << counterNumbers << endl <<
        "Letter - " << counterLetter << endl <<
        "Symbol - " << counterSymbol;
    
}
int main()
{
    string poem = "In the modern world, the work of a programmer is as necessary to us as air. "
                  "You create programs for people so that we can work and play.";
    task1(poem);  
    task2(poem);
    task3(poem);
    task4(poem);
    task5(poem);
    task6();
}

#include "question1.h"
#include <iostream>


using std::cout; using std::cin;

int main()
{
    double Cel, Fah;
    char answer;

    do
    {
        cout << "This program will convert Celsius to Fahrenheit.\n";
        cout << "Please enter a Celsius degree - ";
        cin >> Cel;
    
        Fah = get_fahrenheit(Cel);
    
        cout << Cel << " Celsius degree is equal to " << Fah << " Fahrenheit degree.\n";

        cout << "Do you want to continue?(y/n) - ";
        cin >> answer;
        
        while (toupper(answer) != 'Y' && toupper(answer) != 'N')
        {
            cout << "Only 'y' or 'n'. Please try again.\n";
            cout << "Do you want to continue?(y/n) - ";
            cin >> answer;
        }

    }while (toupper(answer) != 'N');

    return 0;
}
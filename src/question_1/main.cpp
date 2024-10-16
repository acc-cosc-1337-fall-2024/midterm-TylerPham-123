#include "question1.h"
#include <iostream>

using std::cout; using std::cin;

int main()
{
    double Cel;
    double Fah;
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

    }while (answer == 'y');
    
    
   

    return 0;
}
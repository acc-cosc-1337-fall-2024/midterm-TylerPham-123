#include "question4.h"
#include <iostream>

using std::cout; using std::cin;

int main()
{
    int num, fib_num;
    char answer;

    do
    {
        cout << "***This program will return the Fibonacci number of an integer value.***\n";
        cout << "Please enter an integet in the range of 1 to 15 - ";
        cin >> num;

        if (num < 1 || num > 15)
        {
            cout << "Please be obedient.\n";
        }
        else
        {
            fib_num = get_fib_number(num);
            cout << "The Fibonacci number of " << num << " is " << fib_num << "\n";
        }

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
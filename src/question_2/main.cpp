#include "question2.h"

using std::cin; using std::cout;

int main()
{   
    string str; bool result; char answer;

    do
    {
        cout << "***This program will check if a string is palindrome or not.***\n";
        cout << "Please enter a string - ";
        cin >> str;
        result = is_palindrome(str);

        if (result == true)
            cout << "True.\n" << str << " is a palindrome string.\n";
        else
            cout << "False.\n" << str << " is not a palindrome string.\n";
    
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

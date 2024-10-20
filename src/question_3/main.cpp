#include "question3.h"
#include <iostream>

using std::cout; using std::cin;

int main()
{
    int widgets_sold, points_earned;
    char answer;

    do
    {
        cout << "***This program will display points earned based on\n";
        cout << "the widgets sold.***\n";
        cout << "Please enter the widgets sold - ";
        cin >> widgets_sold;

    
        if (widgets_sold < 1)
            cout << "No point for you boy.\n";
        else
        {
            points_earned = get_earned_points(widgets_sold);
            cout << "Poits Earned " << points_earned << "\n";
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
//
#include "question4.h"
bool test_config()
{
    return true;
}

int get_fib_number(int num)
{
    if (num <= 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return get_fib_number(num - 1) + get_fib_number(num - 2);
}
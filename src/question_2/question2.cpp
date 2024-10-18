#include "question2.h"

bool test_config()
{
    return true;
}

bool is_palindrome(const string &pal)
{
    if (pal == pal)
    {
        return true;
    }
    else
    {
        return false;
    }
}
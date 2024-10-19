#include "question2.h"

bool test_config()
{
    return true;
}

bool is_palindrome(const string &str)
{
    for (int i = 0; i < (str.length() / 2), i++)
		if (str[i] != str[str.length() - i -1])
			return false;
	return true;
}
//valid Palindrom

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isPalindrome(const std::string &s)
{
    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        // Skip non-alphanumeric characters from the left
        while (!isalnum(s[left]))
        {
            left++;
        }

        // Skip non-alphanumeric characters from the right
        while (!isalnum(s[right]))
        {
            right--;
        }

        // Compare lowercase characters
        if (tolower(s[left]) != tolower(s[right]))
            return false;

        left++;
        right--;
    }

    return true;
}

int main()
{
    std::string str = "A man, a plan, a canal: Panama";
    bool result = isPalindrome(str);

    if (result)
    {
        std::cout << "The string is a palindrome." << std::endl;
    }
    else
    {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}

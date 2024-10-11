#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Mr. Robot is making a website, in which there is a tab to create a password. As with other websites, there are rules so that the password gets complex and none can predict the password for another. So he gave some rules like:

// – At least one numeric digit

// – At Least one Small/Lowercase Letter

// – At Least one Capital/Uppercase Letter

// – Must not have space 

// – Must not have slash (/)

// – At least 6 characters

// If someone inputs an invalid password, the code prints: “Invalid password, try again”.

// Otherwise, it prints: “password valid”.

// Input Format:

// A line with a given string as a password

// Output Format:

// If someone inputs an invalid password, the code prints: “Invalid password, try again”.

// Otherwise, it prints: “password valid”, without the quotation marks.

// Constraints:

// Number of characters in the given string <=10^9

// Sample input 1: 

// abjnlL09

// Sample output 1: 

// password valid

// Sample input 2: 

// jjnaskpk

// Sample output 2: 

// Invalid password, try again

bool validPassword(string password)
{
    if (password.length() < 6)
    {
        cout << "less than 6" << endl;
        return false;
    }
    int lower = 0, upper = 0, num = 0;
    for (char c : password)
    {
        if (c == '/')
        {
            cout << "sLash" << endl;
            return false;
        }
        if (c == ' ')
        {
            cout << "spacce" << endl;
            return false;
        }
        if (c - '0' >= 0 && c - '0' <= 9)
            num++;
        if (c >= 'a' && c <= 'z')
            lower++;
        if (c >= 'A' && c <= 'Z')
            upper++;
    }
    if (num == 0 || upper == 0 || lower == 0)
        return false;
    return true;
}

int main()
{
    string password;
    getline(cin, password);
    if (validPassword(password))
    {
        cout << "Valid Password" << endl;
    }
    else
    {
        cout << "Invalid password, try again" << endl;
    }
    return 0;
}
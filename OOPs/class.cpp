#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class School
{
public:
    void print()
    {
        cout << "In School";
    }
};
class Student
{
public:
    void print()
    {
        cout << ", I am a Student";
    }
};
int main()
{
    School s;
    s.print();
    Student st;
    st.print();
    return 0;
}
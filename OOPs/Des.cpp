// destructor

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    int salary;
    string name;

public:
    Employee();
    Employee(int id, int salary, string name)
    {
        this->id = id;
        this->salary = salary;
        this->name = name;
    }
    ~Employee()
    {
        cout << "Destructor called for " << name << endl;
    }
    void print()
    {
        cout << id << "\t";
        cout << name << "\t";
        cout << salary << endl;
    }
};

int main()
{
    Employee Rahul(1, 1000, "Rahul");
    Employee Rohan(2, 2000, "Rohan");
    Rahul.print();
    Rohan.print();
    return 0;
}
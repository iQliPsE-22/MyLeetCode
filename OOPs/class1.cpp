#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    int salary;
    string name;

public:
    Employee(int id, int salary, string name)
    {
        this->id = id;
        this->salary = salary;
        this->name = name;
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
    Employee Ravi(3, 3000, "Ravi");
    cout << "ID" << "\t" << "Name" << "\t" << "Salary" << endl;
    Rahul.print();
    Rohan.print();
    Ravi.print();
    return 0;
}
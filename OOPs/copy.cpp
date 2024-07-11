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
    Employee(Employee &dummy)
    {
        id = dummy.id + 1;
        salary = dummy.salary;
        name = dummy.name;
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
    Employee Rohan(Rahul);

    cout << "ID" << "\t" << "Name" << "\t" << "Salary" << endl;
    Rahul.print();
    Rohan.print();

    return 0;
}
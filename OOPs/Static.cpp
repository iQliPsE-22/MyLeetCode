#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    int salary;
    string name;

public:
    static int count;
    Employee();
    Employee(int id, int salary, string name)
    {
        this->id = id;
        this->salary = salary;
        this->name = name;
        count++;
    }
    void print()
    {
        cout << id << "\t";
        cout << name << "\t";
        cout << salary << endl;
    }
};
int Employee::count = 0;
int main()
{
    Employee Rahul(1, 1000, "Rahul");
    Employee Rohan(2, 2000, "Rohan");

    cout << "ID" << "\t" << "Name" << "\t" << "Salary" << endl;
    Rahul.print();
    Rohan.print();

    cout << "Total Employees: " << Employee::count << endl;
    return 0;
}
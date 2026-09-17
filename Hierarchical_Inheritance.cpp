#include <iostream>
using namespace std;

class Employee
{
public:
    void showEmployee()
    {
        cout << "Employee ID   : 103" << endl;
        cout << "Employee Name : Ajit" << endl;
    }
};

class Developer : public Employee
{
public:
    void showDeveloper()
    {
        cout << "Role          : Software Developer" << endl;
        cout << "Salary        : 1,00,000/-\n" << endl;
    }
};

class Manager : public Employee
{
public:
    void showManager()
    {
        cout << "Role          : Project Manager" << endl;
        cout << "Salary        : 1,80,000/-" << endl;
    }
};

int main()
{
    Developer d;
    Manager m;

    cout << "\t Developer Details:" << endl;
    d.showEmployee();
    d.showDeveloper();

    cout << "\t After Promotion Manager Details:" << endl;
    m.showEmployee();
    m.showManager();

    return 0;
}


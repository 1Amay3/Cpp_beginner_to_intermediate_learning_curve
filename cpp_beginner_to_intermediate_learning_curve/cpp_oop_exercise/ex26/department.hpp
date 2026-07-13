/*
Exercise 26: Aggregation (Has-A relationship)
Practice Problem: Demonstrate Aggregation by creating two classes: Employee and Department. The Department class should manage a group of Employee objects using a std::vector of pointers (Employee*). Implement methods to add an employee to the department. Ensure that the Employee objects can be created and destroyed independently of the Department object.

Expected Output:

Employee Alice hired.
Employee Bob hired.
[Dept] Employee added to HR.
[Dept] Employee added to HR.

--- HR Staff ---
Alice is performing tasks.
Bob is performing tasks.
Employee Alice retired/left.
Employee Bob retired/left.

Department HR shut down.
*/

#include <iostream>
#include <string>
#include "employee.hpp"
#include <vector>
#include <algorithm>
using namespace std;

class Department{
    private:
        vector<Employee*> workers;
    public:
        void add_employee(Employee* a){
            workers.push_back(a);
            cout<<"[Dept] Employee "<<a->show_name()<<" added to HR\n";
        }
        void retire(Employee* a){
            auto check  =find(workers.begin(),workers.end(),a);
            if(check!=workers.end()){   
                size_t ind = distance(workers.begin(),check);
                cout<<workers[ind]->show_name()<<" is retiring!\n";
                //delete workers[ind];
                workers.erase(check);
            }
        }
        void working(Employee* a){
            a->start_work();
        }



};
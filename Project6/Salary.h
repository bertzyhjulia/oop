#pragma once
using namespace std;
template <class T>
class Salary
{
public:
    const T& minSalary = 6500;

    Salary(void) { }

    T delivererSalary(T* t) {
        cout << "Deliverer salary is " << (*t) * 2 << endl;
        return  (*t) * 2;
    }
    
    T managerSalary(T number){
        cout << "Manager salary is " << number * number << endl;
        return (T)(number * number);
    }

    T postmanSalary(T t1, T t2) {
        cout << "Postman salary is " << t1 / t2 << endl;
        return (T)(t1 / t2);
    }

};



#pragma once
template <class T>
class Salary
{
public:
    const T& minSalary = 6500;
    Salary(void) { }
    T delivererSalary(T* t);
    
    T managerSalary(T); 

    T postmanSalary(T, T);
};

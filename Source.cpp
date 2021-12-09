#include <iostream>
#include <fstream>
#include <Windows.h>
#include "Parce.h"
#include "PostDepartment.h"
#include "Employee.h"
#include "Manager.h"
#include "Salary.h"
using namespace std;
double PriceWithDiscount(Department dep) {
    dep.discount = dep.price *0.25;
    cout << "Discount = " << dep.discount << endl;
    return dep.discount;
}
int PriceWithDiscount(Department dep, Post post) {
    cout << "Price without discount  = " << dep.price << endl;
    return dep.price;
}

int main()
{
    //5
    Post post1, post2, post3, post4, post5;
    Department dep1, dep2, dep3, dep4, dep5;
    Customer* customer1 = new Customer();
    Customer* customer2 = new Customer();
    Customer* customer3 = new Customer();
    Customer* customer4 = new Customer();
    Customer* customer5 = new Customer();
    Customer customer;
    Department department;
    //6
    Post posts[5];
    posts[0] = post1;
    posts[1] = post2;
    posts[2] = post3;
    posts[3] = post4;
    posts[4] = post5;
    Customer* customers[5];
    customers[0] = customer1;
    customers[1] = customer2;
    customers[2] = customer3;
    customers[3] = customer4;
    customers[4] = customer5;
    Department dep[5];
    dep[0] = dep1;
    dep[1] = dep2;
    dep[2] = dep3;
    dep[3] = dep4;
    dep[4] = dep5;

        //7-8
    for (int i = 0; i < 5; i++) {
        posts[i].sendPost(3, 4, 5, 8);
        posts[i].setPrice(123);
        posts[i].setPrice(3, 4, 5);
        posts[i].setTime("12.54", "23.23");
        customers[i]->authorisation("lili", "lossom", 23);
        customers[i]->authorisation("Urban street", 48);
        customers[i]->send("Kyiv", 11254);
        customers[i]->send("Kyiv", 11254, 380961547596);
        dep[i].Location("Kyiv", "Hrestatuk", 21);
        dep[i].Location("Kyiv", 21304, "Hrestatuk", 21);
    }
    Post post = posts[1];
    //10
    department.depart(department);
    
    try
    {
        post.writeToFile();
    }
    catch (const std::exception&)
    {
        throw new exception();
        cerr << "Fatal error" << endl;
    }
    try
    {
        post.count();
    }
    catch (const std::exception&)
    {
        throw new exception();
        cout << "Error" << endl;
    }
    post.sendPost(*customer1);
     try
    {
        department.writeToFile();
    }
    catch (const std::exception&)
    {
        throw new exception();
        cerr << "Fatal error" << endl;
    }
    post.price = post.setPrice(30, 40, 5);
    department.Price(post.price);
    department.price = post.setPrice(post.price);
   
    if (post.price > 50)
    {
        double discount = PriceWithDiscount(department);
        customer.price = department.Price(post.price, discount);
    }
    else {
            customer.price = PriceWithDiscount(department, post);

        customer.mustToPay(customer.price);
    }
   
    // Task11
    Post* postPointer = &post;
    postPointer->show();

    //12
    int* array = post.RandomDunamicMemory();
    for (int i = 0; i < 5; i++)
    {
        array[i] = posts[i].getNumber();
        cout << "Order number " << i << " is: " << array[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (array[j] < array[i])swap(array[i], array[j]);
        }
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << endl;



    //22
    try
    {
            Post money1(250);
            Post money2 = Post(250);
            Post money3 = 250;
    }
    catch (const std::exception&)
    {
        cerr << "Fatal error" << endl;
    }
    // 3
    Customer c;
    c.price = 100;
    cout << c.price;
    c.price = 10;
    c.deleteCustomer(10);
    //2
    Post ObjL(1, 2, 3), ObjB(10, 10, 10), ObjP;
    ObjL.Show(1);
    ObjB.Show(2);
    ObjP = ObjL - ObjB; 
    ObjP.Show(3); 
    ObjP = ObjL + ObjB + ObjP; 
    ObjP.Show(4);
    ObjP = ObjL * ObjB;
    ObjP.Show(5);
    ObjP = ObjL = ObjB;
    ObjP.Show(6);
    ObjP += ObjL += ObjB;
    ObjP.Show(7);
    ObjP -= ObjL -= ObjB;
    ObjP.Show(8);
    Post postsIndex;
    postsIndex[4] = 5;
    cout <<"Post 4 has index "<< postsIndex[4]<<endl;
    //5

 /*   Salary <int> mi; 
    int m = 6500;
    mi.delivererSalary(&m);
    int dd;
    dd = mi.managerSalary(9);
    long int t;
    t = mi.postmanSalary(mi.minSalary, 2);*/
}
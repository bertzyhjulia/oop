#pragma once
#include <vector>
using namespace std;
template<class T1, class T2>
class CountCustomers {
    T1 customer;
    T2 day;
public:
    CountCustomers(T1, T2);
    T1 customers();
    T2 days();
};
template<class T1, class T2>
CountCustomers<T1, T2>::CountCustomers(T1 v, T2 w) :customer(v), day(w) {
}
template<class T1, class T2>
T1 CountCustomers<T1, T2>::customers() {
    return customer;
}
template<class T1, class T2>
T2 CountCustomers<T1, T2>::days() {
    return day;
}
template<class T, class T2>
class Day {
    vector<pair<T,T2>> node;
};
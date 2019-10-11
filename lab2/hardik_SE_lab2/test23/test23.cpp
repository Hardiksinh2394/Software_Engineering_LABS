#include <iostream>
#include <cmath>
#include "test23.h"

using namespace std;

//int MyFunction1 (int a, int b) {

//    return (a + b + dumvar);
//}


float MyFunction2 (float x) {
    if (x == 0){ cout << " x is null" <<endl;}
    else {
       cout << " x is not nul " << endl;
    }
}

void ExampleInputOutput(int usr_input) {
    cin >> usr_input;
    cout << "your input is: " << usr_input <<endl;

}


void swap_1(int a, int b) {
    cout<< "value for a: ";
    cin>> a;
    cout<< "value for b: ";
    cin>> b;
    int x = 0;
    x = a;
    a = b;
    b = x;
    cout << "New  a is: " <<a<<endl;
    cout << "New  b is: " <<b<<endl;
}


void swap_2(int & a, int & b) {
    cout<< "value for a: ";
    cin>> a;
    cout<< "value for b: ";
    cin>> b;
    int x = 0;
    x = a;
    a = b;
    b = x;
    cout << "New value of a is: "<<a<<endl;
    cout << "New value of b is: "<<b<<endl;

}

void swap_3(int *a, int *b)
{
    int x=*a;
    *a=*b;
    *b=x;
    cout <<"a="<< *a <<endl;
    cout<<"b="<< *b <<endl;
}
void CartesianToPolar(const int a, const int b, double & phi, double & theta)
{
    phi = sqrt(a*a + b*b);
    theta = atan2(b, a);
}

void IsMultipleOf(const int & p, const int & q ) {
    if (p % q == 0) {
        cout << p << " is a multiple of "<< q <<endl;
    }
    else cout << p << " is not a multiple of "<< q <<endl;
}



bool Prime(const int& p, const int& q) {
    if(p<2)
        return 0;
    else if(q == 1)
        return true;
    else if(p % q == 0)
            return false;
    else
        return Prime(p, q - 1);
    }

int ArraysEx1(int index)
{
    int arr[10] = {2, 8, 15, 10, 3, 7, 9, 4, 20, 77};
    int *arr2 = new int[10] {24, 11, 12,20, 29, 34, 32, 17, 16, 15};

    cout<< "The index of static array : "<<arr[index]<<endl;
    cout<< "The index of dynamic array : "<<arr2[index]<<endl;

    delete[] arr2;

    return index;
}











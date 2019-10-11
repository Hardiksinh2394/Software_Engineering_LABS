#include <iostream>
using namespace std;
#include "lab2.h"

void ExampleInputOutput (void)
 {
 cout <<" Hello hardik " <<endl;

 }
int func(int a, int b)
{
    int c;
    c=a+b;
    cout<<c <<endl;
    return c;
}
 void swap_1(int a, int b)
{
 int x;

 x=a;
 a=b;
 b=x;

 cout<< "a = "<< a <<endl;
 cout<< "b = "<< b <<endl;

 }

void swap_2(int &a, int&b)
{
    int x;

    x=a;
    a=b;
    b=x;

    cout<< "a = "<< a <<endl;
    cout<< "b = "<< b <<endl;

}


void swap_3(int *a, int *b)
{


    int x = *a;
    *a = *b;
    *b = x;

    cout<< "a = "<< *a <<endl;
    cout<< "b = "<< *b <<endl;



}

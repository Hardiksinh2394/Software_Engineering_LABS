
#include <iostream>
using namespace std;
#include "lab2.h"

int main()
{
    ExampleInputOutput();
    func(5, 3);


    int a=10;
    int b=5;
    int *x = &a;
    int *y = &b;

    swap_1(a,b);
    swap_2(a,b);
    swap_3(x, y);


}

#include <QCoreApplication>
#include <iostream>
#include "test23.h"
using namespace std;


int main()
{
   int a = 9;
   int b = 3;
   int c;

   int *x = &a;
   int *y = &b;

   //swap1
    swap_1(a, b);

    //swap2
    swap_2(a, b);

    //swap3
    swap_3(x, y);

    //cartesian program
    double phi, theta;
    CartesianToPolar(a,b,phi,theta);
    cout << "Phi is: " <<phi<<endl;
    cout << "theta is: "<<theta<<endl;

   // IsMultipleOf(a);

    IsMultipleOf(a, b);

    //recursive prime

    cout<< "Enter a value to check if prime ";
    cin>>c;

    int p = Prime(c, c-1);
    if (p == 1){
        cout<< c <<" is a prime number"<<endl;
    }
    else {
        cout<< c <<" is not a prime number "<<endl;
    }

    //monodimensional array

    int index_of = 5;
    cout <<"The "<<index_of<<"th"<<" Index of the Arrays are: "<<endl;
    ArraysEx1(index_of);

    //pascal triangle
  //  Pascal2(index_of);



    return 0;

}

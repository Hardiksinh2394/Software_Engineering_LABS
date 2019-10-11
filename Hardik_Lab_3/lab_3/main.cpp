
#include <iostream>
#include "lab_3.h"


using namespace std;


int main()
{
    int a = 66, b = 34;
    int *pa = &a, *pb = &b;                             // inputs to array


    //pointers as varaibles---------------------

    cout << "Value a before swap: " << a << endl;       //  values before swapping
    cout << "Value b before swap: " << b << endl;
    swap(*pa, *pb);
    cout << "Value a after swap: " << a << endl;        //  values after swapping
    cout << "Value b after swap: " << b << endl;

    //1.a> pointers as arrays -------------------------

    int arrA[] = {11, 22, 33, 44, 55};
    int arrB[] = {13, 15, 17, 19, 21};


    // 1.b> pointers dynamic array to find odd and even numbers---------------

    int n;
    int *c, *d;

    cout << "Enter no. of values for the array here: " << endl;
    cin >> n;
    c = new int [n];                                    // dynamic arrays
    d = new int [n];
                                                        //reading arrays by pointers
        for (int i = 0; i < n ; i++)
        {
            *(c + i) = i * 2;
            *(d + i) = i * 2 + 1;
        }

    cout << "The even array are: " << endl;             //displaying pointers
    DisplayPointerInfo(c, n);
    cout << "The odd array are: " << endl;
    DisplayPointerInfo(d, n);

    cout<<"  "<< endl;

   //2. swappig values of arrays by pointers -----------------------------

    cout << "Array A before swap: " << endl;            //  values in arrays before swapping
    DisplayPointerInfo(arrA, 5);
    cout << "Array B before swap: " << endl;
    DisplayPointerInfo(arrB, 5);
    SwapArray(arrA,arrB, 5);
    cout<<"  "<< endl;
    cout << "Array A after swap: " << endl;              //  values in arrays after swapping
    DisplayPointerInfo(arrA, 5);
    cout << "Array B after swap: " << endl;
    DisplayPointerInfo(arrB, 5);
    cout<<"  "<< endl;

    //3.1 Creating 1D array of n integers by pointers ------------------------------------

    int x;
    cout << "length of the array is: " << endl;
    cin >> x;
    int *pntr1 = CreateArray(x);                        //creating an array
    for (int i = 0 ; i < x ; i++)
        {
            *(pntr1+1)=i;
        }
    DisplayPointerInfo(pntr1, x);

    //3.2 Deleting 1D array of n integers by pointers -------------------------------------

    DeleteArray(pntr1);                                 //deleting an array


    //3.3 Creating a matrix n X m integers by pointers------------------------------------

    int **p, h, w;
        cout << "row of the matrix is: " << endl;
        cin >> h;
        cout << "column of the matrix is: " << endl;
        cin >> w;


        p = CreateMatrix(h, w);
        DisplayMatrix(p, h, w);

     //3.4 Deleting a matrix by pointers ------------------------------------

        DeleteMatrix(p);

       //Finding Dot product and innerproduct of 3D
        float *P = new float[3];
        float *Q = new float[3];
        P[0] = 1;
        P[1] = 1;
        P[2] = 0;
        Q[0] = 1;
        Q[1] = 1;
        Q[2] = 1;

        cout<< "Dot Product is:     " << endl;
        cout<< dot_product(P,Q,3) << endl;

         cout<< "Inner Product is:   " << endl;
          cout<< " " << endl;

         float *R = inner_product(P,Q,3);
         for (int i=0; i<n; i++, R++)
         {
             cout<< "value at index" << i << " is "<< *R << endl;
         }

}


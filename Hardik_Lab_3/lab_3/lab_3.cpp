#include <iostream>
#include "lab_3.h"


using namespace std;

//display pointers as varaibles---------------------

void DisplayPointerInfo (int *pntr, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        cout << *pntr++ << " ";
    }
    cout << endl;
}

void swap (int *xx, int *yy)
{
    int *t = xx;
    xx = yy;
    yy = t;
}
 //1.a> pointers as arrays :: SwapArray-------------------------

void SwapArray (int *xx, int *yy, int length)
{
    int temp, i;
    for (i = 0; i < length; i++)
        {
          temp = *xx;
          *xx = *yy;
          *yy = temp;
          *xx++;
          *yy++;
        }
}
 //3.1 Creating 1D array of n integers by pointers -------------------------
int* CreateArray (int n)
{
    int *pntr = new int[n];
    return pntr;
}
   //3.2 Deleting 1D array of n integers by pointers --------------------
void DeleteArray(int* p)
{
    delete p;
}
  //3.3 Creating a matrix n X m integers by pointers----------
int** CreateMatrix(int n, int m)
{
    int **a;
    a = new int* [n];
    for(int i = 0; i < n; ++i)
        a[i] = new int [m];
    return a;
}
   //3.4 Deleting a matrix by pointers -------------------------------
void DeleteMatrix(int** p)
{
    delete p;
}
 //3.5 Dispplaying a matrix n X m integers by pointers---------
void DisplayMatrix(int** p, int q, int r)
{
    for (int i = 0; i < q; ++i)
    {
        for(int j = 0; j < r; ++j)
        {
            cout << *(*(p + i) + j) << " ";
        }
        cout << endl;
    }
}


//Finding Dot product and innerproduct of 3D
float dot_product ( float *a, float *b, int n)
{
    float product(0);
    for (int i = 0; i < n; i++)
        product += a[i]*b[i];
        return product;
}
float *inner_product(float *a, float *b, int n)
{
    if ( n!= 3) return NULL;
        float *product = new float[3];
            product[0] = a[1] * b[2] - a[2]*b[1];
            product[1] = a[2] * b[0] - a[0]*b[2];
            product[2] = a[0] * b[1] - a[1]*b[0];
}

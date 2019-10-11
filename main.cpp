#include <QCoreApplication>
#include <iostream>
using namespace std;

int fact(int n, int k);
int n;
int main()
{
    long A;
    double long fact = 1;

    do{
       cout<<"Enter a number" << endl;
       cin >> A;
      }while (A < 0);

       for (int n = 1; n <= A; n++) // initialize i as 1; if i < or = A; Increment i by 1
     {
         fact *= n/k(n-k);
     }
       cout << "the factorial is" << fact << endl;




     return 0;
}


#include <iostream>
using namespace std;
#include <test.h>
#include <cmath>
#define psi (1+sqrt(5))/2.0


int min1 (int a,int b){
    if (a>b)
    { cout <<"the min of a and b is b: " << b << endl; }
     else{ cout <<"the min of a and b is a: " << a << endl;}
}
int max1 (int a,int b){
    if (a<b)
    { cout <<"the max of a and b is b: " << b << endl; }
     else{ cout <<"the max of a and b is a: " << a << endl; }
}

int mean (int a, int b){
    int r;
    r= (a+b)/2;
    return r;
}
int  nCr1(int n,int r){
    return (factorial1(n)/(factorial1(r)*factorial1(n-r)));
}
int  nCr2(int n,int r){
    return (factorial1(n+r-1)/(factorial1(r)* factorial1(n-1)));
}
int  nPr(int n,int r){
    return (factorial1(n)/(factorial1(n-r)));
}
long factorial1(int n){
    int c;
    long result=1;
    for(c=1; c<=n;c++){
        result=result*c;
    }
     return result;
}

double fibonacci(int n){
    if((n==1)||(n==0)) { return(n); }
    else return (fibonacci(n-1)+fibonacci(n-2));
}

void goldenRatio(){
    double ratio;
    int n(1);
    const double eps(1e-6);
    cout <<"iterating while || r-" <<psi <<"||" <<eps<<endl;
    do{
        ratio = fibonacci(n+1)/fibonacci(n);
        cout << ratio<< endl;
        n++;
    }while(abs(ratio-psi)>eps);

    cout<<"no of iterations:" <<n<<endl;
}
void PascalsTriangle (int n){
    int i,j,x;
    for(i=0;i<n;i++)
    {
        x=1;
        for(j=0;j<=i;j++)
        {
            cout << x << " ";
            x = nCr1(i,j) * (i - j) / (j + 1);
        }
        cout << endl;

    }
}


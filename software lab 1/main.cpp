
#include <iostream>

#include <test.h>
#include <string>
using namespace std;


int main()
{
    double y,z;
    float k;
     cout<<"enter a:";  cin >> y;
     cout<<"enter b:";  cin >> z;

  //----min/max/mean----
        k=min1(y,z);
        k=max1(y,z);
        k=mean(y,z);

        cout <<"the mean of a and b is k: " << k << endl;

  //----factorial----
        if (y>=0) { cout <<"factorial of a: " << factorial1(y)<<endl ;}

  //----nCr----
        if (y>=z) {
            cout <<"nCr1 : with no repetitions" << nCr1(y,z) <<endl;
            cout <<"nCr2 : with repetitions" << nCr2(y,z) <<endl;}
       else cout <<"nCr doesnot exist because r > n  :: b > a " << endl;

  //----nPr----
         if (y>=z) cout <<"nPr : " << nPr(y,z) <<endl;
         else cout <<"nPr doenot exist because r > n  :: b > a " << endl;

  //----Fibonacci----
        cout << "User Entered:: 'y' or 'a' numbers for Fibonacci series :: ";
        int i=0;
             while(i<y)
             {
                 cout<< " " << fibonacci(i)<<"";
                 i++;
             }
           cout << endl;

  // -------Fibonacci golden ratio------

cout << "Computing ratio of consecutive numbers :" <<endl;  goldenRatio() ;
cout << endl;

  //----Pascals Triangle---------
        PascalsTriangle(y);
           cout << endl;

//----- Strings ---------------
           string str1 = "Hello";
           string str2 = "World";
              string str3, str4;
              int  len ;


              // copy str1 into str3
              str3 = str1;
              cout << "str3 : " << str3 << endl;

              // concatenates str1 and str2
              str3 = str1 + str2;
              cout << "str3: str1 + str2 : " << str3 << endl;

              //append()str2 to str1
              str4 = str1.append(str2,3,2);
              cout << "str4 : " << str4 << endl;

              //insert()str2 to str1
              str2 = str3.insert(2,str4);
              cout << "str2 : " << str2 << endl;

              // total length of str3 after concatenation
              len = str3.length();
              cout << "str3.length() :  " << len << endl;

              // == operator for comparing
               if (str2 == str4)
                {cout << "equi : str2 ==str4 "<< endl;}
               else { cout << " str2 and str4 are not equal"<< endl;}


}

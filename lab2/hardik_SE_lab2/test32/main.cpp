#include <iostream>
using namespace std;


    int main()
    {
        const int ROW = 9, COL = 9;
        int k[ROW][COL] ={} ;
        k[0][0] = 0;
        cout << k[0][0] << endl;


        for ( int i = 1; i < ROW; i++ )
        {
            k[i][0] = 1;
            k[i][i] = 1;
            cout << k[i][0] << "   ";

            for ( int j = 1; j < COL; j++ )
            {
                k[i][j] = k[i-1][j] + k[i-1][j-1];
                cout << k[i][j] << "    ";
            }

            cout << k[i][i] << endl;
        }
     }

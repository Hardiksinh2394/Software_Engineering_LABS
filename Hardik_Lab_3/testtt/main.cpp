#include <iostream>
using namespace std;

void enterData(int firMat[][10], int secMat[][10], int rowFir, int colFir, int rowSec, int colSec);
void multiplyMatrices(int firtMat[][10], int secMat[][10], int multRes[][10], int rowFir, int columnFir, int rowSec, int colSec);
void display(int mult[][10], int rowFir, int colSec);

int main()
{
    int firMat[10][10], secMat[10][10], mult[10][10], rowFirst, colFir, rowSec, colSec, i, j, k;

    cout << "Enter rows and column for first matrix: ";
    cin >> rowFirst >> colFir;

    cout << "Enter rows and column for second matrix: ";
    cin >> rowSec >> colSec;

    // If colum of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again.
    while (colFir != rowSec)
    {
        cout << "Error! column of first matrix not equal to row of second." << endl;
        cout << "Enter rows and column for first matrix: ";
        cin >> rowFirst >> colFir;
        cout << "Enter rows and column for second matrix: ";
        cin >> rowSec >> colSec;
    }

    // Function to take matrices data
        enterData(firMat, secMat, rowFirst, colFir, rowSec, colSec);

        // Function to multiply two matrices.
        multiplyMatrices(firMat, secMat, mult, rowFirst, colFir, rowSec, colSec);

        // Function to display resultant matrix after multiplication.
        display(mult, rowFirst, colSec);

    return 0;
}

void enterData(int firMat[][10], int secMat[][10], int rowFir, int colFir, int rowSec, int colSec)
{
    int i, j;
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < rowFir; ++i)
    {
        for(j = 0; j < colFir; ++j)
        {
            cout << "Enter elements a"<< i + 1 << j + 1 << ": ";
            cin >> firMat[i][j];
        }
    }

    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < rowSec; ++i)
    {
        for(j = 0; j < colSec; ++j)
        {
            cout << "Enter elements b" << i + 1 << j + 1 << ": ";
            cin >> secMat[i][j];
        }
    }
}

void multiplyMatrices(int firMat[][10], int secMat[][10], int mult[][10], int rowFir, int colFir, int rowSec, int colSec)
{
    int i, j, k;

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < rowFir; ++i)
    {
        for(j = 0; j < colSec; ++j)
        {
            mult[i][j] = 0;
        }
    }

    // Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
    for(i = 0; i < rowFir; ++i)
    {
        for(j = 0; j < colSec; ++j)
        {
            for(k=0; k<colFir; ++k)
            {
                mult[i][j] += firMat[i][k] * secMat[k][j];
            }
        }
    }
}

void display(int mult[][10], int rowFirst, int columnSecond)
{
    int i, j;

    cout << "Output Matrix:" << endl;
    for(i = 0; i < rowFirst; ++i)
    {
        for(j = 0; j < columnSecond; ++j)
        {
            cout << mult[i][j] << " ";
            if(j == columnSecond - 1)
                cout << endl << endl;
        }
    }
}

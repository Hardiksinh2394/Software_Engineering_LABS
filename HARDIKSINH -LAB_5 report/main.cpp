#include <iostream>
#include "tut5.h"
using namespace std;


int main()
{

    cout << "   LAB 5: Sorting Algorithms" << endl;
    cout << endl;


    // 1. Preliminary work
    cout << "           1. Preliminary work: " << endl;
    cout << endl;
    // Display the values of the array
    CArray Sort_Arr;
    Sort_Arr.Display();
    cout << endl;

    // 2. Bubble Sort

    cout << "           2. Bubble Sort:" << endl;
    cout << endl;
    cout << "Performing Bubblesort... " << endl;
    cout << endl;
    cout << "After Bubblesort " << endl;
    Sort_Arr.BubbleSort();
    Sort_Arr.Display();
    cout << endl;

    // 3. Quicksort

    cout << "           3. Quick Sort:" << endl;

    cout << endl;
    cout << "Performing Quicksort... " << endl;
    cout << endl;
    cout << "After quick sort " << endl;
    Sort_Arr.QuickSort();
    Sort_Arr.Display();
    cout << endl;

    // 4. Selection Sort

    cout << "           4. Selection Sort:" << endl;
    cout << endl;
    cout << "Performing Selection Sort... " << endl;
    cout << endl;
    cout << "After Selection Sort " << endl;
    Sort_Arr.SelectionSort();
    Sort_Arr.Display();
    cout << endl;

    // 5. Insertion Sort

    cout << "           5. Insertion Sort:" << endl;
    cout << endl;
    cout << "Performing Insertion Sort... " << endl;
    cout << endl;
    cout<< "After Insertion Sort " <<endl;
    Sort_Arr.InsertionSort();
    Sort_Arr.Display();
    cout << endl;


    // 6. Sort using binary trees
    cout << "           6. Sort using Binary trees:" << endl;
    cout << endl;
    cout << "Performing Binary Sort... " << endl;
    cout << endl;
    cout<< "After Binary Sort " <<endl;
    Sort_Arr.BinarySort();
    Sort_Arr.Display();
    cout << endl;


    return 0;

}

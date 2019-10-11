#ifndef TUT5_H
#define TUT5_H
class Node
{
public:
    int Data;
    Node *left;
    Node *right;
};


class CArray
{
public:

    // 1. Preliminary work

    int* Arr;
    unsigned int noelements;

    CArray();
    CArray(unsigned int);

    // Randomly initializes the array between 10-20 elements
    void Builder();
    // Randomly initializes the array with given size
    void Builder(unsigned int);

    // To Display the array
    void Display() const;

    // 2. A First and Simple Algorithm: Bubble Sort
    void Swap(unsigned int, unsigned int);
    void BubbleSort();

    // 3. Quicksort
    void Recursively_Sort(int*, unsigned int, unsigned int);
    int Recursive_Sort_Partition(int*, unsigned int, unsigned int);
    void QuickSort();

    // 4. Selection Sort
    void SelectionSort();

    // 5. Insertion Sort
    void InsertionSort();

    // 6. Sort using binary trees
    Node *CreateNode(int);
    void Store_value(Node *, int *, int &);
    Node *Insert_value(Node *, int );
    void BinarySort();


};

#endif // TUT5_H

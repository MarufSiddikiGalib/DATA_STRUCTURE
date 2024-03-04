#include<iostream>
#include"arrayImplement.h"
using namespace std;

int main()
{

    int arr1size=5;
    int arr1[arr1size]={12, 34, 89, 69, 100};

    int arr2size=10;
    int arr2[arr2size];

    int key1;
    cout << "Search key: ";
    cin >> key1;

    print1DArray(arr1, arr1size);
    reversePrint1DArray(arr1, arr1size);
    searchIn1DArray(arr1, arr1size, key1);
    findMax1DArray(arr1, arr1size);
    findMin1DArray(arr1, arr1size);
    copy1DArray(arr1, arr2, arr1size);
    input1DArray(arr1, arr1size);

    int arr3size;
    cout << "Enter size of 2D Array: ";
    cin >> arr3size;

    int **arr3 = new int *[arr3size];
    int **arr4 = new int *[arr3size];


    for(int i=0; i<arr3size; i++){
        arr4[i]=new int[arr3size];
    }

    input2DArray(arr3, arr3size);

    int key2;
    cout << "Enter key: ";
    cin >> key2;

    print2DArray(arr3, arr3size);
    reversePrint2DArray(arr3, arr3size);
    findMax2DArray(arr3, arr3size);
    findMin2DArray(arr3, arr3size);
    searchIn2DArray(arr3, arr3size, key2);
    copy2DArray(arr3, arr4, arr3size);

    return 0;
}

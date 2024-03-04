#include<iostream>
#include<algorithm>
using namespace std;


void print1DArray(int *array, int size)
{

    cout << "1D Array: ";
    for(int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void reversePrint1DArray(int *array, int size)
{

    cout << "Rev 1D Array: ";
    for(int i=size-1; i>=0; i--)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void input1DArray(int *array, int size)
{

    cout << "Input 1D Array: ";
    for(int i=0; i<size; i++)
    {
        cin >> array[i];
    }
    cout << "\nThe array:";
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void searchIn1DArray(int *array, int size, int searchKey)
{
    int flag=0;
    for(int j=0; j<size; j++)
    {
        if(array[j]==searchKey)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout << "Element was found!";
    }
    else
    {
        cout << "Element was not found";
    }
    cout << endl;
}

void findMax1DArray(int *array, int size)
{
    int temp;
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1-i; j++)
        {
            if(array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    cout << "\nMax element: " << array[size-1];
    cout << endl;
}

void findMin1DArray(int *array, int size)
{
    int temp;
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1-i; j++)
        {
            if(array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    cout << "\nMin element: " << array[0];
    cout << endl;
}

void copy1DArray(int *sourceArray, int *destinationArray, int size)
{
    for(int i=0; i<size; i++)
    {
        destinationArray[i]=sourceArray[i];
    }
    cout << "\nCopy array: ";
    for(int i=0; i<size; i++)
    {
        cout << destinationArray[i] << " ";
    }
    cout << endl;

}










void print2DArray(int **array, int size)
{
    int row=size;
    int col=size;
    cout << "2D array:" << endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void reversePrint2DArray(int **array, int size)
{
    int row=size;
    int col=size;
    cout << "Rev 2D array: " << endl;
    for(int i=row-1; i>=0; i--)
    {
        for(int j=col-1; j>=0; j--)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;;
    }
}

void input2DArray(int **array, int size)
{
    int row=size;
    int col=size;
    cout << "Enter elements: " << endl;
    for(int i=0; i<row; i++)
    {
        array[i] = new int[col];
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++)
        {
            cin >> array[i][j];
        }
    }
}

void searchIn2DArray(int **array, int size, int searchKey){
    int flag=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(array[i][j]==searchKey)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        cout << "Element was found!" << endl;
    }
    else
    {
        cout << "Element was not found!" << endl;
    }
}

void findMax2DArray(int **array, int size)
{
    int row=size;
    int col=size;

    int max;
    max = array[0][0];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(array[i][j]>max)
            {
                max = array[i][j];
            }
        }
    }
    cout << "Maximum Value : " << max << endl;
}

void findMin2DArray(int **array, int size)
{
    int row=size;
    int col=size;

    int min;

    min = array[0][0];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(array[i][j]<min)
            {
                min = array[i][j];
            }
        }
    }
    cout << "Minimum Value: " << min << endl;
}



void copy2DArray(int **sourceArray, int **destinationArray, int size){
    int row=size;
    int col=size;
    copy(sourceArray, sourceArray+size, destinationArray);

    cout << "Copied Array:\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << destinationArray[i][j] << " ";
        }
        cout << endl;
    }
}

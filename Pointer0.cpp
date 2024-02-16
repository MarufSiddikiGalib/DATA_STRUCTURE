#include <iostream>

using namespace std;



int main() {

    int a[5] = { 5 , 6 , 7 , 8 ,9};

    int *arr;

    arr= a;


       cout << arr << endl;

       cout << "Displaying data: " << endl;



       for (int i = 0; i < 5; ++i) {

          cout << *(arr + i) << endl ;
       }



        int var = 5;

         int* pointer;

         pointer = &var;

          cout << "var = " << var << endl;

          cout << "*pointer = " << *pointer << endl;

            var = 45;

          cout << "var = " << var << endl;

          cout << "*pointer = " << *pointer << endl;

          *pointer = 16;

           cout << "var = " << var << endl;

           cout << "*pointer = " << *pointer << endl;

           cout << "pointer = " << pointer << endl;

            cout << &pointer;

return 0;

}

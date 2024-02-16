#include <iostream>
using namespace std;




int main(){


    int n, A[n],key,i;
     cin>>n;


       for(int j=1; j<n; i++){

          key = A[j];
           i= j-1;


         while(int i=1; A[i]>key; i++){
             A[i+1] = A[i];
             i = i-1;
         }

         A[i+1] = key;

       }
         for(int i=0; i<n; i++){
            cout<<A[n];

         }

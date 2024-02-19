#include<iostream>
using namespace std;

int main(){

   int n;
   cin>>n;

   int arr[n];

   for(int i=0; i<n; i++){
      cin>>arr[i];

   }
     int comp = 1;
     while(comp<n){
        for(int i=0; i<n-comp; i++){
           if(arr[i]>arr[i+1]){
              int temp = arr[i];
              arr[i] = arr[i+1];
              arr[i+1] = temp;
           }
        }
        comp ++;
     }

     for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;

    }
    return 0;
}

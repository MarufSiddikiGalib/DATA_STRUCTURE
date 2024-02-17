#include<iostream>
using namespace std;

int main(){

    char Qustion[] = "PLEASE ENTER FIRST NAME :";

    char Greeting[] = "Hello";
    char Firstname[80];

    cout<<Qustion;

    cin>>Firstname;
    //cin.get(Firstname,80);

    cout<<Greeting<<","<<Firstname;

return 0;
}

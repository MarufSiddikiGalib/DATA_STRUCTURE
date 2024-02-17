#include<iostream>
using namespace std;


int main(){

   string text = "I am a student";

       cout<<text<<endl;

       int rev=0;
       char x;

       for(int i=0; i<text.length(); i++){

           rev=text[i]+2;
           x=rev;
           cout<<x;
       }



return 0;
}

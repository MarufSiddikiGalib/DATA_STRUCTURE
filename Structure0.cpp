#include<iostream>
using namespace std;


  struct student{
      int id;
      float cgpa;
      string name;


  };

int main(){

   student s1;

   s1.name = "Galib";
   s1.id = 22464011;
   s1.cgpa = 3.01;

   cout<<s1.name<<endl;
   cout<<s1.id<<endl;
   cout<<s1.cgpa<<endl;

}

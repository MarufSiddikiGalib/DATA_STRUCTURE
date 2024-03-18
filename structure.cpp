#include<iostream>
using namespace std;


  struct student{
      int id;
      float cgpa;
      string name;


  };

int main(){

  // student s1;

  // s1.name = "Galib";
  // s1.id = 22464011;
  // s1.cgpa = 3.01;

  // cout<<s1.name<<endl;
  // cout<<s1.id<<endl;
  // cout<<s1.cgpa<<endl;

   //student s2;
   student s2[3];
    for(int i=0; i<3; i++){

        cout<<"ENTER NAME: " <<endl;
        cin>>s2[i].name;

        cout<<"ENTER CGPA : "<<endl;
        cin>>s2[i].cgpa;
        }

        cout<<"SCHOLLERSHIP STUDENTS ARE :"<<endl;
         for(int i=0; i<3; i++){

        if(s2[i].cgpa >= 3.75){
            cout<<s2[i].name<<":"<<s2[i].cgpa<<endl;
        }
         }



return 0;
}


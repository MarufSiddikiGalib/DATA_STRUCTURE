#include<iostream>
using namespace std;



struct student{
    int id;
   float cgpa;
   string name;

};
int main(){

   int n;

   cout<<"ENTER TOTAL STUDENT : "<<endl;
   cin>>n;
   student s1[n];

   for(int i=0; i<n; i++){

        cout<<"ENTER NAME : "<<endl;
         cin>>s1[i].name;

        cout<<"ENTER CGPA : "<<endl;
         cin>>s1[i].cgpa;

         }

       cout<<"SCHOOLLERSHIP STUDENTS ARE : "<<endl;
           for(int i=0; i<n; i++){

              if(s1[i].cgpa >= 3.75){
                  cout<<s1[i].name<<":"<<s1[i].cgpa<<endl;

              }
           }







return 0;
}

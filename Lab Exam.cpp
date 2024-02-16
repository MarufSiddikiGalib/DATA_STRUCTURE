#include <iostream>
using namespace std;


struct student{
   int id;
   int credit;
   float marks;
   float A, a, B, b, C, c, D, d, F, I, W, UW;
   float gp;
};
int main(){

   int n, i;
   //float A, a, B, b, C, c, D, d, F, I, W, UW;

   cout<<"TOTAL NUMBER OF COURSE : "<<endl;
   cin>>n;
   student s1[n];
   student s2[n];
   student s3[n];

   for(int i=0; i<n; i++){

        cout<<"Marks of the course : "<<endl;
         cin>>s1[i].marks;

        cout<<"Credit of the course : "<<endl;
         cin>>s2[i].credit;

         }
           s3[i].A = 4.00;
           s3[i].a = 3.75;
           s3[i].B = 3.50;
           s3[i].b = 3.25;
           s3[i].C = 3.00;
           s3[i].c = 2.75;
           s3[i].D = 2.50;
           s3[i].d = 2.25;
           s3[i].F = 0.00;



           for(int i=0; i<n; i++){

              if(s1[i].marks >= 90){
                  cout<<"Grade: A+"<<","<<"Grade points:"<<s3[i].A<<endl;

              }
               else if(s1[i].marks >= 85){
                    cout<<"Grade: A"<<","<<"Grade points:"<<s3[i].a<<endl;


              }
              else if(s1[i].marks >= 80){
                    cout<<"Grade: B+"<<","<<"Grade points:"<<s3[i].B<<endl;


              }
              else if(s1[i].marks >= 75){
                    cout<<"Grade: B"<<","<<"Grade points:"<<s3[i].b<<endl;


              }
              else if(s1[i].marks >= 70){
                    cout<<"Grade: C+"<<","<<"Grade points:"<<s3[i].C<<endl;


              }
              else if(s1[i].marks >= 65){
                    cout<<"Grade: C"<<","<<"Grade points:"<<s3[i].c<<endl;


              }
              else if(s1[i].marks >= 60){
                    cout<<"Grade: D+"<<","<<"Grade points:"<<s3[i].D<<endl;


              }
              else if(s1[i].marks >= 50){
                    cout<<"Grade: D"<<","<<"Grade points:"<<s3[i].d<<endl;


              }

           }

            //int gpa = ( s* credit)/





return 0;
}

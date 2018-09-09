//to write a program with a function that take two integer value and add the two integer using reference variable

//include library
#include<iostream>

//use of standard library
using namespace std;
//prototype
void add(int,int);
int main(){
           //define class 
           int a,b,sum;
           
          //print aand b;
          cout<<"enter the value of a and b"<<endl;
          //store the values in variables
          cin>>a>>b;
          //call function
          add(a,b);
          return 0;
          }

    
   //define function      
   void add(int x,int y){
   int sum;
   sum=x+y;
   cout<<"the sum is"<<sum;
   }

          

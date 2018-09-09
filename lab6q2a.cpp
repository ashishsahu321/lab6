//to write a program with a function that take two integer value and return the sum

//include library
#include<iostream>

//use of standard library
using namespace std;
//prototype
int add(int,int);
int main(){
           //define class 
           int a,b,sum;
           
          //print a and b;
          cout<<"enter the value of a and b"<<endl;
          //store the values in variables
          cin>>a>>b;
          //call function
          sum=add(a,b);
          //print result
          cout<<"the sum of two no is"<<sum;
          }

    
   //define function      
   int add(int x,int y){
    return(x+y);
   }

          

//to write program that takes two parameter and find maximum of two number using a reference variable.
 

//include library
#include<iostream>
//include standard library
using namespace std;
  
//prototype of function
void maximum(int&,int&,int&);

//start
int main(){
           //define class of parameter
           int a,b,max;
           //print a and b;
           cout<<"enter the value of aand b"<<endl;
           //store value in parameter
           cin>>a>>b;
           //call function
           maximum(a,b,max);
           cout<<"the maximum of two number is"<<max;
           return 0 ;
           }

//define function 
void maximum(int &x,int &y,int &max){

if(x>y)
max=x;
else
max=y;

}

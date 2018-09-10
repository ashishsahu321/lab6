//to write program that takes two parameter and find and return minimum of two number.
 

//include library
#include<iostream>
//include standard library
using namespace std;
  
//prototype of function
int minimum(int,int);

//start
int main(){
           //define class of parameter
           int a,b,min;
           //print a and b;
           cout<<"enter the value of aand b"<<endl;
           //store value in parameter
           cin>>a>>b;
           //call function
           min=minimum(a,b);
           cout<<"the minimum is "<<min;
           }

//define function 
int minimum(int x,int y){
if(x<y)
return x;
else
return y;
}

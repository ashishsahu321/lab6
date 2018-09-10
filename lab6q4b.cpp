//to write program that takes two parameter and find minimum of two number using a reference variable.
 

//include library
#include<iostream>
//include standard library
using namespace std;
  
//prototype of function
void minimum(int&,int&,int&);

//start
int main(){
           //define class of parameter
           int a,b,min;
           //print a and b;
           cout<<"enter the value of aand b"<<endl;
           //store value in parameter
           cin>>a>>b;
           //call function
           minimum(a,b,min);
           cout<<"the minimum of two number is"<<min;
           return 0 ;
           }

//define function 
void minimum(int &x,int &y,int &min){

x<y?min=x:min=y;
}

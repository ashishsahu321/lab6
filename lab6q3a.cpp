//to write program that takes two parameter and find and return maximum of two number.
 

//include library
#include<iostream>
//include standard library
using namespace std;
  
//prototype of function
int maximum(int,int);

//start
int main(){
           //define class of parameter
           int a,b,max;
           //print a and b;
           cout<<"enter the value of aand b"<<endl;
           //store value in parameter
           cin>>a>>b;
           //call function
           max=maximum(a,b);
	cout <<"Max number is: "<<max<<endl;
           }

//define function 
int maximum(int x,int y){
if(x>y){
return x;
}
else {
return y;
}
}

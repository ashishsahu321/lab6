//write a programe that includes three function i.e addition,maximum and minimum of two number

//include library
#include<iostream>
//include standard library
using namespace std;
//define function-1
int add(int x,int y){
return (x+y);
}
//define function-2
int maximum(int x,int y){
if(x>y)
return x;
else
return y;
}
//define function-3 
int minimum(int x,int y){
if(x<y)
return x;
else
return y;
}

int main() {
      int a,b,sum,max,min,i;
      cout<<"enter the value of a, b"<<endl;
      cin>>a>>b;
      cout<<"to call function 1,function 2 and function 3     press   1,2 and 3 respectively";
       cin>>i;      

      if(i==1){
              cout<<"apply function 1"<<endl;
              sum=add(a,b);
              cout<<"sum is "<<sum;
             
              }
        
       else if(i==2){
                    cout<<"apply function 2"<<endl;
                    max=maximum(a,b);
                    cout<<"maximum of two number is"<<max;
                    }
       else if(i==3){
                    cout<<"apply function 3"<<endl;
                    min=minimum(a,b);
                    cout<<"minimum of two number is"<<min;
                    }

       else
           cout<<"invalid input of i";

return 0;
}










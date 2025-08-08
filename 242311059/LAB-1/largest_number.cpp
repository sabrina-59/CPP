#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<"enter first number ";
    cin>>a;
    cout<<"enter second number ";
    cin>>b;
    cout<<"enter third number ";
    cin>>c;
   if((a>c)&&(a>b)){
   cout<<a<< " is the largest number";

   }
    else if((b>c)&&(b>a)){
    cout<<b<< " is the largest number";

   }
   else{
    cout<<c<<" is the largest number";
   }
   return 0;
}
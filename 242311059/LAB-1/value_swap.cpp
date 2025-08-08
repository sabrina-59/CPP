#include<iostream>
using namespace std;
int main()
{

    int a,b;
    cout<<"Enter values"<<endl;
    cin>>a>>b;
    cout<<"Before swapping "<<endl;
    cout<<"First value "<<a<<endl;
    cout<<"Second value "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping "<<endl;
    cout<<"First value "<<a<<endl;
    cout<<"Second value "<<b<<endl;



    return 0;
}

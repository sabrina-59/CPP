#include<iostream>
using namespace std;
int main()
{
    int a,even=0,odd=0;
    cout<<"Enter array size ";
    cin>>a;
    int arr[a];
    for(int i=0 ; i<a ; i++)
    {
        cin>>arr[i];
    }
    for(int i=0 ; i<a ; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout<<"Even : "<<even<<" ,"<<" Odd : "<<odd;
    return 0;
}

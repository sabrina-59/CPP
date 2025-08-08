#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the array size ";
    cin >> a;
    int arr[a];
    for(int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int large_1=arr[0];
    int large_2=arr[0];
    for(int i = 0; i < a; i++)
    {
        if(arr[i]>large_1)
        {
            large_1=arr[i];
        }
    }
    for(int i = 0; i < a; i++)
    {
        if(arr[i]<large_1 && arr[i]>large_2)
        {
            large_2=arr[i];
        }
    }
    cout<<large_2;

    return 0;
}


#include<iostream>
using namespace std;
int main()
{

    int a;
    cout<<"Enter the array size ";
    cin>>a;
    int arr[a];

    for(int i=0 ; i<a ; i++)
    {

        cin>> arr[i];

    }
    for(int j=0 ; j<a/2 ; j++)
    {

        int temp;
        temp = arr[j];
        arr[j] = arr[a-1-j];
        arr[a-1-j] = temp;

    }
    for(int i=0 ; i<a ; i++)
    {

        cout<<arr[i]<<"  ";
    }

    return 0;


}


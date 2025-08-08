#include<iostream>
using namespace std;
int main()
{

    int a,sum=0;
    cout<<"Enter the array size ";
    cin>>a;
    int arr[a];

    for(int i=0 ; i<a ; i++)
    {

        cin>> arr[i];

    }
    for(int j=0 ; j<a ; j++){
        sum = sum+arr[j];
    }
    cout <<"sum of all elements of the array is "<<sum;


    return 0;


}

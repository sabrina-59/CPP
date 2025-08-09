#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"How many elements are in the shelf?  ";
    cin>>a;
    int j=a;
    int arr[a+1];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    cout<<"Shelf: "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
    int item,location;
    cout<<"\nEnter the element do you want to insert :";
    cin>>item;
    cout<<"Enter the location of the element :";
    cin>>location;
    for(int i=location;i<a+1;i++)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[location]=item;
    cout<<"New shelf after inserting: "<<endl;
    for(int i=0;i<a+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

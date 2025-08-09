
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"How many elements are in the shelf?  ";
    cin>>a;
    int j=a;
    int arr[a];
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
    cout<<"\nEnter the element you want to delete :";
    cin>>item;
    cout<<"Enter the location of the element :";
    cin>>location;
    item=arr[location];
    a=a-1;
    for(int i=location;i<a;i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<"New shelf After deleting : "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter Array size : ";
    cin>>a;
    int arr[a];
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array: "<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<arr[i]<<" ";
    }
    int item,location;
    cout<<"\nEnter the element you want to search :";
    cin>>item;
    int Beg=0,End=a-1,Mid=0;
    while(Beg<=End)
    {
        Mid=int((Beg+End)/2);
        if(arr[Mid]==item)
        {
            location=Mid;
            break;
        }
        else if(item<arr[Mid])
        {
            End=Mid-1;
        }
        else
        {
            Beg=Mid+1;
        }

    }

    cout<<"Location: "<<location;
    return 0;
}

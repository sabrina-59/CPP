
#include<iostream>
using namespace std;
int main()
{

    int a, key, index = -1;
    cout<<"Enter the array size ";
    cin>>a;
    int arr[a];

    for(int i=0 ; i<a ; i++)
    {

        cin>> arr[i];


    }
    cout<<"Key = ";
    cin>>key;
    for(int i=0 ; i<a ; i++)
    {

        if(arr[i] == key)
        {

           index = i;
           break;
        }

    }
if(index != -1){
    cout<<index;
}
else{
    cout<<"-1";
}



    return 0;


}

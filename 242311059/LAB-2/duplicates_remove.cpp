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
    int new_arr[a];
    int uniqueCount = 0;

    for(int i = 0; i < a; i++)
    {
        bool isDuplicate = false;
        for(int j = 0; j < uniqueCount; j++)
        {
            if(arr[i] == new_arr[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate)
        {
            new_arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }
    for(int i = 0; i < uniqueCount; i++)
    {
        cout << new_arr[i] << " ";
    }
    cout << endl;

    return 0;
}

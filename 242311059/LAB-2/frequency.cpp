#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter array size ";
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    int uni_que[a];
    int freq[a];
    int uniqueCount = 0;

    for (int i = 0; i < a; i++)
    {
        int j;
        for (j = 0; j < uniqueCount; j++)
        {
            if (uni_que[j] == arr[i])
            {
                freq[j]++;
                break;
            }
        }
        if (j == uniqueCount)
        {
            uni_que[uniqueCount] = arr[i];
            freq[uniqueCount] = 1;
            uniqueCount++;
        }
    }

    cout << "{";
    for (int i = 0; i < uniqueCount; i++)
    {
        cout << uni_que[i] << ": " << freq[i];
        if (i != uniqueCount - 1) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}



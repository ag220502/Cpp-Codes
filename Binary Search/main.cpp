#include<iostream>
using namespace std;
int main()
{
    int count, i, arr[30], num, first=0, last, middle;
    cout<<"Enter number of  elements : ";
    cin>>count;
    for (i=0; i<count; i++)
    {
        cout<<"Enter number "<<(i+1)<<" : ";
        cin>>arr[i];
    }
    cout<<"Enter the number that you want to search:";
    cin>>num;
    last = count-1;
    middle = (first+last)/2;
    while (first <= last)
    {
        if(arr[middle]<num)
        {
            first = middle + 1;
        }
        else if(arr[middle] == num)
        {
            cout<<num<<" found in the array at the location "<<middle+1<<" .\n";
            break;
        }
        else {
            last = middle - 1;
        }
        middle = (first + last)/2;
    }
    if(first > last)
    {
        cout<<num<<" not found in the array";
    }
    return 0;
}

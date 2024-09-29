#include<bits/stdc++.h>
using namespace std;
// void swap(int &a, int &b)
// {
//     int temp = a;
//     a= b;
//     b= temp;
// }
void insertionsort(int n, int arr[])
{
    for(int i=1; i<n; i++)
    {
        for(int j=i ; j>0 ; j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp = arr[j];
                arr[j]= arr[j-1];
                arr[j-1]=temp;
            }
            else
                break;
        }
    }
}
int main()
{
    int n;
    cout<<"enter the size of the array ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        cout<<"Enter the array elements ";
        cin>>arr[i];
    }
    insertionsort(n,arr);
    cout<<"the sorted array is";
    for(int i = 0 ;i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
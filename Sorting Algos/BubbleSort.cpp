#include<bits/stdc++.h>
using namespace std;
void Bubblesort(int n,  int arr[])
{
    for(int i = 0 ; i<n-1; i++){
        for(int j = 0 ; j<n-1-i ; j++)
        {
            int swap =0; 
            
            if(arr[j]>arr[j+1])
            {
               
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
                swap = swap+1;
            }
            if(swap==0)
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
    Bubblesort(n,arr);
    cout<<"the sorted array is";
    for(int i = 0 ;i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

}
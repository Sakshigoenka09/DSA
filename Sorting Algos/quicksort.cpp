#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j)
    {
        while(arr[i]<= pivot && i<=high)
        {
            i++;
        }
        while(arr[j]> pivot && j>=low)
        {
            j--;
        }
        if(i<j){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i]= temp;
        }
        
    }
    int temp = arr[low];
    arr[low]= arr[j];
    arr[j]= temp;
    return j;
    
}
void quicksort(int arr[], int low, int high)
{
    if(low<high)
    {
        int partIndex =  partition(arr,low,high);
        quicksort(arr,low,partIndex-1);
        quicksort(arr,partIndex+1,high);
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
    quicksort(arr,0,n-1);
    cout<<"the sorted array is";
    for(int i = 0 ;i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
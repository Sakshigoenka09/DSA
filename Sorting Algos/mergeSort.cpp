#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low,int mid,int high)
{
    vector<int>temp;
    
    int left = low;
    int right= mid+1;
    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
         
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            
            right++;
        }
    }
    while(left<= mid)
    {
        temp.push_back(arr[left]);
        left++;
       
    }
    while(right<= high)
    {
        temp.push_back(arr[right]);
        right++;
        
    }
    for(int k = low ; k<=high ; k++)
    {
        arr[k]= temp[k-low];
    }
    
    
    
}
void mergesort(vector<int>& arr, int low,int high )
{
    if(low >= high)
        return;
    int mid= (low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main()
{
    int n;
    cout<<"enter the size of the array ";
    cin>>n;
    // int arr[n];
    int k= 0;
    vector<int>arr;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<"Enter the array elements ";
        cin>>k;
        arr.push_back(k);
    }
    
    mergesort(arr,0,n-1);
    cout<<"the sorted array is"<<" ";
    
    for(int i =0  ;i<arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
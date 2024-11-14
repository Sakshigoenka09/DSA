#include<bits/stdc++.h>
using namespace std;
int recBs(vector<int>&arr, int low,int high, int target )
{
    if(low > high)
    {
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid]== target)
    {
        return mid;
    }
    else if (arr[mid]> target)
    {
        return recBs(arr,low, mid-1, target);
    }
    else
        return recBs(arr,mid+1, high, target);
}
int main()
{
    vector<int>arr;
    int n;
    cout<<"Enter the size of the array"<<" ";
    cin>>n;
    for(int i = 0 ;  i< n ; i++)
    {
        cout<<"Enter the elements"<<" ";
        int m;
        cin>>m;
        arr.push_back(m);
    }
    int target= 0;
    cout<<"enter the target"<<" ";
    cin>>target;
    int ans = recBs(arr,0,n-1,target);
    cout<<"The index of the target is "<<ans;
}
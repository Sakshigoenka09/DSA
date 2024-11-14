#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& arr, int& target)
{
    int low = 0, high = arr.size()-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]== target)
            return mid;
        else if (arr[mid]>target)
            high= mid-1;
        else
            low = mid+1;
    }
    return -1;
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
    int ans = binarySearch(arr, target);
    cout<<"The index of the target is "<<ans;
}
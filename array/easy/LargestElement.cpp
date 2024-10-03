#include<bits/stdc++.h>
using namespace std ;
int largestElement(vector<int>& arr)
{
    int max= INT_MIN;
    for(int i = 0;i<arr.size() ; i++)
    {
        if(arr[i]>max)
        {
            max=  arr[i];
        }
    }
    return max;
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
        int m ;
        cin>>m;
        arr.push_back(m);
    }
    int ans = largestElement(arr);
    cout<<"the largest element is "<<ans;
}
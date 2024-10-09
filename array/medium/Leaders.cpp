// Here we find the leaders in the array, a leader means if it is greater than all the elements on its right side
// or if it is equal to the maximum element on its right side..

#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int>& arr, int n)
{
    vector<int>ans;
    int maxi=arr[n-1];
    ans.push_back(arr[n-1]);
    for(int i =n-2; i>=0; i--)
    {
        if(arr[i]>=maxi)
        {
            ans.insert(ans.begin(), arr[i]);
            maxi= arr[i];
        }
        
    }
    return ans;
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
    
    vector<int>ans = leaders(arr, n);
    cout<<"The leaders in the array are "<<endl;
    for(int i = 0 ; i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
}
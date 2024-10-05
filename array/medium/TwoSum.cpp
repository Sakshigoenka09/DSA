#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int>& nums, int n, int target)
{
    unordered_map<int,int>mp;
    for(int i = 0 ; i<nums.size() ; i++)
    {
        int sum = target- nums[i];
        if(mp.find(sum) != mp.end())
        {
            return{mp[sum], i};
        }
        mp.insert({nums[i],i});
    }
    return {};
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
    int k=0;
    cout<<"Enter the target value"<<" ";
    cin>>k;
    vector<int> ans = twosum(arr,n,k);
    cout<<"The indices of the two numbers that add up to target  "<<ans[0]<<" "<< ans[1];
}

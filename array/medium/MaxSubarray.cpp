//Here we need to find the largest sum of a subarray .. and we will be using kadane's algorithm to solve this probelm.

#include<bits/stdc++.h>
using namespace std;
int maxsubarray(vector<int>& nums)
{
    int maximum= nums[0];
        int sum =0;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            sum = sum+nums[i];
            maximum= max(sum,maximum);
            if(sum<0)
            {
                sum =0;
            }
        }
        return maximum;
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
    
    int ans = maxsubarray(arr);
    cout<<"The largest sum of the subarray is "<<ans;
}
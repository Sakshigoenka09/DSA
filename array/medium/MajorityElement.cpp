// Given an array of size n , we need to return the the majority element that appears more than ⌊n / 2⌋ times. 
// We'll use Moore's Voting Algorithm.
#include<bits/stdc++.h>
using namespace std;
int majorityelement(vector<int>& nums)
{
    int count = 0 ; 
    int majorityElement;
    for(int i=0 ; i<nums.size() ; i++)
    {
        if(count == 0) 
        {
            count=1;
            majorityElement= nums[i];
        }
        else if(nums[i]== majorityElement)
        {
            count++;
        }
        else
            count--;
    }
    return majorityElement;
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
    
    int ans = majorityelement(arr);
    cout<<"The Majority element in the array is "<<ans;
}
// Here we need to sort the array in-place so that objects of the same color are adjacent, 
// with the colors in the order red(0), white(1), and blue(2).
// So to Solve this problem i'll use DNF(Dutch National Flag) algorithm, which uses the three-pointer approach
// to sort the array with three numbers in O(n) complexity.

#include<bits/stdc++.h>
using namespace std;
vector<int> sortcolors(vector<int>& nums)
{
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid]==2)
        {
            swap(nums[mid],nums[high]);
            high--;
        }
        else
        mid++;
    }
    return nums;
}
int main()
{
    vector<int>arr;
    int n;
    cout<<"Enter the size of the array"<<" ";
    cin>>n;
    for(int i = 0 ;  i< n ; i++)
    {
        cout<<"Enter the Array elements which includes only 0 1 2 "<<" ";
        int m ;
        cin>>m;
        arr.push_back(m);
    }
    
    vector<int> ans = sortcolors(arr);
    cout<<"The Sorted array is  "<<endl;
    for(int i= 0 ; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}
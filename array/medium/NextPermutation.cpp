// here we are finding the next permutation !!

#include<bits/stdc++.h>
using namespace std ;
void nextpermutation(vector<int>& nums)
{
    int n = nums.size();
    int index= -1;
    for(int i = n-2 ; i>=0; i--)
    {
        if(nums[i]<nums[i+1])
        {
            index = i;
            break;
        }
    }
    if(index ==-1)
    {
        reverse(nums.begin(), nums.end());
        return ;
    }
    for(int i= n-1; i>index; i--)
    {
        if(nums[i]>nums[index])
        {
            swap(nums[i], nums[index]);
            break;
        }
    }
    reverse(nums.begin()+index+1, nums.end());
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
    
    nextpermutation(arr);
    cout<<"The next permuatation is  "<<endl;
    for(int i = 0 ; i<arr.size() ; i++)
    {
        cout<<arr[i]<<" "; 
    }
}
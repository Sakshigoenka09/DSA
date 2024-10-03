// to find the total no of unique elements
#include<bits/stdc++.h>
using namespace std;
int uniques(vector<int>& nums)
{
    int i =0, j =0;
        int n= nums.size();
        while(i<n && j<n)
        {
            if(nums[i]!=nums[j])
            {
                nums[i+1]= nums[j];
                i++;
            }
            j++;
        }
        return i+1;
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
    int ans = uniques(arr);
    cout<<"Total no of unique elements are  "<<ans<<endl;
    cout<<"The unique elements are:";
    for(int i =0  ;i<ans ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
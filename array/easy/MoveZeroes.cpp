#include<bits/stdc++.h>
using namespace std;
void movezeroes(vector<int>& nums, int n)
{
    int i = 0;
    for(int j = 0; j<n ; j++)
    {
        if(nums[j]!= 0)
        {
            swap(nums[i],nums[j]);
            i++;
        }
    }
    
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
    movezeroes(arr,n);
    cout<<"After moving all the zeroes at the end"<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}
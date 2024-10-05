#include<bits/stdc++.h>
using namespace std;
int lenoflongsubarr(vector<int>& arr, int N , int k)
{
    int j =0;
        unordered_map<int,int>sub;
        int sum = 0;
        for(int i = 0 ; i<N ; i++)
        {
            sum= sum+arr[i];
            if(sum==k)
            {
                j= i+1;
            }
            if(sub.find(sum - k) != sub.end()) 
            {
                j = max(j, i - sub[sum - k]);
            }
            if(sub.find(sum) == sub.end()) 
            {
                sub[sum] = i;
            }
        }
        return j;
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
    cout<<"Enter the sum value"<<" ";
    cin>>k;
    int ans = lenoflongsubarr(arr,n,k);
    cout<<"The Length of the longest subarray is  "<<ans;
}
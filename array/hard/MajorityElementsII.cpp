#include<bits/stdc++.h>
using namespace std;
vector<int> Majorityelement(vector<int>& nums)
{
    int cnt1=0, cnt2=0;
    int el1= INT_MIN;
    int el2 = INT_MIN;
    for(int i = 0 ; i<nums.size() ; i++)
    {
        if(cnt1==0 && el2!= nums[i])
        {
            cnt1++;
            el1= nums[i];
        }
        else if(cnt2==0 && el1!= nums[i])
        {
            cnt2++;
            el2= nums[i];
        }
        else if(el1== nums[i])
        {
            cnt1++;
        }
        else if(el2== nums[i])
        {
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0, cnt2=0;
    for(int i=0;i<nums.size() ; i++){
        if(el1== nums[i])
        {
            cnt1++;
        }
        if(el2== nums[i])
        {
            cnt2++;
        }
    }
    vector<int>ans;
    if(cnt1 > nums.size()/3)
    {
        ans.push_back(el1);
    }
    if(cnt2 > nums.size()/3)
    {
        ans.push_back(el2);
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
    
    vector<int> ans = Majorityelement(arr);
    cout<<"The majority elements are  "<<ans[0]<<" "<<ans[1];
}

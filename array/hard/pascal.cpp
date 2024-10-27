#include<bits/stdc++.h>
using namespace std;
vector<int> row(int& r)
{
    vector<int>copy;
    copy.push_back(1);
    long long temp = 1;
    for(int i =1; i<r ; i++)
    {
        temp = (temp*(r-i))/i;
        copy.push_back(temp);
    }
    return copy;
}
vector<vector<int>> Pascal(int& n)
{
    vector<vector<int>>ans;
    for(int i = 1 ; i<=n ; i++)
    {
        ans.push_back(row(i));
    }
    return ans;
}
int main()
{
    vector<int>arr;
    int n;
    cout<<"Enter the size of the Pascal Triangle"<<" ";
    cin>>n;
    
    vector<vector<int>> ans = Pascal(n);
    cout<<"The pascal triangle is \n";
    for(int i = 0 ;i<ans.size() ; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
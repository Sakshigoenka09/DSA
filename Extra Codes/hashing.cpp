#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n =0 ;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array:"<<" ";
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    //precompute
    cout<<"computing...."<<endl;
    int hash[13] = {0};
    for(int i = 0 ; i<n ; i++)
    {
        hash[arr[i]] += 1;
    }
    //fetch
    cout<<"enter the no of times you want to search"<<endl;
    int q = 0;
    cin>>q;
    
    for(int i = 0  ;i< q ; i++)
    {
        cout<<"enter the no you want the frequency of "<<endl;
        int no = 0;
        cin>>no ;
        cout<<"fetching...."<<endl;
        cout<<"the freuency of "<<no <<" is:"<<" ";
        cout<<hash[no]<<endl;

    }
    return 0;
}
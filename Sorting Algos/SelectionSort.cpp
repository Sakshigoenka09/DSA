#include<bits/stdc++.h>
using namespace std ;
void swap(int &a, int &b)
{
    int temp = a;
    a= b;
    b= temp;
}
vector<int> selectioni(int &n , vector<int>& arr)
{
    
    for(int i =0 ;i<n-1 ; i++)
    {
        int min = i;
        for(int j = i+1; j<n ; j++)
        {
            if(arr[min] > arr[j])
            min = j;
            
        }
        swap(arr[i],arr[min]);
    }
    return arr;
}
int main()
{
    int n ;
    cout<<"enter the size of the array: ";
    cin>>n;
    vector<int>p(n);
    for(int i = 0 ; i<n ; i++)
    {
        
        cout<<"Enter the elements of the array: ";
        cin>>p[i];
        
    }
    cout<<"Array after sorting : "<<endl;
    vector<int>ans = selectioni(n,p);
    for(int i = 0 ; i<n; i++)
    {
         cout<<ans[i]<<" ";
    }
    cout<<endl;
}
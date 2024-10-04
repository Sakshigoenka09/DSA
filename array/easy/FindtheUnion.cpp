#include<bits/stdc++.h>
using namespace std;
vector<int> findunion(vector<int>& arr1, vector<int>arr2, int n, int m)
{
    int i =0, j =0;
        vector<int>ans;
        while(i<n && j<m)
        {
            if(arr1[i]< arr2[j] )
            {
                if(ans.empty() || ans.back() != arr1[i])
                {
                    ans.push_back(arr1[i]);
                    
                }
                i++;
            }
            else if(arr1[i]> arr2[j] )
            {
                if(ans.empty() || ans.back() != arr2[j])
                {
                    ans.push_back(arr2[j]);
                    
                }
                j++;
            }
            else
            {
                if(ans.empty() || ans.back() != arr1[i])
                {
                    ans.push_back(arr1[i]);
                    
                }
                i++;
            j++;
            }
            
        }
        while(i<n)
        {
           if(ans.empty() || ans.back() != arr1[i])
                {
                    ans.push_back(arr1[i]);
                    
                }
            i++;
        }
        while(j<m)
        {
            if(ans.empty() || ans.back() != arr2[j])
                {
                    ans.push_back(arr2[j]);
                    
                }
            j++;
        }
        return ans;
}
int main() 
{
    vector<int>arr1;
    vector<int>arr2;
    int n,k;
    cout<<"Enter the size of the array1"<<" ";
    cin>>n;
    for(int i = 0 ;  i< n ; i++)
    {
        cout<<"Enter the elements of array1"<<" ";
        int m ;
        cin>>m;
        arr1.push_back(m);
    }
    cout<<"Enter the size of the array2"<<" ";
    cin>>k;
    for(int i = 0 ;  i< k ; i++)
    {
        cout<<"Enter the elements of array2"<<" ";
        int m ;
        cin>>m;
        arr2.push_back(m);
    }
    vector<int>ans = findunion(arr1, arr2,n,k);
    cout<<"The union of two arrays: "<<endl;
    for(int i = 0 ;i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
}
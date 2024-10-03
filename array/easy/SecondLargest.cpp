#include<bits/stdc++.h>
using namespace std ;
int SecondlargestElement(vector<int>& arr)
{
     int max1 = INT_MIN;
        int max2 = INT_MIN;
        for(int i = 0 ; i<arr.size() ; i++)
        {
            if(arr[i]>max1 )
            {
                max2= max1;
                max1 = arr[i];
            }
            else if (arr[i]>max2 && arr[i]!= max1)
                max2 = arr[i];
        }
        if(max2 == INT_MIN)
        return -1;
        return  max2;
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
    int ans = SecondlargestElement(arr);
    cout<<"The Second largest element is "<<ans;
}
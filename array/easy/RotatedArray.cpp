//To check whether the array is sorted and rotated
#include<bits/stdc++.h>
using namespace std;
bool rotatedArray(vector<int>& arr)
{
    int count =0;
    int n = arr.size();
    for(int i =0 ; i<n ; i++)
    {
        if(arr[i]>arr[(i+1)%n])
        {
            count++;
        }
    }
    if(count>1)
    return false;
    return true;

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
    bool ans =  rotatedArray(arr);
    cout<<"the array is rotated(true(1)/false(0)): "<<ans;
}
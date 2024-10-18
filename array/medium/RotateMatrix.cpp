#include<bits/stdc++.h>
using namespace std;
void RotatebyNinety(vector<vector<int>>& matrix)
{
    int m = matrix.size();
    int n= matrix[0].size();
    for(int i = 0 ; i<m ; i++)
    {
        for(int j = i; j<n ; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i =0 ;i<m ; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    cout<<" The rotated matrix by 90degree is"<<endl;
    for(int i= 0 ; i <m;i++)
    {
        for(int j = 0 ; j<n; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n, m;
    cout<<"Enter the size of the row of the matrix"<<" ";
    cin>>n;
    cout<<"Enter the size of the col of the matrix"<<" ";
    cin>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i = 0 ;  i< n ; i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            cout<<"Enter the element of row "<< i<< ", column "<<j<<" ";
            cin>>arr[i][j];
        }
    }
    RotatebyNinety(arr);
}
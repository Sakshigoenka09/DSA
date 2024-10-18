#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) 
{
    int n = matrix.size();
    int m = matrix[0].size();
    // vector<int>col(m,0);
    // vector<int>row(n,0);
    int col = 1;
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0] =0;
                if(j!=0)
                    matrix[0][j] =0;
                else
                    col =0;
            }
            
        }
    }
    for(int i = 1 ; i<n ; i++)
    {
        for(int j = 1 ; j<m ; j++)
        {
            if(matrix[i][j]!=0)
            {
                if(matrix[i][0] == 0 || matrix[0][j]==0)
                {
                    matrix[i][j]= 0;
                }
            }
    
        }
    }
    if(matrix[0][0] == 0)
    {
        for(int i = 0 ; i<m ; i++)
        {
            matrix[0][i] = 0;
        }
    }
    if(col ==0)
    {
        for(int i = 0 ; i<n ; i++)
        {
            matrix[i][0] = 0;
        }
    }
    for(int i = 0 ;i<n ; i++)
    {
        for(int j = 0 ; j<m ; j++)
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
    setZeroes(arr);
        
        
}
    
    
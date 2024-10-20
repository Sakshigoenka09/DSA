#include<bits/stdc++.h>
using namespace std;
vector<int> SpiralMatrix(vector<vector<int>>& matrix)
{
    vector<int>ans;
    int m = matrix.size();
    int n = matrix[0].size();
    int top =0 , left =0;
    int bottom = m-1 , right= n-1;
    while(left<=right && top<=bottom)
    {
        for(int i = left ; i<= right; i++)
        {
            ans.push_back(matrix[left][i]);
        }
        top++;
        for(int i =top ; i<= bottom ; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        
        right--;
        if(top<=bottom){
            for(int i =right ; i>=left ; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
        }
        bottom --;
        if(left<=right)
        {
            for(int i = bottom ; i>=top ; i--)
            {
                ans.push_back(matrix[i][left]);
            }
        }
        left++;
    
    }
    return ans;
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
    vector<int>mat = SpiralMatrix(arr);
    cout<<"The elements of the spiral matrix: ";
    for(int i =0; i<mat.size(); i++)
    {
        cout<<mat[i]<<" ";
    }
}
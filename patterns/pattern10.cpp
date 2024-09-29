// 1         1
// 1 2     2 1
// 1 2 3 3 2 1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no of lines"<<endl;
    cin>>n;
    cout<<endl;
    for(int i = 1; i<=n ; i++)
    {
        for(int j =1 ; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<" ";
        for(int k = n*2-2 ; k>0;k--)
        {
            cout<<" ";
        }
        for(int j =i ; j>0; j--)
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }
    
}
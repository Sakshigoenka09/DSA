//     *
//    ***
//   *****
//  *******
// *********

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no of lines"<<endl;
    cin>>n;
    cout<<endl;
    for(int i = 0;i<n;i++)
    {
        for(int j = i;j<n-1;j++)
        {
             cout<<" ";
        }
        for(int k = 0;k<i*2+1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

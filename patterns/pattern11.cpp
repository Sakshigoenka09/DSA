// A B C D E 
// A B C D 
// A B C 
// A B 
// A

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no of lines"<<endl;
    cin>>n;
    cout<<endl;
    for(int i = n ;i>=1;i--)
    {
        for(int j = 65 ;j<65+i;j++)
        {
            cout<<char(j)<<" ";

        }
        cout<<endl;
    }
}
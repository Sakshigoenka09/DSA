// * 
// * *
// * * *
// * * * *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no of lines"<<endl;              
    cin>>n;
    cout<<endl;
    for(int i = 1  ; i<=n ; i++)
	{
		for(int j = 0; j<i;  j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
    
}
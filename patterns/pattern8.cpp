// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no of lines"<<endl;
    cin>>n;
    cout<<endl;
    for(int i= n-1 ; i>=0 ; i--)
   {
       for(int k  = i ; k<n-1; k++)
       {
           cout<<" ";
       }
       for(int j = 0; j<i*2+1 ; j++)
       {
           cout<<"*";
       }
       cout<<endl;
       
   }
    
}
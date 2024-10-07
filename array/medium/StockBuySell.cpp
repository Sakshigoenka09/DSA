#include<bits/stdc++.h>
using namespace std;
int stock(vector<int>& prices)
{
    int buy = prices[0];;
        int sell=0;
        for(int i =0 ; i<prices.size() ; i++)
        {
            if(buy>prices[i])
            {
                buy= prices[i];
            }
            sell = max(sell,prices[i]-buy);

        }
        return sell;
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
    
    int ans = stock(arr);
    cout<<"The maximum profit is "<<ans;
}
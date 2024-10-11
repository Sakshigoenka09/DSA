// Finding the longest consecutive subsequence of an array in O(N) time complexity using hashset.

#include<bits/stdc++.h>
using namespace std;
int longestseq(vector<int>& nums)
{
    int temp = 0;
        int maxi =1;
        int  n = nums.size();
        if(n==0)
        return 0;
        unordered_set<int>st;
        for(int i = 0;i<n ; i++)
        {
            st.insert(nums[i]);
        }
        
        for(auto it : st )
        {
            if(st.find(it-1)== st.end())
            {
                temp =1;
                int i = it;
                while(st.find(i+1)!= st.end())
                {
                    temp++;
                    i++;
                    
                }
                maxi= max(temp, maxi);
            }

        }
        return maxi;

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
    
    int ans =longestseq(arr);
    cout<<"The length of the longest consecutive elements sequence is "<<ans;
}

#include<bits/stdc++.h>
using namespace std;

    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {

        int n = A.size();

        vector<int> freq(n + 1, 0);
        vector<int> ans(n);

        int common = 0;

        for (int i = 0; i < n; ++i) {

            freq[A[i]]++;

            if (freq[A[i]] == 2)
                common++;

            freq[B[i]]++;

            if (freq[B[i]] == 2)
                common++;

            ans[i] = common;
        }

        return ans;
    }

int main(){
    int n;
    cin>>n;
    vector<int>num1(n),num2(n),ans(n);
    for(int i=0;i<n;++i)
    cin>>num1[i];
    for(int i=0;i<n;++i)
    cin>>num2[i];
    ans=findThePrefixCommonArray(num1,num2);
    for(auto x:ans)
    cout<<x<<" ";
    return 0;
}
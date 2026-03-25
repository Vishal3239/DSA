#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> price(n);

    for(int i=0;i<n;i++)
    cin>>price[i];

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(int i=0;i<n;i++){
        minPrice = min(minPrice, price[i]);
        maxProfit = max(maxProfit, price[i] - minPrice);
    }

    cout<<maxProfit;
}
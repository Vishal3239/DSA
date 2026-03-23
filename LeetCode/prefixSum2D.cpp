/*
Constraints
1 <= N <= 10^3
1 <= arr[i][j] <=n10^9
1 <= Q <=10^5
1 <= a,b,c,d <= N
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int arr[N][N];
long long int pf[N][N];

int main(){
    // normal
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
            cin>>arr[i][j];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum=0;
        for(int i=a; i<=c;++i){
            for(int j=b; j<=d; ++j){
                sum+=arr[i][j];
            }
        }
        cout<<sum;
    }
    
    // TC- O(N^2)+O(Q*N^2)=10^5*10^6 = 10^11 (x not submit online plateform)
    

    return 0;
}

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; ++i){
//         for(int j=1; j<=n; ++j){
//             cin>>arr[i][j];
//             pf[i][j]=arr[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
//         }
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int a,b,c,d;
//         cin>>a>>b>>c>>d;
//         cout<<pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1];
//     }
    
//     return 0;
// }
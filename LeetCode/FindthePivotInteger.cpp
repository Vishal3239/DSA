#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int totalsum=n*(n+1)/2;
  int leftsum=0;
  int rightsum=0;
  int ans=0;
  bool indicater=false;
    for(int i=1;i<=n;++i){
        rightsum=totalsum-leftsum-i;
        if(rightsum==leftsum){
            ans=i;
            indicater=true;
            break;
        }
        leftsum+=i;
        
        
    }
    if(indicater) cout<<ans;
    else cout<<"-1";
  return 0;
}
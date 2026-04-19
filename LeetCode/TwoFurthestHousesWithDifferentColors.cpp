#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int>colors(n);
  for(int i=0;i<n;++i)
  cin>>colors[i];
int maxdist=0;
        
        for(int i=0;i<n;++i){
            if(colors[i]!=colors[n-1]){
                maxdist=max(maxdist,abs(n-1-i));
                break;
            }
        }
        for(int i=n-1;i>=0;--i){
            if(colors[i]!=colors[0]){
                maxdist=max(maxdist,i-0);
                break;
            }
        }
        cout<<maxdist;
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>digites(n);
    //vector<int>ans;
    for(int i=0;i<n;i++)
    cin>>digites[i];
    // string temp="";
    // for(int i=0;i<n;i++)
    // temp+=to_string(digites[i]);
    // int number=stoi(temp)+1;
    
    // while(number>0){
    //     ans.push_back(number%10);
    //     number/=10;
    // }
    // reverse(ans.begin(),ans.end());
    // for(int i=0;i<ans.size();i++)
    // cout<<ans[i]<<" ";
    bool carry=true;
    for(int i=n-1;i>=0;--i){
        if(digites[i]<9){
            digites[i]++;
            carry=false;
            break;
        }
        digites[i]=0;
        
    }
    if(carry)
    digites.insert(digites.begin(),1);
    for(int i=0;i<digites.size();i++)
    cout<<digites[i]<<" ";

    return 0;
    

    

}
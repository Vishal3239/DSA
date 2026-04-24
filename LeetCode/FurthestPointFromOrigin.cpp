#include<bits/stdc++.h>
using namespace std;
int furthestDistanceFromOrigin(string moves) {
    int left=0;
    int right=0;
    int under=0;
    
    for(char ch:moves){
        if(ch=='L')
        left++;
        else if(ch=='R')
        right++;
        else
        under++;
    }
    return (max(left+under-right,right+under-left));
        
}
int main(){
    string str;
    cin>>str;
    cout<<furthestDistanceFromOrigin(str);
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void TOH(int n,char f,char t,char a){
    if(n==1){
        cout<<endl<<" Move disk 1 from "<<f<<" to "<<t;
        return;
    }
    TOH(n-1,f,a,t);
    cout<<endl<<" Move "<<n<<" from "<<f<<" to "<<t;
    TOH(n-1,a,t,f);
}
int main(){
    int n;
    cin>>n;
    TOH(n,'A','C','B');
    
    return 0;
}
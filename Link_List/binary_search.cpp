#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,10,20,60,80};
    int key=1;
    int start=0;
    int end=sizeof(arr)/sizeof(arr[0])-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            cout<<mid;
            break;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return 0;
}
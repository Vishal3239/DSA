#include <iostream>
using namespace std;

void heapify(int arr[],int n,int i){
        int large = i;
        int left = 2*i;
        int right = 2*i+1;
        if(left<=n && arr[large]<arr[left]){
            large=left;
        }
        if(right<=n && arr[large]<arr[right]){
            large=right;
        }
        if(large != i){
            swap(arr[large],arr[i]);
            heapify(arr,n,large);
        }
    }
    void print(int arr[],int size)
    {
        for (int i = 1; i <= size; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

int main()
{
    
    int arr[6]={-1,50,55,53,52,54};
    int n=5;
    for(int i = n/2;i>0;--i){
        heapify(arr,n,i);
    }
    print(arr,n);
    

    return 0;
}
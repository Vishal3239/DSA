#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum[n];
    int maxSum = 0;

    for(int i=0;i<n;i++)
    {
        sum[i] = 0;

        for(int j=0;j<m;j++)
        {
            sum[i] += arr[i][j];
        }

        if(sum[i] > maxSum)
            maxSum = sum[i];
    }

    cout<<"Customers with maximum amount:\n";
    for(int i=0;i<n;i++)
    {
        if(sum[i] == maxSum)
        {
            cout<<"Customer "<<i<<" Total Amount = "<<sum[i]<<endl;
        }
    }

}
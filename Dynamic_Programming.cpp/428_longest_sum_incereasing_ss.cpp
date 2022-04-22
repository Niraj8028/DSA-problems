
#include <bits/stdc++.h>
using namespace std;

int maxSumIS(int arr[], int n)
{
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        sum[i] = arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                sum[i] =max(sum[i], sum[j] + arr[i]);
            }
        }
    }
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cout<<sum[i]<<" ";
        // maxi = max(maxi, sum[i]);
    }
    return maxi;
}

int main()
{   
    int arr[]={20 ,8 ,27 ,37 ,9 ,12 ,46};
    int n=7;
    cout<<maxSumIS(arr,n);

    return 0;
}

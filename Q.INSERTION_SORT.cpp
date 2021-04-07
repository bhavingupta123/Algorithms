//https://www.geeksforgeeks.org/insertion-sort/

/*Insertion sort takes maximum time to sort if elements are sorted in reverse order. And it takes minimum time (Order of n) when elements are already sorted.*/
/* Insertion sort is used when number of elements is small. It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.*/

#include <bits/stdc++.h>
using namespace std;

int insertion_sort(int arr[], int n)
{
    int i,j,k,key;
    i=1;

    for(i=1;i<n;++i)
    {
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    long long int key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,t,n1,n2,max_sum,sum1,sum2;

    cin>>n;
    int arr[n];

    for(i=0;i<n;++i)
        cin>>arr[i];

    insertion_sort(arr,n);

    for(i=0;i<n;++i)
        cout<<arr[i]<<" ";

    return 0;
}
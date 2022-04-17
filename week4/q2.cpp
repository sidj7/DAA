#include<bits/stdc++.h>
using namespace std;
int s=0;
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
    s++;
}
int c=0;
int partition(int arr[],int l,int h)
{
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<h;j++)
    {
        c++;
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[j],&arr[i]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return i+1;
}
void quick_sort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p=partition(arr,l,h);
        quick_sort(arr,l,p-1);
        quick_sort(arr,p+1,h);
    }
}
int main()
{
    int x, y, z;
    cin >> x;
    while (x--)
    {
        cin >> y;
        int arr[y];
        for (int i = 0; i < y; i++)
        {
            cin >> arr[i];
        }
        quick_sort(arr, 0,y-1);
        for (int i = 0; i < y; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\nCOMPARISION : "<<c<<endl;
        cout<<"SWAPS : "<<s<<endl;
        s=0;
        c=0;
    }
    return 0;
}
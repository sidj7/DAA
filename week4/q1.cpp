#include<bits/stdc++.h>
using namespace std;
int c=0;
void merge(int arr[],int l,int m,int h)
{
    int i=l,j=m+1,k=l;
    int b[h+1];
    while(i<=m && j<=h)
    {
        if(arr[i]<=arr[j])
        {
            b[k++]=arr[i++];
        }
        else
        {
            b[k++]=arr[j++];
        }
        c++;
    }
    while(i<=m)
    {
        b[k++]=arr[i++];
    }
    while(j<=h)
    {
        b[k++]=arr[j++];
    }
    for(int i=l;i<=h;i++)
    {
        arr[i]=b[i];
    }
}
void mergesort(int arr[],int l,int h)
{
    
    if(l<h)
    {   
        int mid=(l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}
int count_inv(int arr[],int y)
{
    int inv=0;
    for(int i=0;i<y-1;i++)
        {
            for(int j=i+1;j<y;j++)
            {
                if(arr[i]>arr[j])
                {
                    inv++;
                }
            }
        }
    return inv;
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
        int inv=count_inv(arr,y);
        mergesort(arr,0,y-1);
        cout<<"INVERSIONS : "<<inv<<endl;
        cout<<"COMPARISIONS : "<<c<<endl;      
        c=0;
    }
    return 0;
}

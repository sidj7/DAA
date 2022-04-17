#include<bits/stdc++.h>
using namespace std;
bool merge(int arr[],int l,int m,int h)
{
    int flag=0;
    int i=l,j=m+1,k=l;
    int b[h+1];
    while(i<=m && j<=h)
    {
        if(arr[i]>=arr[j])
        {
            b[k]=arr[j];
            j++;
            flag=arr[i]==arr[j]?1:0;
        }
        else
        {
            b[k]=arr[i];
            i++;
        }
        k++;
    }
    while(i<=m)
    {
        b[k]=arr[i];
        k++;i++;
    }
    while(j<=h)
    {
        b[k]=arr[j];
        k++;j++;
    }
    for(int p=l;p<=h;p++)
    {
        arr[p]=b[p];
    }
    return flag;

}
void mergesort(int arr[],int l,int h)
{
    bool i;
    if(l<h)
    {
        int mid=(l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        i=merge(arr,l,mid,h);
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
        mergesort(arr,0, y-1);
        int flag=0;
        for(int i=1;i<y;i++)
        {
            if(arr[i-1]==arr[i])
            {
                flag++;
            }
        }
        flag>0?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}
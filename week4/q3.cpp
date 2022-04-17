#include<bits/stdc++.h>
using namespace std;
int l=0;
int m=0;
void count_sort(int arr[],int size,int k)
{
    int b[size];
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        b[i]=0;
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    int count[max+1];
    for(int i=0;i<=max;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<size;i++)
    {
        count[arr[i]]++;
    } 
    for(int i=0;i<=max;i++)
    {
        if(count[i]!=0)
        {
            m++;
            if(m==k)
            {
                l=i;
            }
        }
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
        int g,h;
        cin>>g;
        count_sort(arr,y,g);
        
        if(g<=m)
            cout<<g<<": smallest value : "<<l;
        else
            cout<<"not present\n";
        m=0;
        l=0;
    }
    return 0;
}
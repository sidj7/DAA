#include<bits/stdc++.h>
using namespace std;
void common(int a[],int x,int b[],int y)
{
    int i=0,j=0;
    int m=0;
    int l=x>y?x:y;
    int c[l];
    while(i<x && j<y)
    {
        if(a[i]==b[j])
        {
            c[m]=a[i];
            i++;
            j++;
            m++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    if(m==0)
    {
        cout<<"NO COMMON ELEMENT"<<endl;
    }
    else
    {
        for(int i=0;i<m;i++)
        {
            cout<<c[i]<<" ";
        }
    }
}
using namespace std;
int main()
{
    int x;
    cout<<"enter number of elements in arr 1 : ";
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    int y;
    cout<<"enter number of elements in arr 2 : ";
    cin>>y;
    int b[y];
    for(int i=0;i<y;i++)
    {
        cin>>b[i];
    }
    common(a,x,b,y);
    return 0;
}
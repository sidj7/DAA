#include<bits/stdc++.h>
using namespace std;
void sumsearch(int arr[],int size)
{
    for(int i=0;i<=size-2;i++)
    {
        for(int j=i+1;j<=size-1;j++)
        {
            int sum=arr[i]+arr[j];
            int k=j+1;
            while(k<=size)
            {
                if(arr[k]==sum)
                {
                    cout<<i+1<<","<<j+1<<","<<k+1<<endl;
                    return;
                }
                else
                {
                    k++;
                }
            }
        }
    }
    cout<<"no sequence found\n";
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
        sumsearch(arr, y - 1);
    }
    return 0;
}
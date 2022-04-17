#include<bits/stdc++.h>
using namespace std;
void pairsrch(int arr[],int size,int diff)
{
    int x=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<=size;j++)
        {
            if(abs(arr[i]-arr[j])==diff)
            {
                x++;
            }
        }
    }
    if(!x)
    {
        cout<<"no such pair exist\n";
        return;
    }
    cout<<x<<endl;

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
        cin>>z;
        pairsrch(arr, y - 1,z);
    }
    return 0;
}
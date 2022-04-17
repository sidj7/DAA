#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int size)
{
    int c=0,s=0;
    for(int i=1;i<size;i++)
    {
        c++;
        int t=arr[i];
        int j=i-1;
        while(j>=0 && t<arr[j])
        {
            s++;
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"comparisions : "<<c+s<<endl;
    cout<<"shifts : "<<s<<endl;
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
        insertion_sort(arr, y);
    }
    return 0;
}
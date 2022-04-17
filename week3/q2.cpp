#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selection_sort(int arr[],int size)
{
    int c=0,s=0;
    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {   
            c++;
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        s++;
        swap(&arr[min],&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"comparisions : "<<c<<endl;
    cout<<"swaps : "<<s<<endl;
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
        selection_sort(arr, y);
    }
    return 0;
}
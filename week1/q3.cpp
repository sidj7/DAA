#include <bits/stdc++.h>
using namespace std;
void jsearch(int arr[], int size, int key)
{
    int c = 0;
    int i = 0;
    int j = sqrt(size);
    while (arr[j] < key && i < size)
    {
        c++;
        i = j;
        j += sqrt(size);
        if (j > size - 1)
        {
            j = size - 1;
        }
    }
    for (int k = i; k <= j; k++)
    {
        c++;
        if (arr[k] == key)
        {
            cout << key << " is present\n";
            cout << "no of comparision : " << c << endl;
            return;
        }
    }
    cout << key << " is not present\n";
    cout << "no of comparision : " << c << endl;
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
        cin >> z;
        jsearch(arr, y - 1, z);
    }
    return 0;
}

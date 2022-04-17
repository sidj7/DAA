#include <bits/stdc++.h>
using namespace std;
int bsearch(int arr[], int size, int key, int fs)
{
    int l, h;
    int res = -1;
    l = 0, h = size - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            res = mid;
            if (fs)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        else if (arr[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return res;
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
        int a = bsearch(arr, y - 1, z, 1);
        int b = bsearch(arr, y - 1, z, 0);
        if (a != -1)
        {
            cout << z << "-" << b - a + 1 << endl;
        }
        else
        {
            cout << "key not found\n";
        }
    }
    return 0;
}
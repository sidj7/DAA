#include <bits/stdc++.h>
using namespace std;
void bsearch(int arr[], int size, int key)
{
    int c = 0;
    int l, h;
    l = 0, h = size - 1;
    while (l <= h)
    {
        c++;
        int mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            cout << key << " is present\n";
            cout << "no of comparision : " << c << endl;
            return;
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
        bsearch(arr, y - 1, z);
    }
    return 0;
}
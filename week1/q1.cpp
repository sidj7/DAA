#include <bits/stdc++.h>
using namespace std;
void lsearch(int arr[], int size, int key)
{
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        c++;
        if (arr[i] == key)
        {
            cout << key << " is present\n";
            cout << "comparisions : " << c << endl;
            return;
        }
    }
    cout << key << " is not present\n";
    cout << "comparisions : " << c << endl;
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
        lsearch(arr, y - 1, z);
    }
    return 0;
}
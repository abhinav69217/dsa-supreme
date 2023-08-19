#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int &n, int i)
{
    if (i == n - 1)
    {
        return true;
    }
    cout << i << " " << i + 1 << endl;
    cout << arr[i] << " " << arr[i + 1] << endl;
    if (arr[i] > arr[i + 1])
    {
        return false;
    }

    return isSorted(arr, n, i + 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    bool ans = isSorted(arr, size, i);
    if (ans)
    {
        cout << "Sorted Array";
    }
    else
    {
        cout << "Not Sorted";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int s, int e, int &key)
{

    // base case
    //  1.) key not found
    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2;
    // 2.) key found
    if (arr[mid] == key)
    {
        return mid;
    }

    return (arr[mid] < key) ? binarySearch(arr, mid + 1, e, key) : binarySearch(arr, s, mid - 1, key);
}

int main()
{

    vector<int> arr = {10, 20, 30, 40, 50};
    int size = arr.size();
    int s = 0;
    int e = size - 1;
    int key = 3210;

    int ans = binarySearch(arr, s, e, key);
    cout << ans << endl;

    return 0;
}
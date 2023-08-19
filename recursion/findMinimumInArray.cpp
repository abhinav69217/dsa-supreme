#include <bits/stdc++.h>
using namespace std;

void findMin(int arr[], int n, int i, int &mini)
{
    if (i >= n)
    {
        return;
    }

    mini = min(mini, arr[i]);

    findMin(arr, n, i + 1, mini);
}

int main()
{
    int arr[] = {160, 823, 432, 234, 342, 513, 753, 21331};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int mini = INT_MAX;

    findMin(arr, size, i, mini);
    cout << "Minimum -> " << mini;
    return 0;
}
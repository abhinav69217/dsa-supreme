#include <bits/stdc++.h>
using namespace std;

void findMax(int arr[], int n, int i, int &maxi)
{
    if (i >= n)
    {
        return;
    }

    maxi = max(maxi, arr[i]);

    findMax(arr, n, i + 1, maxi);
}

int main()
{
    int arr[] = {160, 823, 432, 234, 342, 513, 753, 21331};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int maxi = INT_MIN;

    findMax(arr, size, i, maxi);
    cout << "Maximum -> " << maxi;
    return 0;
}
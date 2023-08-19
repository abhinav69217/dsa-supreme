#include <bits/stdc++.h>
using namespace std;

void print_util(int arr[], int n, int i, int j)
{
    if (j == n)
    {
        return;
    }

    for (int k = i; k <= j; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
    print_util(arr, n, i, j + 1);
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        cout << "i-- >" << i << "j--> " << j << endl;
        print_util(arr, n, i, j);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    cout << n << endl;

    return 0;
}

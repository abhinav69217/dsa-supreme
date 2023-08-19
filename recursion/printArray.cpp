#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n, int i)
{
    if (i < n)
    {
        cout << "element-> " << arr[i] << " index-> " << i << endl;
        print(arr, n, i + 1);
    }
    else
    {
        return;
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int i = 0;
    print(arr, size, i);

    return 0;
}
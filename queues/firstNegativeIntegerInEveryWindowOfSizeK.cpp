#include <bits/stdc++.h>
using namespace std;

void printFirstNegativeInteger(int arr[], int n, int k)
{

    deque<int> q;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            q.push_back(i);
        }
    }

    for (int i = k; i < n; i++)
    {
        if (!q.empty())
        {
            cout << arr[q.front()] << " ";
        }
        else
        {
            cout << "0"
                 << " ";
        }

        while ((!q.empty()) && q.front() < i - k + 1)
        {
            q.pop_front();
        }

        if (arr[i] < 0)
            q.push_back(i);
    }
    if (!q.empty())
    {
        cout << arr[q.front()] << " ";
    }
    else
    {
        cout << "0"
             << " ";
    }
}

int main()
{
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printFirstNegativeInteger(arr, n, k);
    return 0;
}
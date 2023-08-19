#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int target)
{
    if (target == 0)
    {
        return 0;
    }
    if (target <= 0)
    {
        return INT_MAX - 1; // to avoid overflow in case of negative numbers.
    }

    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = solve(arr, target - arr[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, ans + 1);
        }
    }
    return mini;
}

int main()
{
    vector<int> arr = {3, 5};
    int target = 8;
    int ans = solve(arr, target);
    cout << ans << endl;
    return 0;
}
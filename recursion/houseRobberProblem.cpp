#include <bits/stdc++.h>
using namespace std;

int rob(vector<int> nums, int i)
{
    if (i >= nums.size())
        return 0;
    else
        return max((nums[i] + rob(nums, i + 2)), rob(nums, i + 1));
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    int ans = rob(nums, 0);
    cout << ans;
    return 0;
}

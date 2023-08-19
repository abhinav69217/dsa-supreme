#include <bits/stdc++.h>
using namespace std;

void calculateSpan(vector<int> &prices)
{
    int n = prices.size();
    stack<pair<int, int>> st;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int span = 1;
        while (!st.empty() && st.top().first <= prices[i])
        {
            span += st.top().second;
            st.pop();
        }
        st.push({prices[i], span});
        ans.push_back(span);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    vector<int> prices = {10, 4, 5, 90, 120, 80};
    calculateSpan(prices);

    return 0;
}
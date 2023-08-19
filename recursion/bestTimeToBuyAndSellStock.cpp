#include <bits/stdc++.h>
using namespace std;

int maxProfitFunc(vector<int> &arr, int i, int &minPrice, int &maxProfit)
{
    if (i == arr.size())
    {
        cout << minPrice << " " << maxProfit << endl;
        return maxProfit;
    }

    if (arr[i] < minPrice)
    {
        minPrice = arr[i];
    }
    int todayProfit = arr[i] - minPrice;

    if (todayProfit > maxProfit)
    {
        maxProfit = todayProfit;
    }

    return maxProfitFunc(arr, i + 1, minPrice, maxProfit);
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;
    int ans = maxProfitFunc(prices, 0, minPrice, maxProfit);
    cout << ans;
    return 0;
}
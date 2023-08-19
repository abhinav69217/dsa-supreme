#include <bits/stdc++.h>
using namespace std;

void previousSmallerElement(vector<int> arr)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        int currElement = arr[i];

        while (st.top() > currElement)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(currElement);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    vector<int> arr = {2, 1, 4, 3};
    previousSmallerElement(arr);
    return 0;
}

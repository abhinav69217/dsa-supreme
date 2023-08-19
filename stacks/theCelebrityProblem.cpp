#include <bits/stdc++.h>
using namespace std;

int m[3][3] = {{0, 1, 0},
               {0, 0, 0},
               {0, 1, 0}};

bool knows(int a, int b)
{
    return m[a][b];
}

int findCeleb(int n)
{
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }

    while (st.size() > 1)
    {
        int a = st.top();
        st.pop();

        int b = st.top();
        st.pop();

        if (knows(a, b))
        {
            st.push(b);
        }
        else
        {
            st.push(a);
        }
    }

    int mightBeCeleb = st.top();
    st.pop();

    for (int i = 0; i < n; i++)
    {
        if (m[mightBeCeleb][i] != 0)
        {
            return -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (m[i][mightBeCeleb] == 0 && i != mightBeCeleb)
        {
            return -1;
        }
    }
    return mightBeCeleb;
}

int main()
{
    int n = 3;
    int id = findCeleb(n);
    id == -1 ? cout << "No celebrity" : cout << "Celebrity is -> " << id << endl;
    return 0;
}
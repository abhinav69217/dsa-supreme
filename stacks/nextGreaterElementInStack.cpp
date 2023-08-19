#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

Node *push(Node *head, int new_data)
{
    Node *new_node = new Node(new_data);

    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    return head;
}

// void print(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

vector<int> nextLargerNodes(Node *head)
{

    vector<int> ll;
    while (head)
    {
        ll.push_back(head->val);
        head = head->next;
    }

    stack<int> st;
    vector<int> ans(ll.size());

    for (int i = 0; i < ll.size(); i++)
    {
        while (!st.empty() && ll[i] > ll[st.top()])
        {
            int kids = st.top();
            st.pop();
            ans[kids] = ll[i];
        }
        st.push(i);
    }
    return ans;
}

// vector<int> nextLargerNodes(Node *head)
// {
//     vector<int> ans;
//     stack<int> stack;

//     for (; head; head = head->next)
//     {
//         while (!stack.empty() && head->val > ans[stack.top()])
//         {
//             int index = stack.top();
//             stack.pop();
//             ans[index] = head->val;
//         }
//         stack.push(ans.size());
//         ans.push_back(head->val);
//     }

//     for (; !stack.empty(); stack.pop())
//         ans[stack.top()] = 0;

//     return ans;
// }

int main()
{
    Node *head = NULL;
    head = push(head, 5);
    head = push(head, 0);
    head = push(head, 3);
    head = push(head, 1);
    head = push(head, 2);
    // print(head);

    vector<int> a = nextLargerNodes(head);
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}

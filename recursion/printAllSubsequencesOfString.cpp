#include <bits/stdc++.h>
using namespace std;

void printSubsequence(string input, string output, int i)
{

    if (input.empty())
    {
        cout << output;
    }

    if (i == input.length())
    {
        cout << output << endl;
        return;
    }

    // exclude
    cout << "inp-> " << input << "out--> " << output << endl;
    printSubsequence(input, output, i + 1);

    // include
    output = output + input[i];
    printSubsequence(input, output, i + 1);
}

int main()
{

    string str;
    cin >> str;
    string output = "";
    int i = 0;
    printSubsequence(str, output, i);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
const int maxx = 100005;
// removed pair odd hole first player win otherwise second player
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char s[maxx];
    cin >> s;
    char stack[maxx];
    int top = -1;
    int i = 0;

    while (s[i])
    {
        if (top >= 0 and stack[top] == s[i])
            top--;
        else
        {
            stack[++top] = s[i];
        }
        i++;
    }
    top++;
    int rmv = (i - top) / 2;

    if (rmv % 2 == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
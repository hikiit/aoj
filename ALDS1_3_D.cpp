#include <bits/stdc++.h>
using namespace std;
typedef long long lint;

int main()
{
    stack<int> s1;
    stack<pair<int, int>> s2; // 最も左の位置, その時点での面積

    string str;
    cin >> str;

    int n = str.size();
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '\\')
        {
            s1.push(i);
        }

        else if (str[i] == '/')
        {
            if (s1.empty())
            {
                continue;
            }

            int j = s1.top();
            s1.pop();

            sum += i - j;

            int a = i - j;

            while (0 < s2.size() && j <= s2.top().first)
            {
                a += s2.top().second;
                s2.pop();
            }
            s2.push(make_pair(j, a));
        }

        else if (str[i] == '_')
        {
            // DO NOTHING
        }
    }

    vector<int> ans;

    while (0 < s2.size())
    {
        ans.push_back(s2.top().second);
        s2.pop();
    }
    reverse(ans.begin(), ans.end());

    cout << sum << endl;
    cout << ans.size();

    for (int i = 0; i < ans.size(); i++)
    {
        cout << " ";
        cout << ans[i];
    }
    cout << endl;

    return 0;
}

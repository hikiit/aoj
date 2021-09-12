#include <bits/stdc++.h>
#define lint long long
using namespace std;

int main(void)
{
    int n1;
    cin >> n1;

    vector<int> s(n1);
    for (int i = 0; i < n1; i++)
        cin >> s[i];

    int n2;
    cin >> n2;
    vector<int> t(n2);
    for (int i = 0; i < n2; i++)
        cin >> t[i];

    int ans = 0;
    for (int i = 0; i < n2; i++)
    {

        for (int j = 0; j < n1; j++)
        {
            if (s[j] == t[i])
            {
                ans++;
                break;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}

#include <bits/stdc++.h>
#define lint long long
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    set<string> s;

    for (int i = 0; i < n; i++)
    {
        string f, str;
        cin >> f >> str;
        if (f[0] == 'i')
        {
            s.insert(str);
        }
        else
        {
            auto it = s.find(str);
            if (it == s.end())
            {
                cout << "no" << endl;
            }
            else
            {
                cout << "yes" << endl;
            }
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long lint;

int main()
{
    list<int> lt;
    int n, x;
    char c[20];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        scanf("%s", c);

        if (c[0] == 'i')
        {
            scanf("%d", &x);
            lt.push_front(x);
        }

        else if (c[6] == 'F')
        {
            lt.pop_front();
        }

        else if (c[6] == 'L')
        {
            lt.pop_back();
        }

        else if (c[0] == 'd')
        {
            scanf("%d", &x);
            for (auto it = lt.begin(); it != lt.end(); it++)
            {
                if (*it == x)
                {
                    lt.erase(it);
                    break;
                }
            }
        }
    }

    int i = 0;
    for (auto it = lt.begin(); it != lt.end(); it++)
    {
        cout << *it;

        i++;
        if (i < lt.size())
        {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}

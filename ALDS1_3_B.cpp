#include <bits/stdc++.h>
using namespace std;
typedef long long lint;

#define LEN 100005

typedef struct
{
    string name;
    int t;
} P;

P Q[LEN];
int head, tail, n;

void enqueue(P x)
{
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

P dequeue()
{
    P x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

int main(void)
{
    int elaps = 0;
    int c;
    int i, q;
    P u;

    cin >> n >> q;

    for (int i = 1; i <= n; i++)
    {
        cin >> Q[i].name >> Q[i].t;
    }

    head = 1;
    tail = n + 1;

    while (head != tail)
    {
        u = dequeue();
        c = min(q, u.t);
        u.t -= c;
        elaps += c;

        if (u.t > 0)
        {
            enqueue(u);
        }
        else
        {
            cout << u.name << " " << elaps << endl;
        }
    }

    return 0;
}

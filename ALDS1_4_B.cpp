#include <bits/stdc++.h>
#define lint long long
using namespace std;

// 見つかったらそのIndexを返す 見つからなかったら-1
// ソート済み配列に行うこと!!
int binarySearch(vector<int> L, int key)
{
    int left = 0;
    int right = L.size();

    while (left < right)
    {
        int midIndex = (left + right) / 2;
        int mid = L[midIndex];

        if (mid == key)
        {
            return midIndex;
        }

        else if (mid < key)
        {
            left = midIndex + 1;
        }

        else if (mid > key)
        {
            right = midIndex;
        }
    }

    return -1;
}

int main(void)
{
    int n1;
    scanf("%d", &n1);

    vector<int> s(n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &s[i]);

    int n2;
    scanf("%d", &n2);

    int ans = 0;
    int k = 0;
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &k);
        if (binarySearch(s, k) != -1)
            ans++;
    }

    cout << ans << "\n";

    return 0;
}

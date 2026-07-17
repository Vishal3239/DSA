#include <bits/stdc++.h>
using namespace std;
int const N = 1e5 + 10;
int parent[N];
int size[N];
void make(int a)
{
    parent[a] = a;
    size[a] = 1;
}
int find(int a)
{
    if (a == parent[a])
        return a;
    return parent[a] = find(parent[a]);
}
void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (size[a] < size[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        size[a] += b;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        make(i);
    }
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (find(a) != find(b))
            Union(a, b);
        else
        {
            cout << a << " " << b;
            break;
        }
    }

    return 0;
}
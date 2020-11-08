#include <iostream>
#include <cmath>

using namespace std;

int Q(int m, int n, int level, int& depth); 

int main()
{
    int x;
    int m;
    int n;
    int depth = 0;



    cout << "n=";cin >> n;
    cout << "\nm=";cin >> m;

    x = Q(m, n, 1, depth);

    cout << "Kilkist rozbytya tsilogo chysla=" << x << endl;
    cout << "Hlybyna rekursii=" << depth << endl;

    return 0;
}

int Q(int m, int n, int level, int& depth)
{
    if (level > depth)
        depth = level;
    cout << "level = " << level << endl;
    cout << "\n";



    if (n == 1)
        return 1;

    if (m == 1)
        return 1;

    if (m <= n)
        return Q(n, m, level + 1, depth);

    if (m == n)
        return 1 - Q(m, m - 1, level + 1, depth);

    else
        return Q(m, n - 1, level + 1, depth) + Q(m - n, n, level + 1, depth);
}
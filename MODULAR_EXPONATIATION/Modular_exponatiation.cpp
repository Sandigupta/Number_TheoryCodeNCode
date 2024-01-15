#include <iostream>
using namespace std;

int modular_expo(int p, int q, int m)
{
    int res = 1;

    while (q)
    {
        if (q % 2)
        {
            res = (res * p) % m;
            q--;
        }
        else
        {
            p = (p * p) % m;
            q /= 2;
        }
    }

    return res;
}

int main()
{
    int p, q, m;
    cin >> p >> q >> m;

    int result = modular_expo(p, q, m);
    cout << result << endl;
}

#include <iostream>
#include <vector>
using namespace std;
vector<int> v;

bool prime_num(int a)
{
    if (a == 1)
        return false;

    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;

    bool flag = false;
    for (int i = a; i <= b; i++)
    {
        flag = prime_num(i);
        if (flag)
            cout << i << endl;
    }
}
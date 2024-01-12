#include <iostream>
using namespace std;
int binary_Expo(int p, int q)
{
    int base = p;
    int powe = q;
    int res = 1;
    while (powe)
    {
        if (powe % 2 != 0)
    {
        res *= base;
        powe = powe - 1;
    }
    else // you can remove else, than also it will work fine as well.
    {
        base *= base;
        powe /= 2;
    }
    
 }
 return res;
}
    
   

int main()
{
    int p, q;
    cin >> p >> q;

    int result = binary_Expo(p, q);
    cout << result << endl;
}

// its time complexcity will be o(long(n));
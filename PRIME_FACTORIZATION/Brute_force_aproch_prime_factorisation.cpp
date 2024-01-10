#include<iostream>
using namespace std;

void prime_fac(int n){
    for (int  i = 2; i <=n; i++)
    {
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){
                cnt++;
                n = n / i;
            }
            cout << i << "^" << cnt << endl;
        }
    }
    
}

    int main()
{
    int n;
    cin >> n;
     prime_fac(n);
}

// its time complexcity will be o(n);
// Because i will go from i=2 to n for enery next prime factor;
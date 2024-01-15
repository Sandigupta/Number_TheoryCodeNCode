#include<iostream>
using namespace std;

int expo(int p,int q){
    int result = 1;
    for (int i = 1; i <= q;i++){
        result *= p;
    }
    return result;
}

    int main()
{
    int p, q;
    cin >> p >> q;

    int result = expo(p, q);
    cout<<result<<endl;
}

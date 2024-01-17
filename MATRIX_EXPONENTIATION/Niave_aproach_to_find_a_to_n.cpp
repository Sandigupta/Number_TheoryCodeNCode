#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, n;
    cin >> a >> n;

    int res = 1;//here  res =1 is identity element.
    for (int i = 1; i <= n;i++){
        res = res * a;
    }
    cout << res << endl;
}
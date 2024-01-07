#include<bits/stdc++.h>
using namespace std;
vector<int> primes;
bool arr[90000001];
void sieve(){
    int maxN = 90000000;
    arr[0] = arr[1] = true;
    for (int i= 2; i*i <=maxN; i++)
    {
        if(!arr[i])
        for (int j =i*i; j <=maxN; j+=i)
        {
            arr[j] = true;
        }
        
    }
    for (int i = 0; i <=maxN; i++)
    {
        if(!arr[i])
        primes.push_back(i);
    }
    
}

int main(){
    int q, n;
    cin >>q;
    sieve();

    while(q--){
        cin >> n;
        cout << primes[n - 1] << endl;
    } 
}
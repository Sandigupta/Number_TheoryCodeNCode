#include<bits/stdc++.h>
using namespace std;

const int n = 1e7 + 10;
int is_prime[1000001];

int main(){
    int maxN = 1000000;
    is_prime[0] = is_prime[1] = 0;//index 0 and 1 will be not prime always!
    for (int i = 2; i < maxN; i++) 
    {
        is_prime[i]=1;// assine true to the all index of array to assume that all are prime.
    }
    
    for (int i = 2; i*i <=maxN; i++)
    {
        if(is_prime[i]){
            for (int j = i*i; j <= maxN; j+=i)
            {
                is_prime[j] = 0;// assine 0 to the multiple of that prime number.
            }
            
        }
    }

    for (int i = 0; i <10 ; i++)
    {   
        if(is_prime[i])
        cout<< is_prime[i]<<" "<<i<< endl;
        else{
            cout<< is_prime[i]<<" "<<i<< endl; 
        }
    }
    
    
    // for q queries
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;

        if(is_prime[n]){
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not_Prime" << endl; 
        }
        
    }
    
}

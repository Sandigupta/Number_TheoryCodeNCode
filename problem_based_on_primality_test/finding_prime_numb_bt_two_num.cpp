#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        bool is_prime[(n-m)+1];

        is_prime[0]=is_prime[1]=false;
        for(int i=2;i<=n;i++){
            is_prime[i]=true;
        }
        for(int i=2;i*i<=n;i++){
            if(is_prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    is_prime[j]=false;
                }
            }
        }
        
        for(int i=m;i<=n;i++){
            if(is_prime[i]){
                cout<<i<<endl;
            }
        }
        cout<<"\n";
    }
}
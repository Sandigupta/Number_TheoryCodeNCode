#include<iostream>
using namespace std;

void prime_fact(int n){
   for (int i = 2; i*i<=n; i++)
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
   if(n>1){
       cout << n << "^" << 1 << endl;
   }
   
}


int main(){
    int n;
    cin >> n;

    prime_fact(n);
}

// its time complexcity will be o(sqrt(n)) because only itterating for the prime numbers;
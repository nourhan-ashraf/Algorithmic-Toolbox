#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INOT ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int N = 1e5+9;
ll a[100005];


ll fib_mod(ll n){   //to calculate sum(fib(n))%mod
    ll PP = 60;  //pisano period for modulo 10 is 60
    ll newNumber = n%PP;
    ll first = 0;
    ll sec = 1;
    ll sum=1;
    ll ans = 0;
    if(n==0) 
        return 0;
    else if(n==1) 
        return 1;
    else{
        for(int i=2;i<=newNumber+2;i++){    //sum(fib(n)) == fib(n+2)-1 
            first = sec;
            sec = sum;
            sum = (first + sec);
            
        }
        return sec-1;
    }
}

int main()
{
    INOT
    ll m,n;cin>>m>>n;
    cout<<abs(fib_mod(n)-fib_mod(m-1))%10<<endl;
    
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INOT ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int N = 1e5+9;
ll a[100005];

ll pisano(ll mod){  //to get pisano period
    ll first = 0;
    ll sec = 1;
    ll sum = 1;
    ll ans = 0;
    for(int i=0;i<mod*mod;i++){
        first = sec ;
        sec = sum;
        sum = (first + sec)%mod;
        if(first == 0 && sec == 1) {
            ans = i+1;
            break;
        }
    }
    return ans;
}

ll fib_mod(ll n , ll mod){   //to calculate fib(n)%mod
    ll PP = pisano(mod);
    ll newNumber = n%PP;
    ll first = 0;
    ll sec = 1;
    ll sum = 1;
    ll ans = 0;
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    for(int i=2;i<=newNumber;i++){
        first = sec;
        sec = sum;
        sum = (first + sec)%mod;
    }
    return sec;

}

int main()
{
    INOT
    ll n,mod;cin>>n>>mod;
    cout<<fib_mod(n,mod)<<endl;
    
}

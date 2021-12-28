#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INOT ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int N = 10e5+5;

int fib(int n){
    if(n <= 1) return n;
    else return fib(n-1) + fib(n-2);
}

int main(){
    INOT
    int n;cin>>n;
    cout<<fib(n)<<endl;
}


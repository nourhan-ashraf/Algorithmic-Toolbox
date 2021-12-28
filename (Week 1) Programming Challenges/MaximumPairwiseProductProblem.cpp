#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INOT ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int N = 10e5+5;

int main(){
    INOT
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    //////////////////Sorting Solution///////////////////////////

    /*
    sort(a,a+n);
    int ans = a[n-1]*a[n-2];
    cout<<ans<<endl; 
    */

   ///////////////find the largest 2 elements in the array without sorting//////////////////////
    int mx = -1; 
    for(int i=0;i<n;i++){
       if(a[i]>mx) 
            mx = a[i];
   }
    int secMx = -1;
    for(int i=0;i<n;i++){
       if(a[i]<mx && a[i]>secMx) 
            secMx = a[i];
   }

    cout<<mx*secMx<<endl;
}


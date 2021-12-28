#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INOT ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int N = 10e5+5;
long long l[N];
long long r[N];
vector<int>v;
bool sortBySec(pair<int,int>&a, pair<int,int>&b){  //sort by second element in pair "ascending order"
    return (b.second > a.second);
}
int main(){
    INOT   
    // page 73
    vector<pair<int,int>>vect;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
        }
    for(int i=0;i<n;i++){
        vect.push_back(make_pair(l[i], r[i]));
    }

    sort(vect.begin(), vect.end(), sortBySec);

    int current = vect[0].second;
    v.push_back(current);
    int cnt = 1;
    for(int i=0;i<n;i++){
        if(current < vect[i].first || current > vect[i].second){
            current = vect[i].second;
            v.push_back(current);
            cnt+=1;
        }
    }
    /* for(int i=0;i<n;i++){
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    } */
    cout<<cnt<<endl;
    for(int i:v) cout<<i<<" ";
}
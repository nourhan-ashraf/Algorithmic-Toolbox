#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INOT ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int N = 10e5+5;
int values[N];
int weights[N];
vector<int>v1;

int sortBySec( pair<int, double> &a,  pair<int, double> &b){ //sort by second element in pair "descending order"
    return (a.second>b.second);
}

int main(){
    INOT
    //page 69 in learning algorithms through programming book
    //cout<<"Enter The number of items: "<<endl;
    int n;cin>>n; 
    //cout<<"Enter The Capacity: "<<endl;
    int capacity;cin>>capacity;
    //cout<<"Enter The Values / weights "<<endl;
    for(int i=0;i<n;i++){
        cin>>values[i];
        cin>>weights[i];
    }

    vector<pair<int, double>>v;
    vector<pair<int, double>>w;
    for(int i=0;i<n;i++){
        double temp = ((double)values[i]/(double)weights[i]);
        v.push_back(make_pair(values[i],temp));
        w.push_back(make_pair(weights[i],temp));
    }
    sort(v.begin(), v.end(), sortBySec);
    sort(w.begin(), w.end(), sortBySec);

    /* for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    } 
     for(int i=0;i<n;i++){
        cout<<w[i].first<<" "<<w[i].second<<endl;
    } */
    int W=0;
    double V=0.0;
    for(int j=0;j<n;j++){
        if (W + w[j].first <= capacity){
            W += w[j].first;
            V += v[j].first;
        //    cout<<V<<" "<<W<<endl;
        } 
        else{
            int rem = capacity - W;
            //is the remainig capacity is less than all the weights and not equal to zero
            //then take only the amount of weight that you need from this element and calculate the new value
            V += ((double)(v[j].first)*(double)rem)/(double)w[j].first; 
            
        //    cout<<V<<" "<<W<<endl;
        }

        
    }

    //cout<<"The max value of items that can be carried: "<<fixed<<V<<endl;
    cout.precision(4);
    cout<<fixed<<V<<endl;
}

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD =1e9+7;
vector<int> unique(vector<int> v) {
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
return v;
}
    int toint(char c){ return c-'0'; }
#define coutyes cout<<"YES"<<endl
#define coutno cout<<"NO"<<endl
#define as(v) sort(v.begin(), v.end())
#define sum(v) accumulate(v.begin(), v.end(),0LL)
#define ds(v) sort(v.begin(), v.end(), greater<>())
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define ceil(a, b) (a + b - 1) / b
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }

// Template :https://github.com/Failureguy94/Template-for-Competitive-Programming

void solve() {
    vector<vector<int>> v(20,vector<int> (20));
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            cin>>v[i][j];
        }
    }
    int maxs=0;
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            if(j+3<20){
                maxs=max(maxs,v[i][j]*v[i][j+1]*v[i][j+2]*v[i][j+3]);
            }
            if(j-3>=0){
                maxs=max(maxs,v[i][j]*v[i][j-1]*v[i][j-2]*v[i][j-3]);
            }
            if(i+3<20){
                maxs=max(maxs,v[i][j]*v[i+1][j]*v[i+2][j]*v[i+3][j]);
            }
            if(i-3>=0){
                maxs=max(maxs,v[i][j]*v[i-1][j]*v[i-2][j]*v[i-3][j]);
            }
            if(i+3<20 && j+3<20){
                maxs=max(maxs,v[i][j]*v[i+1][j+1]*v[i+2][j+2]*v[i+3][j+3]);
            }
            if(i-3>=0 && j-3>=0){
                maxs=max(maxs,v[i][j]*v[i-1][j-1]*v[i-2][j-2]*v[i-3][j-3]);
            }
            if(i-3>=0 && j+3<20){
                maxs=max(maxs,v[i][j]*v[i-1][j+1]*v[i-2][j+2]*v[i-3][j+3]);
            }
            if(i+3<20 && j-3>=0){
                maxs=max(maxs,v[i][j]*v[i+1][j-1]*v[i+2][j-2]*v[i+3][j-3]);
            }
        }
    }
    cout << maxs<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
solve();
    return 0;
}
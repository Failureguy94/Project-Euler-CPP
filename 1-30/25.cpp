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
int addm(int a,int b){ return (a%MOD + b%MOD)%MOD; }
int mulm(int a,int b){ return ((a%MOD)*(b%MOD))%MOD; }
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
   vector<int> a = {1}; // F1
    vector<int> b = {1}; // F2
    int index = 2;
    while (true) {
        // add a + b -> c
        vector<int> c;
        int carry = 0;
        int n = max(a.size(), b.size());
        for (int i = 0; i < n || carry; i++) {
            int sum = carry;
            if (i < a.size()) sum += a[i];
            if (i < b.size()) sum += b[i];
            c.push_back(sum % 10);
            carry = sum / 10;
        }
        a = b;
        b = c;
        index++;
        if (b.size() >= 1000) {
            cout << index << endl;
            break;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
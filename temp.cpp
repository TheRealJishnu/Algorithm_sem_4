#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, a , b;
    cin >> a >> b >> n;
    vector<ll> tool(n);
    for(auto &e : tool) cin >> e;
    ll count = 0, tim = b;
    sort(tool.begin(), tool.end());
    reverse(tool.begin(), tool.end());
    
    while(tim--){
        count++;
        if(tool.empty()) continue;
        while(tim + tool.back() <= a){
            tim += tool.back();
            tool.pop_back();
        }
        if(tim == 1){
            tim += min(tool.back(), a);
            tool.pop_back();
        }
    }
    cout << count-1 << endl;
    
}

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    solve();
	}
	
	return 0;
}

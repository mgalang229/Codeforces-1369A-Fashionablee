#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n;
	cin >> n;
	if(n % 4 == 0) cout << "YES";
	else cout << "NO";
	cout << "\n";
}	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}

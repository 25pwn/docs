#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	string S, T;
	cin>>S>>T;
	
	const int N = T.size();
	
	vector<array<int, 26>> D(N+1); // D[T_index][alphabet]
	
	for(int i=N; i--;)
		D[N][T[i]-'a'] = i+1;
	for(int i=N; i--;)
		for(int j=0; j<26; j++)
			D[i][j] = (T[i]-'a'==j) ? i+1 : D[i+1][j];
	int t=0, i=N;
	for(char c:S) {
		int j=D[i][c-'a'];
		if(!j) { cout<<-1; return 0; }
		t+=i>=j, i=j;
	}
	cout<<t;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	string s;
	getline(cin, s);
	set<char> letter;

	for(int i=0; i<s.length(); i++){
		if(isalpha(s[i])){
			letter.insert(s[i]);
		}
	}
	cout << letter.size();
	return 0;
}
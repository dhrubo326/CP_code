#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	int n;
	cin >> n;
	int box[n];
	for(int i=0; i<n; i++){
		cin >> box[i];
	}
	sort(box, box+n);
	for(int i=0; i<n; i++){
		cout << box[i] << " ";
	}
	
	return 0;
}
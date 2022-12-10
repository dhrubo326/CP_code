#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0; i<n; i++) cin>>arr[i];
		vector<int> sequence;
		int i = 0;
		int j = n-1;
		while(i < j){
			sequence.push_back(arr[i]);
			sequence.push_back(arr[j]);
			i++; j--;
		}
		if(n%2 == 1) sequence.push_back(arr[i]);
		// for(int i = 0; i<n; ++i){
		// 	cout << sequence[i] << " ";
		// }
		for(auto i: sequence){
			cout << i << " ";
		}
		cout <<"\n";
	}
	return 0;
}
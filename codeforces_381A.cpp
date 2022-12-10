#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	int sereja = 0, dima = 0;
	int i = 0;
	int j = n-1;
	int turn = 0;
	while(i <= j){
		if(turn%2 == 0){
			if(arr[i] > arr[j]){ sereja += arr[i]; ++i; }
			else { sereja += arr[j]; --j; }
		}else{
			if(arr[i] > arr[j]) { dima += arr[i]; ++i; }
			else { dima += arr[j]; --j; }
		}
		turn++;
	}

	// for(int i = 0; i<n; ++i){
	// 	cout << sequence[i] << " ";
	// }
	cout << sereja <<" "<< dima <<"\n";


	return 0;
}
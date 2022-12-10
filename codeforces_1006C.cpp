#include <bits/stdc++.h>
using namespace std;

// use two pointer tecnique here
// Q: Find a triplet such that sum of two equals to third element
void solve(vector<int> &V){ 
	int n = V.size();

	long long int sum1 = 0, sum2 = 0, result = 0;
	int q = 0;
	int r = n-1;
	while(q <= r){

		if(sum1 < sum2){
			sum1 += V[q];
			q++;	
		}else{
			sum2 += V[r];
			r--;
		}
		if(sum1 == sum2){ result = sum1; } 
	}
	cout << result << endl;

}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	vector<int> pointerVector;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int y;
		cin >> y; 
		pointerVector.push_back(y);
	}
	// sort the array
	// sort(pointerVector.begin(), pointerVector.end());
	// for (auto i : pointerVector){
	// 	cout << i << " ";
	// } 
	// cout << "\n";
	solve(pointerVector);
	
	return 0;
}
#include <bits/stdc++.h>
// #include <algorithm>
using namespace std;

int main(){
	int input;
	cin >> input;

	while(input--){
		int n;
		cin >> n;
		int arr1[n], arr2[n];
		for(int i = 0; i < n; ++i){
			cin >> arr1[i];
		}
		for(int i = 0; i < n; ++i){
			cin >> arr2[i];
		}


		for(int i = 0; i < n; ++i){
			if(arr1[i] < arr2[i]){
				int temp;
				temp =  arr1[i];
				arr1[i] = arr2[i];
				arr2[i] = temp;
			}
		}

		// int &min = *min_element(arr1,arr1+n );
    	int &max1 = *max_element(arr1,arr1+n );
    	int &max2 = *max_element(arr2,arr2+n );
    	// cout<<"Finding the Element using address variable" <<  endl;;
    	// cout<<"Min Element = " <<min << endl;
    	cout<< max1 * max2 << endl;
	}


	return 0;
}
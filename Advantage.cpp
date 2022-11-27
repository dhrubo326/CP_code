#include <bits/stdc++.h>
using namespace std;

void finder(int a[], int length)
{
    
    // find largest number
    int max = a[0];
    for (int i=1; i<length; i++){
    	if (a[i] > max) max = a[i];  
    }  
    // find 2nd largest number
    int max2 = 0;
    for (int i=0; i<length; i++){
    	if (a[i] == max){
    		continue;
    	}
    	if (a[i] > max2) max2 = a[i];
    }
    if(max2 == 0) max2 = max;
         
 
    // returning largest element
    // return max2;
    int result;
    for (int i=0; i<length; i++){
    	if (a[i] == max){
    		cout << max - max2 << " ";
    	}
    	else { cout << a[i] - max <<  " "; } 
    } 
    cout << endl;


}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while (t--){
		int length;
		cin >> length;
		int integer_arr[length];
		for(int i=0; i<length; i++){
			cin >> integer_arr[i];
		}

		 finder(integer_arr, length) ;
		
	}


	return 0;
}
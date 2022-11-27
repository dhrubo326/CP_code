#include <bits/stdc++.h>
using namespace std;

char largest_alphabet(char a[], int n)
{
    // initializing max alphabet to 'a'
    char max = 'A';
 
    // find largest alphabet
    for (int i=0; i<n; i++)   
        if (a[i] > max)
            max = a[i];   
 
    // returning largest element
    return max;
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
		char word[length];
		cin >> word;

		cout << (int) largest_alphabet(word, length) - 96 << endl;
		
	}


	return 0;
}
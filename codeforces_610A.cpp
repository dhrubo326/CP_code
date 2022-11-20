#include <bits/stdc++.h>
using namespace std;

int main(){
	int input;
	cin >> input;

	if(input % 2 == 0){
		input = input / 2;
		if (input%2 == 0)
		{
			cout << input/2 - 1;
			
		}else{
			cout << input/2;
		}
		
	}else{
		cout << 0;
	}

	return 0;
}
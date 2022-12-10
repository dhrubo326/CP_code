#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >>s;
        set<char>alphabet;

        for(int i=0; i<s.length(); i++){
            if(s[i] == s[i+1]) i++;
            else alphabet.insert(s[i]);
        }

        for(auto i: alphabet){
            cout <<i;
        }
        cout << endl;
    }
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int t;
	bool check;
	string str_first;
	string str_second;
	string str_long;
	string str_short;
	cin >> t;
	vector<ll> alpha;
	while(t--) {
		cin >> str_first >> str_second;
		check = false;
		for(int i=0; i<26; i++)
			alpha.push_back(0);

		if(str_first.length() > str_second.length()) {
			str_long = str_first;
			str_short = str_second;
		}
		else {
			str_long  = str_second;
			str_short = str_first;
		}

		if(str_long.length() < 2) {
			if(str_long[0]==str_short[0])
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
			alpha.clear();
			continue;
		}

		for(int i=0; i<str_short.length(); i++)
			alpha[str_short[i]-'a']++;

		for(int i=0; i<str_long.length(); i++) {
			if(alpha[str_long[i]-'a'] > 0) {
				//cout << "match at " << str_long[i]-'a' << endl;
				check = true;
				break;
			}
		}

		if(check == true)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

		alpha.clear();
	}


	return 0;
}  

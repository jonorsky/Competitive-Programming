#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main() {

	int t;
	string str;

	cin >> t;
		getline(cin,str); // ?
	while(t--) {
		getline(cin,str);
		for(int i=0; i<str.length(); i++) {
			if(isalpha(str[i])) {
				if(str[i]=='z')
					cout << 'a';
				else if(str[i]=='Z')
					cout << 'A';
				else
					cout << char(str[i]+1);
			}
		}
		cout << endl;
	}

	return 0;
}

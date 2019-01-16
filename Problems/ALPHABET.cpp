#include <iostream>
#include <cctype>
#include <vector>
using namespace std;

int main() {

	int t;
	string str_key;
	string str;
	vector<int> vec(150);
	cin >> str_key >> t;

	for(int i=0; i<str_key.length(); i++)
		vec[int(str_key[i])]++;

	while(t--) {
		cin >> str;
		bool flag = true;
		for(int i=0; i<str.length(); i++) {
			if(vec[int(str[i])]==0)
				flag = false;
		}
		flag==true?
			cout << "Yes" << endl:
			cout << "No" << endl;
	}

	return 0;
}

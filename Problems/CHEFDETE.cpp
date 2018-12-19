/* https://www.codechef.com/FEB16/problems/CHEFDETE/ */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int t;
	cin >> t;
	vector<int> vec(t);

	vector<int> vec_str(t);

	for(int i=0; i<t; i++) {
		vec_str[i] = i + 1;
	}

	for(int i=0; i<t; i++) {
		cin >> vec[i];
		if(vec[i]!=0)
			vec_str[vec[i]-1] = 0;
	}

	vec_str.erase(remove(vec_str.begin(), vec_str.end(), 0),vec_str.end());

	for(int i=0; i<vec_str.size(); i++)
		cout << vec_str[i] << ' ';
	cout << endl;

	return 0;
}
 

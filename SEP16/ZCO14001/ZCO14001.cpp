#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main() {

	ll stack;
	ll h_limit;
	ll temp;
	ll move;
	ll crane;
	ll crane_pick;
	vector<ll> vec;
	cin >> stack >> h_limit;
	for(int i=0; i<stack; i++) {
		cin >> temp;
		vec.push_back(temp);
	}

	crane = 0;
	crane_pick = 0;

	while(cin >> move) {
		if(move==0)
			break;

		if(move == 1) {
			if(crane != 0)
				crane--;
		}
		else if(move == 2) {
			if(crane != vec.size()-1)
				crane++;
		}
		else if(move == 3 && crane_pick == 0) {
			if(vec[crane] > 0 ) {
				vec[crane]--;
				crane_pick++;
			}
		}
		else if(move == 4 && crane_pick > 0 && vec[crane] < h_limit) {
			vec[crane]++;
			crane_pick--;
		}

	}
	for(int i=0; i<vec.size(); i++)
			cout << vec[i] << ' ';
		cout << endl;


	return 0;
}

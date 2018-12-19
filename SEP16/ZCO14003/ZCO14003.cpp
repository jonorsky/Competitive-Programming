#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main() {

	int n;
	cin >> n;
	ll a[n], max=0, test, temp;
	vector<ll> vec;
	for(int i=0; i<n; i++) {
	    cin >> temp;
		vec.push_back(temp);
	}

	sort(vec.begin(),vec.end());
	for(int i=0; i<n; i++){
	    test = vec[i]*(n-i);
	    if(test > max)
	        max = test;
	}

	cout << max;

	return 0;
}

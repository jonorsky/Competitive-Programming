#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);

	ll bubblegum;
	ll limit;
	ll temp, ctr=0;
	ll zeta;
	ll arr[100000];
	cin >> bubblegum >> limit;
	for(int i=0; i<bubblegum; i++)
		cin >> arr[i];

	sort(arr,arr+bubblegum);
	for(int i=0; i<bubblegum; i++) {
		zeta = lower_bound(arr,arr+bubblegum,limit-arr[i]) - arr - 1;
		if(zeta < i)
			break;
		else
			ctr += zeta - i;
	}
	point:
	cout << ctr << endl;

	return 0;
} 

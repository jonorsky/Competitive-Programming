#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int n;
	ll result = 0;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];
	sort(arr,arr+n);
	for(int i=n-1;i>=0;i--)
          result = result + (i*arr[i]) - arr[i]*(n-1-i);

	cout << result << endl;

	return 0;
}

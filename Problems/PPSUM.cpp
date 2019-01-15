#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int t;
	int d,n;
	int sum,total;

	cin >> t;

	while(t--) {
		cin >> d >> n;
		sum = 0;
		total = 0;
		while(d--) {
			for(int i=1; i<=n; i++)
				sum += i;

			n = sum;
			sum = 0;
		}


		cout << n << endl;
	}

	return 0;
}

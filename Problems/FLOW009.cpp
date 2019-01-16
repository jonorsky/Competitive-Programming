/* https://www.codechef.com/problems/FLOW009 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int t;
	cin >> t;

	long double quantity, price;
	while(t--){
		cin >> quantity >> price;

		if(quantity>1000)
			cout << fixed << setprecision(6) << (quantity*price)-((quantity*price)*.10) << endl;
		else
			cout << fixed << setprecision(6) << quantity*price << endl;

	}


	return 0;
}

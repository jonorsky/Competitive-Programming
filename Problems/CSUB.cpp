/* https://www.codechef.com/JULY14/problems/CSUB/ */
#include <iostream>
#include <string>
using namespace std;

int main () {

string y;
int counter,x;
long long int sum,sum1;
cin >> counter;
do
	{
	cin >> x >> y;
	sum=0;
	for (int j=0; j<=x; j++)
		{
		  if (y[j]=='1')
			{
			sum++;
			}
		}
		sum1=sum*(sum+1)/2;
		cout << sum1 << endl;
		counter--;

	} while(counter>0);

return 0; //www.iceparticle.com
}

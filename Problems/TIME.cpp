#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long a1, a2, a3, d, r, ana, ang;
    int an;

             a1 = 1;
						 a2 = 2;
						 a3 = 4;

             cin >> an;

						if(an == 0) {
							cout << '1' << endl;
							return 0;
						}
						if(an == 1) {
							cout << '2' << endl;
							return 0;
						}

						an += 1;

             if (a2 - a1 == a3 - a2)
             {
                    d = a2 - a1;

                    ana = a1 + (an - 1) * d;

                    cout << "The "  << an << "th term is " << ana << "." << endl;
                    }
             else if (a2 / a1 == a3 / a2)
             {
                  r = a2 / a1;

							ang = pow(r, an - 1) * a1;

                  cout << ang << endl;
             }
}

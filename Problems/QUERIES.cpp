/* Problem: https://www.codechef.com/CDTR1502/problems/QUERIES/ */

#pragma warning(disable:4786)
#define _CRT_SECURE_NO_WARNINGS
#pragma comment(linker, "/stack:16777216")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);
#define endl '\n'
#define gc getchar_unlocked
#define pc putchar
#define file freopen("iceparticle.in","r",stdin);
#define terminate exit (EXIT_FAILURE)
#define os_iterator ostream_iterator<data> screen(cout,endl)
#define output(vec) copy(vec.begin(),vec.end(),screen)
#define memory(dt,fill,length) memset ((dt),(fill),(length))
#define MAX int(1e9) + 7;
#define timer 0

typedef vector<int> vec;
typedef vector<vec> vvec;
typedef long long ll;
typedef vector<ll> vecll;
typedef vector<vecll> vvecll;
typedef char character;
typedef int data;
typedef pair<data, data> pint;
typedef vector<pint> vpint;
typedef float decimal;

inline ll input() {

	register int c = gc();
	ll	x = 0;
	ll 	neg = 0;
	for(; ((c<48 || c>57) && c != '-');
	c = gc());
	if(c == '-')
	 {
		neg = 1;
		c = gc();
	 }
	for(; c>47 && c<58 ; c = gc())
			x = (x<<1) + (x<<3) + c - 48;
	return (neg)?
		-x:x;
}

inline void print(ll zeta) {
	char range[15];
	int i=0;
	if(zeta < 0) {
    pc('-');
    zeta *= -1;
  }
		if(zeta == 0) {
			pc('0');
		}
	while(zeta > 0) {
		range[i] = zeta%10 + '0';
		zeta /= 10;
		i++;
	}
	while(i--) pc(range[i]);
	pc('\n');
}

inline void process() {

	data t = input();

	for(;t--> 0;) {
		ll size = input();
		ll queries = input();
		vector<data> vec(size);
		for(;queries--> 0;) {
			ll check = input();
				if(check == 0) {
					ll head = input();
					ll tail = input();
					ll update = input();
					for(int i=head-1; i<=tail-1; i++ ) {
						vec[i] += update;
					}
				}
				else {
					ll first = input();
					ll second = input();
					ll sum = 0;
					for(int i=first-1; i<=second-1; i++ )
						sum += vec[i];
					cout << sum << endl;
				}
		}
		vec.clear();
	}
}


int main (int argc, char * const argv[]) {

	if(timer) {
	decimal bios_memsize;
	clock_t execution;
	execution=clock();

	process();
	bios_memsize=(clock()-execution)/(decimal)CLOCKS_PER_SEC;
	printf("[%.4f] sec\n",bios_memsize); }
	process();

return 0;
}

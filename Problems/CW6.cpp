/*https://www.codechef.com/CDWR2014/problems/CW6/ */
#pragma warning(disable:4786)
#define _CRT_SECURE_NO_WARNINGS
#pragma comment(linker, "/stack:16777216")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);
#define endl '\n'
#define gc getchar_unlocked
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


inline void process() {

	int t=input();
	string str= "CcDdEFfGgABS";
	char gamma,zeta,ice;
	int ctr;
	while(t--) {

	cin >> gamma >> zeta >> ice;

	ctr=0;
	int temp = str.find(gamma);
	int index;

	   if(temp==str.length())
		index=1;
	   else
	    index=temp;

		if(str[index]==str[index++])
		ctr++;

	for ( int i = index; i != str.find(zeta);) {
		if(temp!=i)
			ctr++;

	   if(i==str.length())
		i=1;
	   else i++;
	}

	ctr==4?
		cout << "Major" << endl:
		cout << "Minor" << endl;
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

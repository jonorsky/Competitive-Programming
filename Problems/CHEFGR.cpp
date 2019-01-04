/* https://www.codechef.com/OCT14/problems/CHEFGR/ */
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
	int n,var;
	int m;
	int temp;
	while(t--) {
	n=input();
	m=input();
	vector<int> vec(n);
	int max=0;
	for( int i=0; i < n; i++){
	vec.at(i)=input();
	if(vec.at(i) > max)
	max=vec.at(i);
	}
	temp=0;
	for( int i=0; i< n; i++ )
	temp+=max-vec.at(i);



	if(n==1)
	cout << "Yes" << endl;

	else if( m > temp) {
	var=(m-temp)%n;

		if(var == 0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	else if(temp==m)
	cout << "Yes" << endl;

	else
	cout << "No" << endl;
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

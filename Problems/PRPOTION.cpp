/* https://www.codechef.com/OCT14/problems/PRPOTION */
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
typedef map<int,int> trace;

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

	ll t=input();

	while(t--) {

	ll r=input();
	ll g=input();
	ll b=input();
	ll mins=input();

	vecll rvec(r);
	vecll gvec(g);
	vecll bvec(b);

	bool colorA;
	bool colorB;
	bool colorC;

	ll color;
	ll finalcolor;
	ll tempmax;
	vecll tempvec;

	rvec[0]=input();
	ll maxA=rvec[0];

	for( ll i=1; i < r; i++ ) {
		rvec[i]=input();
		if(rvec[i]>maxA)
		maxA=rvec[i];
	}

	gvec[0]=input();
	ll maxB=gvec[0];

	for( ll i=1; i < g; i++ ) {
		gvec[i]=input();
		if(gvec[i]>maxB)
		maxB=gvec[i];
	}

	bvec[0]=input();
	ll maxC=bvec[0];

	for( ll i=1; i < b; i++ ) {
		bvec[i]=input();
		if(bvec[i]>maxC)
		maxC=bvec[i];
	}


	while(mins--) {

	colorA=false;
	colorB=false;
	colorC=false;

	if(maxA>maxB) {
	color=maxA;
	colorA=true;
	}
	else {
	color=maxB;
	colorB=true;
	}
	if(maxC>color) {
	color=maxC;
	colorC=true;
	colorB=false;
	colorA=false;
	}

	//------A-----------
	if(colorA==true) {

	rvec[0]=rvec[0]/2;
	maxA=rvec[0];

		for( ll i=1; i < r; i++ ) {
			rvec[i]=rvec[i]/2;
			if(rvec[i]>maxA)
			maxA=rvec[i];
		}

	}
	//----A--------

	//-------B-----------
	if(colorB==true) {

	gvec[0]=gvec[0]/2;
	maxB=gvec[0];

		for( ll i=1; i < g; i++ ) {
			gvec[i]=gvec[i]/2;
			if(gvec[i]>maxB)
			maxB=gvec[i];

		}

	}
	//------B------

	//--------C--------
	if(colorC==true) {

	bvec[0]=bvec[0]/2;
	maxC=bvec[0];

		for( ll i=1; i < b; i++ ) {
			bvec[i]=bvec[i]/2;
			if(bvec[i]>maxC)
			maxC=bvec[i];

		}

	}
	//-----C---------

	if(maxA>maxB)
	finalcolor=maxA;
	else
	finalcolor=maxB;

	if(maxC>finalcolor)
	finalcolor=maxC;

	}

	cout << finalcolor << endl;

	rvec.clear();
	gvec.clear();
	bvec.clear();

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

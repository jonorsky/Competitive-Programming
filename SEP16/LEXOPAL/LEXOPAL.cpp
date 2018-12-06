/*Problem: Faded Palindromes
	Link: https://www.codechef.com/SEPT16/problems/RESCALC
	Author: Jono
*/


#pragma warning(disable:4786)
#define _CRT_SECURE_NO_WARNINGS
#pragma comment(linker, "/stack:16777216")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);
#define endl '\n'
#define gc getchar
#define file freopen("iceflux.in","r",stdin);
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

void defuse(string str) {

    data found = 1;
    for(data i=0, j=str.length()-1; i<j;i++,j--) {
		if(str[i]!= str[j]) {
            if(str[j]=='.') {
				str[j]=str[i];
				found = 1;
			}
			else if(str[i]=='.') {
				str[i]=str[j];
				found = 1;
			}
			else {
				found=0;
				break;
			}
		}
		else if(str[j]=='.' && str[i]=='.' ) {
			str[j] = 'a'; str[i] = 'a';
			found = 1;
		}

    }

	if(str.size()%2>0) {
		if(str[str.size()/2]=='.')
			str[str.size()/2]='a';
	}
		found!=1?
			cout << "-1" << endl:
			cout << str << endl;

}

inline void process() {
	data test;
	string cgr;
	test = input();
	for(;test--;) {
		cin >> cgr;
		defuse(cgr);
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

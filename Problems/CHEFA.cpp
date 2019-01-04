/* https://www.codechef.com/LTIME16/problems/CHEFA/ */
#pragma warning(disable:4786)
#define _CRT_SECURE_NO_WARNINGS
#pragma comment(linker, "/stack:16777216")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);
#define endl '\n'
#define gc getchar
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

ll solve(ll pass) {


long int a,b,c,d,e,i,j,k,s,z,v,x[8],y[8],m;
  cout<<"\nEnter the Number: ";
  a=pass;
  b=a;
  i=0;
  while(b>0)
  {
      y[i]=b%10;
      b=b/10;
      i++;
  }
  c=0;
  for(j=i-1;j>=0;j--)
  {
    x[c]=y[j];
    c++;
  }
  cout<<"\nRotated Numbers are:\n";
  m=i;
  while(m>0)
  {
     c=m-1;
     d=i-1;
     e=0;
     s=0;
     while(e<i)
     {
       z=pow(10,d);
       v=z*x[c%i];
       c++;
       d--;
       e++;
       s=s+v;
     }
     m--;

     cout<<s << ' ';

	 	if(s%pass==0) {
	 cout << "happy" << endl;

	  }
  }



}

inline void process() {

	int t=input();
	ll 	n;
	ll ctr;

	while(t--) {
	n=input();
	vector<ll> vec(n);
	ctr=0;
	for(int i=0; i<n; i++) {
		vec.at(i)=input();
	 }

	sort(vec.rbegin(),vec.rend());

	for(int i=0; i<n; i++)
	{
	ctr+=vec[i];
	i++;

	}
	cout << ctr << endl;
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

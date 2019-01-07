/* https://www.codechef.com/SEPT14/problems/CHEFLR/ */
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);
#define endl "\n"
#define gc getchar_unlocked
#define ONLINE_JUDGE freopen("iceparticle.in","r",stdin);
#define terminate exit (EXIT_FAILURE)
#define os_iterator ostream_iterator<data> screen(cout,endl)
#define output(vec) copy(vec.begin(),vec.end(),screen)
#define MAX 1000000007

typedef int data;
typedef long long ll;
typedef char character;
typedef double decimal;

inline ll input(data &x) {
    register data c = gc();
	ll neg = 0; x = 0;
	for( ;(( c>57 || c<48 ) && c!='-');c=gc());
    if(c=='-') { neg=1; c=gc(); }
	for( ; c<58 && c>47 ;c = gc() ) x= (x << 1)+(x << 3)+c-48;
	if(neg) return -x; else return x;
}

inline void process() {

	register data 	t;
	ll 			  	c;
	string 			m;

	input(t); for(;t--;)
	 {
		cin >> m;

		if( m[0]=='r' ) c=4;
		if( m[0]=='l' ) c=2;
		if( m.length()>1)
		{
			for( register data i=1; i<=m.length()-1; ++i)
			 {
				if( m[i]=='r' && i%2==1 )
				 c=(c*2)+1;

				else if( m[i]=='r' && i%2!=1 )
				 c=(c*2)+2;

				if( m[i]=='l' && i%2==1 )
				 c=(c*2)-1;

				else if( m[i]=='l' && i%2!=1 )
				 c*=2;

				c= c % MAX;
				if(c<0)
					c+=MAX;
			 }
		}
		printf("%d\n",c);
	 }
}

int main () {

	decimal bios_memsize;
	clock_t execution;
	execution=clock();

	process();
	bios_memsize=(clock()-execution)/(decimal)CLOCKS_PER_SEC;



return 0;
}

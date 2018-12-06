/*Problem: Chef and Calculation
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
#define pb push_back
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

inline void process() {


		ll t1,f1,k,pass,counter,mx,indx,psg,cgr;

		vector<ll> vgr;
		vector<ll> vec1;
		vector<ll> vec2;
		vector<ll> vec3;
		vector<ll> vec4;
		vector<ll> vec5;
		vector<ll> vec6;
	bool alpha;
	 t1 = input();
		while(t1--) {
			mx = indx = alpha = 0;
			f1 = input();
			for(ll i=1; i<=f1; i++) {
				k = input();
				counter = 0;
				while(k--) {
					pass = input();
					psg = 0;
					cgr = 0;
					switch (pass) {
						case 1:
							vec1.pb(pass);
							break;
						case 2:
							vec2.pb(pass);
							break;
						case 3:
							vec3.pb(pass);
							break;
						case 4:
							vec4.pb(pass);
							break;
						case 5:
							vec5.pb(pass);
							break;
						case 6:
							vec6.pb(pass);
							break;
					}
					counter += 1;
				}
					if(vec1.size()>0)
						psg++;

					if(vec2.size()>0)
						psg++;

					if(vec3.size()>0)
						psg++;

					if(vec4.size()>0)
						psg++;

					if(vec5.size()>0)
						psg++;

					if(vec6.size()>0)
						psg++;

					if(psg>=4) {

						while(psg>=4) {

							psg = cgr = 0;
							if(vec1.size()>0) {
								cgr++;
								vec1.pop_back();
							}
							if(vec2.size()>0) {
								cgr++;
								vec2.pop_back();
							}
							if(vec3.size()>0) {
								cgr++;
								vec3.pop_back();
							}
							if(vec4.size()>0) {
								cgr++;
								vec4.pop_back();
							}
							if(vec5.size()>0) {
								cgr++;
								vec5.pop_back();
							}
							if(vec6.size()>0) {
								cgr++;
								vec6.pop_back();
							}
								if(cgr==4)
									counter += 1;

								else if(cgr==5)
									counter += 2;

								else if(cgr==6)
									counter += 4;

								if(vec1.size()>0)
									psg++;

								if(vec2.size()>0)
									psg++;

								if(vec3.size()>0)
									psg++;

								if(vec4.size()>0)
									psg++;

								if(vec5.size()>0)
									psg++;

								if(vec6.size()>0)
									psg++;
					}
				}

				if(counter>mx) {
						mx = counter;
						indx = i;
				}

				vgr.push_back(counter);
				vec1.clear();
				vec2.clear();
				vec3.clear();
				vec4.clear();
				vec5.clear();
				vec6.clear();

			}

			if(vgr.size()!=1) {
				sort(vgr.rbegin(),vgr.rend());
				for(ll i=1; i<vgr.size(); i++) {
					if(vgr[i]==mx) {
						alpha = true;
						break;
					}
				}
			}

			if(alpha)
				cout << "tie" << endl;
			else if(indx==1)
				cout << "chef" << endl;
			else
				cout << indx << endl;

			vgr.clear();
			vec1.clear();
			vec2.clear();
			vec3.clear();
			vec4.clear();
			vec5.clear();
			vec6.clear();
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

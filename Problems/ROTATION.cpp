/* https://www.codechef.com/SEPT14/problems/ROTATION/ */
#include <bits/stdc++.h>
#define ONLINE_JUDGE freopen("iceparticle.in","r",stdin);
using namespace std;

typedef int data;
typedef long long ll;
typedef char character;
typedef double decimal;

int main(){

	data queries,
		 testcase,
		 index,
		 temp;

    character index1;


	scanf("%d%d",&queries,&testcase);
	vector<int> nums(queries+1);

	for(int i=0;i<queries;i++)
     scanf("%d",&nums.at(i));

	int shift = 0;
    for(;testcase--;)
	 {
		cin >> index1 >> index;

			if(index1=='R') {
			 temp=(index+shift+queries-1)%queries;
			 printf("%d\n",nums.at(temp));
			 temp=0;
			}
			else if(index1=='C')
			shift=(shift+index)%queries;

			else
			shift=(shift-index)%queries;
    }


}

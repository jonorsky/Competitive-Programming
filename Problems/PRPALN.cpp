/* https://www.codechef.com/NOV14/problems/PRPALN/ */
#include <bits/stdc++.h>
using namespace std;

bool function( string& word, int head, int tail, bool removed = false)  {

    if(tail-head==2) {

        if (!removed)
            return true;

        return word[head]==word[tail-1];
    }

    if(tail-head==1)
        return true;

    if(word[head]==word[tail-1])
        return function(word,head+1,tail-1,removed);

    if (removed)
        return false;

    return function(word,head+1,tail,true) || function(word,head,tail-1,true);

}


int main() {

	string str;
	int t;
	cin >> t;
	while(t--) {
	cin >> str;

	function(str,0,str.length())==true?
		cout << "YES" << endl:
		cout << "NO" << endl;
   }

return 0;
}

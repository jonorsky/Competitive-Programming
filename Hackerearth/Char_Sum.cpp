#include <iostream>
#include <map>
#define ll long long
using namespace std;

int main(){
    string str;
    map<char,int> m_map;
    map<char,int>::iterator it;
    int pivot=97;
    for(int i=1; i<=26; i++,pivot++)
        m_map[pivot]=i;
    cin >> str;
    ll ctr=0;
    for(int i=0; i<str.length(); i++){
    	ctr+=m_map[str[i]];
    }
    cout << ctr << endl;

    return 0;
}

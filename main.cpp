#include <iostream>
#include <stack>
using namespace std;

void showstack(stack<int> s){
	while(!s.empty()){
		cout << '\t' << s.top();
		s.pop();
	}
	cout << '\n';
}

int main(){
	
	
	return 0;
}
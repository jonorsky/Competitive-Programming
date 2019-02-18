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
	stack<int> s;
	s.push(10);
	s.push(30);
	
	cout << "The stack is : ";
	showstack(s);
	
	cout << "\ns.size() : " << s.size();
	cout << "\ns.top() : " << s.top();
	
	return 0;
}
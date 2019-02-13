#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
  vector<int> vec;
  int t,n;
  cin >> t;
  while(t--){
    cin >> n;
    for(int i=0; i<n; i++){
      cout << "Hello World" << endl;
      vec.push_back(i);
    }
  }
  return 0;
}

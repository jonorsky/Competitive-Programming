#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
  map<string,int> m_map;
  m_map["Hello"]++;

  cout << m_map["Hello"] << endl;


  return 0;
}

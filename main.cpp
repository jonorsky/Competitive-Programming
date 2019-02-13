#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
  map<string,int> m_map;
  map<string,int>::iterator it;
  m_map["Hello"]++;

  cout << m_map["Hello"] << endl;

  map<char,int> maps;
  for(int i=0; i<5; i++){
    maps[char(i+95)]++;
  }


  return 0;
}

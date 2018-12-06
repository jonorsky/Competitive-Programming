#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    int t,n,pivot;
    cin >> t;
    while(t--){
        cin >> n;
        vec.push_back(n);
    }
    int t2;
    cin >> t2;
    while(t2--){
        cin >> pivot;
        for(int i=0; i<vec.size(); i++){
            if(pivot==vec[i]){
                cout << i << endl;
                goto x;
            }
        }
        cout << "-1" << endl;
        x:;
    }
    return 0;
}

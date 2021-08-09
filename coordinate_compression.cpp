#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n);

    for(int i = 0; i<n; i++) {
      cin >> A[i];
    }
    
    set<int> values;

    for(int i = 0; i<n; i++) {
      values.insert(A[i]);
    }

    map<int, int> comp;

    for(int val : values) {
      comp[val] = comp.size();
    }

    //Now Array *A* is compressed to *comp* 
    // relative position of Array can be accesed using A[i] as index in map *comp*

}

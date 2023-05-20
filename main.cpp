#include <iostream>
#include <string> 

#include "suffixarray.h"
using namespace std;

template<typename T>
void print_vec(vector<T> V) {
  for (int i = 0; i < V.size(); i++) {
    cout << V[i] << endl;
  }
}

int main(int argc, char* argv[]) {
  vector<int> res = computeSuffixArray(argv[1]);

  print_vec(res);

  return 0;
}
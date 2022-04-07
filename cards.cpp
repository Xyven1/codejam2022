#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <math.h>
using namespace std;

typedef long double LD;
typedef long long LL;
typedef int64_t I64;
#define MOD 1000000007
void solve(){
  int C; cin >> C;
  int R; cin >> R;
  for(int c = 0; c < 2*C + 1; c++){
    cout << endl;
    for(int r = 0; r < 2*R + 1; r++){
      if(c/2 == 0 && r/2 == 0){
        cout << ".";
      } else if (c%2 == 0 && r%2 == 0){
        cout << "+";
      } else if (c%2 == 0 && r%2 == 1){
        cout << "-";
      } else if (c%2 == 1 && r%2 == 0){
        cout << "|";
      } else if (c%2 == 1 && r%2 == 1){
        cout << ".";
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int T; cin >> T;
  for(int z = 1; z <= T; z++){
    cout << "Case #" << z << ": ";
    solve();
    cout << endl;
  }
}

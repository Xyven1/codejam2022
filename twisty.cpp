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
  srand(time(NULL));
  long N, K; cin >> N >> K;
  long room, num; cin >> room >> num;
  map<int, int> numConnections;
  long tot = 0;
  for(int i = 0; 2*i < K; i++){
    cout << "T " << rand()%N + 1 << endl;
    cin >> room >> num;
    numConnections[room] = num;
    tot += num;
    cout << "W" << endl;
    cin >> room >> num;
    numConnections[room] = num;
  }
  long total = 0;
  for(auto it : numConnections){
    total += it.second;
  }
  cout << "E " << total/2 + (N-numConnections.size())*tot/K << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int T; cin >> T;
  for(int z = 1; z <= T; z++){
    solve();
  }
}

#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <iostream>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

typedef long double LD;
typedef long long LL;
typedef int64_t I64;
#define MOD 1000000007
void solve() {
  int N; cin >> N;
  string s;
  int *a = new int[N];
  for(int i = 0; i < N; i++) {
    cin >> s;
    a[i] = atoi(s.c_str());
  }
  sort(a, a + N);
  int n = 0;
  for(int i = 0; i < N; i++) {
    if(a[i] > n) {
      n++;
    }
  }
  cout << n;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int T;
  cin >> T;
  for (int z = 1; z <= T; z++) {
    cout << "Case #" << z << ": ";
    solve();
    cout << endl;
  }
}

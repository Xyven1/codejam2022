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
  int *C = new int[3];
  int *M = new int[3];
  int *Y = new int[3];
  int *K = new int[3];
  for (int i = 0; i < 3; i++) {
    cin >> C[i];
    cin >> M[i];
    cin >> Y[i];
    cin >> K[i];
  }
  int *min = new int[4];
  min[0] = *min_element(C, C + 3);
  min[1] = *min_element(M, M + 3);
  min[2] = *min_element(Y, Y + 3);
  min[3] = *min_element(K, K + 3);
  if (min[0] + min[1] + min[2] + min[3] < 1000000) {
    cout << "IMPOSSIBLE";
    return;
  }
  int sum = 0;
  for (int i = 0; i < 4; i++) {
    if (sum + min[i] > 1000000) {
      cout << 1000000 - sum << " ";
      sum += 1000000 - sum;
    } else {
      cout << min[i] << " ";
      sum += min[i];
    }
  }
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

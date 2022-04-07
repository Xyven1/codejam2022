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

class Node {
public:
  long num;
  vector<Node*> children;
  Node(long n) {
    num = n;
  }
};

tuple<long, long> recursive(Node* root) {
  if(root->children.size() == 0) {
    return make_tuple(root->num, 0);
  }
  long sum = 0;
  long sumOfMins = 0;
  long minOfMins = INT_MAX;
  for(const auto& child : root->children) {
    long childMin, childSum;
    tie(childMin, childSum) = recursive(child);
    sum += childSum;
    sumOfMins += childMin;
    if(childMin < minOfMins){
      minOfMins = childMin;
    }
  }
  sumOfMins -= minOfMins;
  return make_tuple(std::max(minOfMins, root->num), sumOfMins+sum);
}

void solve(){
  int N; cin >> N;
  Node *F[N+1];
  F[0] = new Node(0);
  for(int i = 1; i <= N; i++){
    int v; cin >> v;
    F[i] = new Node(v);
  }
  int p;
  for(int i = 0; i < N; i++){
    cin >> p;
    F[p]->children.push_back(F[i+1]);
  }
  long total = 0, min, sum;
  for(auto &node : F[0]->children){
    tie(min, sum) = recursive(node);
    total += min + sum;
  }
  cout << total;
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

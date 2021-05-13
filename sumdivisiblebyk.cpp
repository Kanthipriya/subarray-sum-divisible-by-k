#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   int subarraysDivByK(vector<int>& a, int k) {
      unordered_map <int, int> m;
      m[0] = 1;
      int temp = 0;
      int ans = 0;
      int n = a.size();
      for(int i = 0; i < n; i++){
         temp += a[i];
         int x = (temp % k + k) % k;
         ans += m[x];
         m[x]++;
      }
      return ans;
   }
};
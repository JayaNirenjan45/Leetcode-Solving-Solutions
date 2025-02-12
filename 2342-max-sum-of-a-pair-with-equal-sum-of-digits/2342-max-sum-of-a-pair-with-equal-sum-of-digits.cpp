#include <bits/stdc++.h>
using namespace std;

class Solution {
    int findSum(int i) {
        int sum = 0;
        while (i) {
            sum += i % 10;
            i = i / 10;
        }
        return sum;
    }

public:
    int maximumSum(vector<int>& nums) {
        int ans = -1;
        map<int, priority_queue<int>> mp;

        for (int num : nums) {
            int sumDigits = findSum(num);
            mp[sumDigits].push(num);
        }
        for (auto& it : mp) {
            if (it.second.size() < 2) continue;

            int n1 = it.second.top();
            it.second.pop();
            int n2 = it.second.top();
            
            ans = max(ans, n1 + n2);
        }
        return ans;
    }
};


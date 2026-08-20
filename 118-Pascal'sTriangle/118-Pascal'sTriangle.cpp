// Last updated: 8/20/2026, 9:51:06 PM
1class Solution {
2public:
3    vector<vector<int>> generate(int numRows) {
4        vector<vector<int>> result;
5        for (int i = 0; i < numRows; i++) {
6            vector<int> row(i + 1, 1);
7            for (int j = 1; j < i; j++) {
8                row[j] = result[i - 1][j - 1] + result[i - 1][j];
9            }
10            result.push_back(row);
11        }
12        return result;
13    }
14};
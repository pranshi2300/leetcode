// Last updated: 8/22/2026, 9:57:15 PM
1class Solution {
2public:
3    vector<int> getRow(int rowIndex) {
4        vector<int> row(rowIndex + 1,1);
5        for(int i=1;i<rowIndex;i++){
6            for(int j=i;j>=1;j--){
7                row[j]=row[j]+row[j-1];
8            }
9        }
10        return row;
11    }
12};
// Last updated: 8/19/2026, 10:30:58 PM
1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        vector<int> nums2;
5        vector<int> nums3;
6        for(int i=0;i<nums.size();i++){
7            if(nums[i]>=0){
8                nums2.push_back(nums[i]);
9            }
10            else{
11                nums3.push_back(nums[i]);
12            }
13        }
14        vector<int> ans;
15        for(int i=0;i< nums2.size();i++){
16            ans.push_back(nums2[i]);
17            ans.push_back(nums3[i]);
18        }
19        return ans;
20    }
21};
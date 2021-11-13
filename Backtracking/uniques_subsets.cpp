// class Solution {
// public:
//     void solve(vector<int>& a,vector<int>&v,int s,vector<vector<int>>&res)
//     {
//         res.push_back(v);
//         for(int i=s;i!=a.size();i++)
//         {   
//             if(i==s || a[i]!=a[i-1]){
//                 v.push_back(a[i]);
//                 solve(a,v,s+1,res);
//                 v.pop_back();
//             }
//         }
//     }
    
//     vector<vector<int>> subsetsWithDup(vector<int>& a) {
//         sort(a.begin(),a.end());
//         vector<vector<int>>res;
//         vector<int>v;
//         solve(a,v,0,res);
//         return res;
//     }
// };
class Solution {
public:
    std::vector<std::vector<int> > subsetsWithDup(std::vector<int> &nums) {
		std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int> > res;
		std::vector<int> vec;
		subsetsWithDup(res, nums, vec, 0);
		return res;
    }
private:
	void subsetsWithDup(std::vector<std::vector<int> > &res, std::vector<int> &nums, std::vector<int> &vec, int begin) {
		res.push_back(vec);
		for (int i = begin; i != nums.size(); ++i)
			if (i == begin || nums[i] != nums[i - 1]) { 
				vec.push_back(nums[i]);
				subsetsWithDup(res, nums, vec, i + 1);
				vec.pop_back();
			}
	}
};

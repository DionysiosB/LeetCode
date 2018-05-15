class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        
        int left(0), right(numbers.size() - 1);
        while(left < right){
            int test = numbers[left] + numbers[right];
            if(test == target){break;}
            else if(test < target){++left;}
            else if(test > target){--right;}
        }

        std::vector<int> ans(2); ans[0] = 1 + left; ans[1] = 1 + right;
        return ans;
    }
};

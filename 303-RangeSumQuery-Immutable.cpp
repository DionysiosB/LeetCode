class NumArray {
public:
    NumArray(vector<int>& nums) {
        v = nums;
        for(int p = 1; p < v.size(); p++){v[p] += v[p - 1];}
    }
    
    int sumRange(int left, int right) {
        return (v[right] - (left > 0 ? v[left - 1] : 0));
    }
private:
    std::vector<int> v;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

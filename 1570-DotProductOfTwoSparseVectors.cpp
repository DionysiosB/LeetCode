class SparseVector {
public:
    SparseVector(vector<int> &nums) {
        for(int p = 0; p < nums.size(); p++){
            if(!nums[p]){continue;}
            vm[p] = nums[p];
        }
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        int total(0);
        std::map<int, int> other = vec.vm;
        for(std::map<int, int>::iterator it = other.begin(); it != other.end(); it++ ){
            int key = it->first;
            int val = it->second;
            if(!vm.count(key)){continue;}
            total += val * vm[key];
        }

        return total;
    }

    std::map<int, int> vm;
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);

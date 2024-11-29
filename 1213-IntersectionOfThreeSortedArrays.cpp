class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        int a(0), b(0); std::vector<int> res;
        for(int p = 0; p < arr1.size(); p++){
            while(a < arr2.size() && arr2[a] < arr1[p]){++a;}
            if(a == arr1.size() - 1 && arr2.back() < arr1[p]){break;}
            while(b < arr3.size() && arr3[b] < arr1[p]){++b;}
            if(b == arr3.size() - 1 && arr3.back() < arr1[p]){break;}
            if(arr1[p] == arr2[a] && arr1[p] == arr3[b]){res.push_back(arr1[p]);}
        }

        return res;
    }
}

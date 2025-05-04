class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        std::set<int> st; for(int p = 0; p < arr2.size(); p++){st.insert(arr2[p]);}
        std::multiset<int> ms; std::vector<int> w;
        for(int p = 0; p < arr1.size(); p++){
            if(st.count(arr1[p])){ms.insert(arr1[p]);}
            else{w.push_back(arr1[p]);}
        }

        std::vector<int> v;
        for(int p = 0; p < arr2.size(); p++){
            while(ms.count(arr2[p])){
                v.push_back(arr2[p]);
                ms.erase(ms.find(arr2[p]));
            }
        }

        sort(w.begin(), w.end());
        for(int p = 0; p < w.size(); p++){v.push_back(w[p]);}
        return v;
    }
};

#include <iostream>
#include <vector>
#include <algorithm>

int hIndex(std::vector<int> citations){

    int n = citations.size();
    sort(citations.begin(), citations.end());
    int ans(0);
    for(int p = n - 1; p >= 0; p--){
        int test = ((n - p) < citations[p]) ? (n - p) : citations[p];
        ans = (test > ans) ? test : ans;
    }

    return ans;
}



int main(){

    std::vector<int> c(5); c[0] = 3; c[1] = 0; c[2] = 6; c[3] = 1; c[4] = 5;
    std::cout << hIndex(c) << std::endl;

    return 0;
}

/*
class Solution {
public:
    int hIndex(std::vector<int> citations){

    int n = citations.size();
    sort(citations.begin(), citations.end());
    int ans(0);
    for(int p = n - 1; p >= 0; p--){
        int test = ((n - p) < citations[p]) ? (n - p) : citations[p];
        ans = (test > ans) ? test : ans;
    }

    return ans;
    }

};
*/

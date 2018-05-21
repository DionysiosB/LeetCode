#include <cstdio>
#include <iostream>
#include <vector>
#include <stack>
 

std::vector<long> nextGreaterElements(std::vector<long>& nums) {

    long n = nums.size();
    std::vector<long> ng(n, -1);
    std::stack<std::pair<long, long> > s;
    for(long p = 0; p < 2 * n; p++){
        long u = p % n;
        while(!s.empty() && s.top().first < nums[u]){ng[s.top().second] = nums[u]; s.pop();}
        if(ng[u] > 0){continue;}  //Not needed, but good optimization
        s.push(std::make_pair(nums[u], u));
    }

    return ng;
}


int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(int p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> ng = nextGreaterElements(a);
    for(int p = 0; p < n; p++){printf("%ld ", a[p]);}; puts("");
    for(int p = 0; p < n; p++){printf("%ld ", ng[p]);}; puts("");

    return 0;
}

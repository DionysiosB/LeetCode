class Solution {
public:
    typedef long long ll;
    int sumSubarrayMins(vector<int>& a) {
        const ll MOD = 1e9 + 7;
        ll total(0); a.push_back(0);
        std::stack<ll> s;

        for(ll p = 0; p < a.size(); p++){
            while(!s.empty() && a[s.top()] >= a[p]){
                ll prevpos = s.top(); s.pop();
                ll pprevpos = (s.empty() ? -1 : s.top());
                ll range = (prevpos - pprevpos) * (p - prevpos);
                total += range * a[prevpos]; total %= MOD;
            }
            s.push(p);
        }

        return total;
    }
};

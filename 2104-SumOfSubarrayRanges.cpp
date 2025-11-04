class Solution {
public:
    typedef long long ll;
    long long subArrayRanges(vector<int>& a) {
        std::stack<ll> s; ll total(0);

        a.push_back(-1e9 - 7);
        for(ll p = 0; p < a.size(); p++){
            while(!s.empty() && a[p] <= a[s.top()]){
                ll prev = s.top(); s.pop();
                ll pprev = (s.empty() ? -1 : s.top());
                total -= (prev - pprev) * (p - prev) * a[prev];
            }
            s.push(p);
        }

        s.pop();  a.back() = 1e9 + 7;  //Empty the last zero from the stack and set the last value to inf
        for(ll p = 0; p < a.size(); p++){
            while(!s.empty() && a[p] >= a[s.top()]){
                ll prev = s.top(); s.pop();
                ll pprev = (s.empty() ? -1 : s.top());
                total += (prev - pprev) * (p - prev) * a[prev];
            }
            s.push(p);
        }

        return total;
    }
};

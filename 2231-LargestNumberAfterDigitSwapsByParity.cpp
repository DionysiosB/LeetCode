class Solution {
public:
    int largestInteger(int num) {
        
        std::vector<int> vf, va, vb;
        int n(num); while(n){
            int d = n % 10;
            vf.push_back(d);
            if(d % 2){va.push_back(d);}
            else{vb.push_back(d);}
            n /= 10;
        }
        
        sort(va.rbegin(), va.rend());
        sort(vb.rbegin(), vb.rend());
        
        std::vector<int> vr;
        for(int p = 0; p < vf.size(); p++){
            if(vf[p] % 2){vr.push_back(va.back()); va.pop_back();}
            else{vr.push_back(vb.back()); vb.pop_back();}
        }
        
        int res(0);
        for(int p = vr.size() - 1; p >= 0; p--){res = 10 * res + vr[p];}
        return res;
    }
};

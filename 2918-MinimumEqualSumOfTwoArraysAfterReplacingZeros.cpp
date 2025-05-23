class Solution {
    typedef long long ll;
public:

    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        ll sa(0), za(0), sb(0), zb(0);
        for(ll p = 0; p < nums1.size(); p++){sa += nums1[p]; za += (nums1[p] == 0);}
        for(ll p = 0; p < nums2.size(); p++){sb += nums2[p]; zb += (nums2[p] == 0);}
        if(sa < sb + zb && !za){return -1;}
        else if(sb < sa + za && !zb){return -1;}
        else{
            ll ta = sa + za;
            ll tb = sb + zb;
            return (ta > tb ? ta : tb);
        }

        return -1;
    }
};

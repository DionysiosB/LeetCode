class Solution {
public:

    int f(int a, int b, int c, int x){
        return a * x * x + b * x + c;
    }
    vector<int> sortTransformedArray(vector<int>& nums, int a, int b, int c) {

        std::vector<int> dv, uv;
        for(size_t p = 0; p < nums.size(); p++){
            int y = f(a, b, c, nums[p]);
            if(a){
                double xpos = - 0.5 * b / a;
                if( (a > 0 && nums[p] <= xpos)  || (a < 0 &&  nums[p] >= xpos) ){dv.push_back(y);}
                else{uv.push_back(y);}
            }
            else{
                if(b >= 0){uv.push_back(y);}
                else{dv.push_back(y);}
            }
        }

        std::reverse(dv.begin(), dv.end());

        size_t idxu(0), idxd(0);        
        std::vector<int> ans;
        while(idxu < uv.size() || idxd < dv.size()){
            if(idxu >= uv.size()){ans.push_back(dv[idxd++]);}
            else if(idxd >= dv.size()){ans.push_back(uv[idxu++]);}
            else if(dv[idxd] < uv[idxu]){ans.push_back(dv[idxd++]);}
            else{ans.push_back(uv[idxu++]);}
        }

        return ans;
    }
};

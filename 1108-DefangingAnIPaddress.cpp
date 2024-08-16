class Solution {
public:
    string defangIPaddr(string address) {
        std::string res("");
        for(int p = 0; p < address.size(); p++){
            if(address[p] == '.'){res += "[.]";}
            else{res += address[p];}
        }
        return res;
    }
}

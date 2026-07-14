class ProductOfNumbers {
public:
    ProductOfNumbers() {
        vr = std::vector<int>();
        vz = std::vector<int>();
        prod = 1;
    }
    
    void add(int num) {
        if(!num){vz.push_back(vr.size());}
        if(!prod){prod = num;}
        else{prod *= num;}
        vr.push_back(prod);
    }
    
    int getProduct(int k) {
        const size_t vrs = vr.size();
        const int prev = (vrs > k) ? vr[vrs - k - 1] : 1;

        if((!vz.empty()) && (vz.back() + k >= vrs) ){return 0;}
        else if(!prev){return vr.back();}
        else{return vr.back() / prev;}        
    }

private:
    std::vector<int> vr, vz;
    int prod;
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */

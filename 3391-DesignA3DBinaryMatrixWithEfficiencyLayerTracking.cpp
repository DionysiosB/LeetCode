class Matrix3D {
public:
    Matrix3D(int n) {
        v = std::vector<int>(n, 0);
        m = std::vector<std::vector<std::vector<bool> > >(n, std::vector<std::vector<bool> >(n, std::vector<bool>(n, 0)));
        s = std::set<std::pair<int, int>, std::greater<std::pair<int, int> > >();
        for(int p = 0; p < n; p++){s.insert(std::make_pair(0, p));}
    }
    
    void setCell(int x, int y, int z) {
        if(m[x][y][z]){return;}
        m[x][y][z] = 1;
        s.erase(std::make_pair(v[x], x));
        ++v[x];
        s.insert(std::make_pair(v[x], x));
    }
    
    void unsetCell(int x, int y, int z) {
        if(!m[x][y][z]){return;}
        m[x][y][z] = 0;
        s.erase(std::make_pair(v[x], x));
        --v[x];
        s.insert(std::make_pair(v[x], x));
    }
    
    int largestMatrix() {
        return s.begin()->second;
    }

private:
        std::vector<int> v;
        std::vector<std::vector<std::vector<bool> > > m;
        std::set<std::pair<int, int>, std::greater<std::pair<int, int> > > s;

};

/**
 * Your Matrix3D object will be instantiated and called as such:
 * Matrix3D* obj = new Matrix3D(n);
 * obj->setCell(x,y,z);
 * obj->unsetCell(x,y,z);
 * int param_3 = obj->largestMatrix();
 */

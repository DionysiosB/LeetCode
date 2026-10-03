class Solution {
public:
    int edgeScore(vector<int>& edges) {

        long long mxs(0); int tnode(0);
        std::vector<long long> v(edges.size(), 0);

        for(int p = 0; p < edges.size(); p++){
            int dest = edges[p];
            v[dest] += p;
            if(v[dest] > mxs){
                mxs = v[dest];
                tnode = dest;
            }
            else if(v[dest] == mxs){tnode = (tnode < dest ? tnode : dest);}
        }

        return tnode;
        
    }
};

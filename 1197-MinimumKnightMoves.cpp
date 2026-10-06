class Solution {
public:
    int minKnightMoves(int xt, int yt) {

        if(xt < 0){xt = -xt;}
        if(yt < 0){yt = -yt;}

        const int B = 8;
        const int F = 311;

        const std::vector<int> dx = {2, 1, -1, -2, -2, -1,  1,  2};
        const std::vector<int> dy = {1, 2,  2,  1, -1, -2, -2, -1};

        std::deque<std::pair<int, int> > dq;
        std::vector<std::vector<int> > v(2 * F, std::vector<int>(2 * F, 1e9));

        dq.push_back(std::make_pair(0, 0));
        v[F][F] = 0;

        while(!dq.empty()){
            std::pair<int, int> pos = dq.front();
            dq.pop_front();
            for(int p = 0; p < B; p++){
                int x = pos.first  + dx[p];
                int y = pos.second + dy[p];
                if(x < -F || x >= F || y < -F || y >= F){continue;}
                if(v[x + F][y + F] <= 1 + v[F + pos.first][F + pos.second]){continue;}
                v[x + F][y + F] = 1 + v[F + pos.first][F + pos.second];
                if(v[x + F][y + F] >= v[xt + F][yt + F]){continue;}
                dq.push_back(std::make_pair(x, y));
            }
        }

        return v[xt + F][yt + F];
    }
};

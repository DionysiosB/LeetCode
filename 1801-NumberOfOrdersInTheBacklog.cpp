class Solution {
public:
    int getNumberOfBacklogOrders(vector<vector<int>>& orders) {

        const long long MOD = 1e9 + 7;

        std::map<int, long long, std::greater<int> > buyOrders;
        std::map<int, long long> sellOrders;

        for(std::vector<int> order : orders){
            const int price = order[0];
            const long long amount = order[1];
            if(order[2]){sellOrders[price] += amount;}
            else{buyOrders[price] += amount;}

            while(!buyOrders.empty() && !sellOrders.empty()){
                std::pair<int, long long> bestBid = *buyOrders.begin();
                std::pair<int, long long> bestAsk = *sellOrders.begin();

                int bidPrice = bestBid.first;
                long long bidSize = bestBid.second;
                int askPrice = bestAsk.first;
                long long askSize = bestAsk.second;

                if(bidPrice < askPrice){break;}

                long long tradesize = (bidSize < askSize ? bidSize : askSize);
                bidSize -= tradesize;
                askSize -= tradesize;
                if(bidSize){buyOrders[bidPrice] = bidSize;}
                else{buyOrders.erase(bidPrice);}

                if(askSize){sellOrders[askPrice] = askSize;}
                else{sellOrders.erase(askPrice);}
            }
        }

        long long total(0);
        for(std::pair<int, long long> x : buyOrders){total += x.second; total %= MOD;}
        for(std::pair<int, long long> x : sellOrders){total += x.second; total %= MOD;}
        return (int)total;
        
    }
};

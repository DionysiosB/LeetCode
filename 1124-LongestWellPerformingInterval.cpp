class Solution {
public:
    int longestWPI(vector<int>& hours) {
        
        unordered_map<int, int> where;
        int score(0), len(0);
        for(int p = 0; p < hours.size(); p++){
            score += (hours[p] > 8 ? 1 : -1);
            if(score > 0){len = p + 1;}   //Can start from the beginning and by definition the longest
            else if(where.count(score - 1)){len = std::max(len, p - where[score - 1]);} //Between that (score - 1) occurence and now, we are productive
            if(!where.count(score)){where[score] = p;} //Only need the earliest occurence
        }

        return len;
    }
};

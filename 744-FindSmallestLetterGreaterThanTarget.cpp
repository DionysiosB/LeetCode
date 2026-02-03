class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(target < letters[0] || target >= letters.back()){return letters[0];}

        long left(0), right(letters.size() - 1);
        char res = letters[0];
        while(left <= right){
            long mid = (left + right) / 2;
            if(target < letters[mid]){res = letters[mid]; right = mid - 1;}
            else{left = mid + 1;}
        }
        return res;
    }
};

class Solution {
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {

        const int N = 7;
        std::string w = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        std::string s = "http://tinyurl.com/";
        for(int p = 0; p < N; p++){s += w[rand() % w.size()];}
        m[s] = longUrl;
        return s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {return m[shortUrl];}

    std::map<std::string, std::string> m;
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));

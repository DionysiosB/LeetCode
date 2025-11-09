class TrieNode {
public:
    TrieNode(){
        isWord = false;
        for(int p = 0; p < 26; p++){child[p] = nullptr;}
    }

    bool isWord;
    TrieNode *child[26];
};
class Trie {
public:

    Trie(){root = new TrieNode();}
    void insert(string word) {
        TrieNode *tn = root;
        for(long p = 0; p < word.size(); p++){
            int idx = word[p] - 'a';
            if(!tn->child[idx]){tn->child[idx] = new TrieNode();}
            tn = tn->child[idx];
        }
        tn->isWord = true;
    }
    
    bool search(string word, bool prefix = false){
        TrieNode *tn = root;
        for(int p = 0; p < word.size(); p++){
            int idx = word[p] - 'a';
            if(!tn->child[idx]){return false;}
            tn = tn->child[idx];
        }

        return prefix ? true : tn->isWord;
    }
    
    bool startsWith(string prefix) {
        return search(prefix, true);
    }

    TrieNode* root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

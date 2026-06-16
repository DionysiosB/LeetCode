class Solution {
 public:
  vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
    std::vector<std::vector<int> > v;

    ranges::sort(people, [](const vector<int>& a, const vector<int>& b) {
      return a[0] == b[0] ? a[1] < b[1] : a[0] > b[0];
    });
    for (const std::vector<int>& person : people){v.insert(v.begin() + person[1], person);}
    return v;
  }
};

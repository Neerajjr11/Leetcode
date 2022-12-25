class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
      int n = words.size();

      int forwardDistance = INT_MIN;
      for (int i = startIndex; i < startIndex + n; i++) {
        if (words[i % n] == target) {
          forwardDistance = i - startIndex;
          break;
        }
      }

      int backwardDistance = INT_MIN;
      for (int i = startIndex; i >= startIndex - n; i--) {
        if (words[(i + n) % n] == target) {
          backwardDistance = startIndex - i;
          break;
        }
      }

      int res  = min(forwardDistance, backwardDistance);
            if(res == INT_MIN)
                return -1;
            else
                return res;
    }
};
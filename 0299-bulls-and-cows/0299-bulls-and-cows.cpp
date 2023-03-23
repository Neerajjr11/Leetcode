class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.size();
        vector<bool> visited(n, false);
        int bulls = 0, cows = 0;
        vector<int>freqsec(10, 0);
        for(char& c : secret)
            freqsec[c - '0']++;
        for(int i = 0; i < n; i++){
            if(secret[i] == guess[i]){
                bulls++;
                visited[i] = true;
                freqsec[guess[i] - '0']--;
            }
        }
        for(int i = 0; i < n; i++){
            if(visited[i])
                continue;
            if(freqsec[guess[i] - '0'] > 0){
                cows++;
                freqsec[guess[i] - '0']--;
            }
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};
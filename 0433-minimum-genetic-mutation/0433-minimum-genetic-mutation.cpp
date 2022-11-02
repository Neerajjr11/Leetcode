class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        int size = bank.size();
        
        unordered_set<string> dict;
        for(int i = 0; i < size; i++)
        {
            dict.insert(bank[i]);
        }
        if(dict.find(end) == dict.end())
        {
            return -1;
        }
        vector<char> gene = {'A', 'C', 'G', 'T'};
        unordered_set<string> visited;
        int ans = 0; 
        queue<string> q; 
        q.push(start);
        visited.insert(start); 
        while(!q.empty())
        {
            int n = q.size();
            while(n--)
            {
                string curr = q.front(); 
                q.pop();                 
                if(curr == end)
                {
                    return ans;
                }
                for(int i = 0; i < 8; i++)
                {
                    char original = curr[i]; 
                    for(int j = 0; j < 4; j++) 
                    {   
                        curr[i] = gene[j];
                        if(dict.find(curr) != dict.end())
                        {
                            if(visited.find(curr) == visited.end())
                            {
                                q.push(curr); 
                                visited.insert(curr); 
                            }
                        }
                    }
                    curr[i] = original;
                }
            }
            ans++; 
        }
        
        return -1;
    }
    
};
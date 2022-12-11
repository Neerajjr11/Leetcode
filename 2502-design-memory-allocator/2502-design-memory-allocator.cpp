class Allocator {
public:
    vector<int> memory;
    unordered_map<int, int> mp;
    int sz;
    int res;
    int count;
    Allocator(int n) {
        sz = n;
        memory.resize(n);
    }
    
    int allocate(int size, int mID)
    {
        for (int i = 0; i < sz; i++)
        {
            if (memory[i] == 0)
            {
                int res = i, count = 0;
                while (i < sz and memory[i] == 0)
                {
                    i++, count++;
                    if (count == size)
                        break;
                }
                if (count >= size)
                {
                    for (int j = res; j < res + size; j++)
                        memory[j] = mID;
                    mp[mID] = res;

                    return res;
                }
            }
        }
        return -1;
    }

    int free(int mID) {
        int count = 0;
        for(int i = 0; i < sz; i++){
            if(memory[i]==mID){
                count ++;
                memory[i]=0;
            }
        }
        mp.erase(mID);
        return count;
    }
};

/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->free(mID);
 */
class FoodRatings {
public:
    struct comp {
        bool operator()( pair<int, string> p1,
                         pair<int, string> p2) const
        {
            // custom comparator to compare based on the conditions specfied in the problem
            if(p1.first != p2.first)
                return p1.first > p2.first;
            else
                return p1.second < p2.second;
        }
    };
    unordered_map<string, string> foodMap;
    map<string, set<pair<int,string>,comp>> compareMap;
    unordered_map<string, int> ratingMap;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i = 0; i < foods.size(); i++){
            foodMap[foods[i]] = cuisines[i];
            compareMap[cuisines[i]].insert({ratings[i], foods[i]});
            ratingMap[foods[i]] = ratings[i];
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuisine = foodMap[food];
        pair<int, string> foodPair = {ratingMap[food], food};
        compareMap[cuisine].erase(foodPair);
        compareMap[cuisine].insert({newRating, food});
        ratingMap[food] = newRating;
    }
    
    string highestRated(string cuisine) {
        // get the last element in the set 
        // auto it = compareMap[cuisine].rbegin();
        // to get the first element in the set
        auto it = compareMap[cuisine].begin();
        // since the food is the second element we return the second element
        return it->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */
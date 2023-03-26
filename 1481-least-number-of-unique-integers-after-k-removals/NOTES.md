Count numbers using a hash map. Then put the counts to a min heap. Remove elements from the min heap while k > 0.
​
The reason we want to use a min heap is that it takes O(m) to build it (where m is the number of unique elements). Then, it takes O(log m) to pull a single element. If we end up pulling i elements, it will take O(i log m).
int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
unordered_map<int, int> counts;
vector<int> heap;
for (auto n : arr)
++counts[n];
for (auto &p: counts)
heap.push_back(p.second);
make_heap(begin(heap), end(heap), greater<int>());
while (k > 0) {
k -= heap.front();
pop_heap(begin(heap), end(heap), greater<int>());
if (k >= 0)
heap.pop_back();
}
return heap.size();
}
Complexity Analysis
​
Time: O(n + i log m), where m is unique elements, and i - number of elements we need to remove.
Memory: O(m) for the hash map and heap.
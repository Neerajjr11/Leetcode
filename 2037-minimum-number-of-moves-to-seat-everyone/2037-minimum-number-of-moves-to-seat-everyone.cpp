class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int res = 0;
        sort(begin(seats), end(seats));
        sort(begin(students), end(students));
        for(int i = 0; i < seats.size(); i++)
            res += abs(students[i] - seats[i]);
        return res;
    }
};
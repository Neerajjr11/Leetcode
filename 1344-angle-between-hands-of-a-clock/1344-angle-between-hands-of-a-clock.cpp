class Solution {
public:
    double angleClock(int hour, int minutes) {
        // min = 360/ 60 = 6
        // hr = 360/ 12 = 30
        double min = minutes * 6;
        double hr = (hour * 30) + 30 * ((double)minutes / 60);
        double deg = abs(hr - min);
        if (deg >= 180) deg = 360 - deg;
        return deg;
    }
};
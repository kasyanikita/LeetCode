// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

bool isBadVersion(int);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int r = n;
        int m = 0;
        if (isBadVersion(1)) return 1;
        while (l < r) {
            m = l + (r - l) / 2;
            if (!isBadVersion(m)) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        if (isBadVersion(l)) {
            return l;
        }
        return l + 1;
    }
};

int main() {
    return 0;
}
class Solution {
public:
    int findComplement(int num) {
        int complement = ~num;
        int place = 31;
        while (complement & (1 << place)) place--;
        return (complement << (31 - place)) >> (31 - place);
    }
};

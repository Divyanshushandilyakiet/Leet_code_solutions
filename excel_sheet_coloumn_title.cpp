class Solution {
public:
    string convertToTitle(int columnNumber) 
    {
        map<int, string> alphabet = {
			{1, "A"}, {2, "B"}, {3, "C"}, {4, "D"}, {5, "E"}, {6, "F"}, {7, "G"}, {8, "H"}, {9, "I"},
			{10, "J"}, {11, "K"}, {12, "L"}, {13, "M"}, {14, "N"}, {15, "O"}, {16, "P"}, {17, "Q"},
			{18, "R"}, {19, "S"}, {20, "T"}, {21, "U"}, {22, "V"}, {23, "W"}, {24, "X"}, {25, "Y"}, {26,"Z"}
        };
        string res;
        do {
            if (columnNumber % 26 == 0) { res += alphabet[26]; columnNumber--; }
            else res += alphabet[columnNumber % 26];
            columnNumber /= 26;
        } while (columnNumber > 0);
        reverse(res.begin(), res.end());
        return res;
    }
};

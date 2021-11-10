class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
                string s1 = "++X", s2 = "--X", s3 = "X++", s4 = "X--";
        int c = 0;
        for (int i = 0; i < operations.size(); ++i)
        {
            if (operations[i] == s1 or operations[i] == s3)
            {
                c++;
            }
            else if (operations[i] == s4 or operations[i] == s2)
            {
                c--;
            }
        }
        return c;

    }
};

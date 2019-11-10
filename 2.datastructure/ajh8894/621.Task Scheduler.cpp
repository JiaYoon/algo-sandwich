class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int alpha[26] = {0,};
        
        for (int i = 0; i < tasks.size(); i++)
        {
            alpha[tasks[i] - 'A']++;
        }
        
        sort(alpha, alpha + 26);
        
        int count = 0;
        
        while (alpha[25] > 0) 
        {
            int i = 0;
            while (i <= n) {
                if (alpha[25] == 0) {
                    break;
                }
                if (i < 26 && alpha[25 - i] > 0) 
                {
                    alpha[25 - i]--;
                }
                count++;
                i++;
            }
             sort(alpha, alpha + 26);
        }
        
        return count;
    }
};

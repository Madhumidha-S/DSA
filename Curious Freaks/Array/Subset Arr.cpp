/*Subset of Array*/
// The below one exceed time limit
int m = a.size(), n = b.size();
for (int i = 0; i < n; i++)
{
    bool found = false;
    for (int j = 0; j < m; j++)
    {
        if (b[i] == a[j])
        {
            found = true;
            break;
        }
    }
    if (!found)
        return false;
}
return true;

// This won't exceed time limit.
/*
class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i=0,j=0;
        while(i<a.size() && j<b.size())
        {
            if(a[i]<b[j])
                i++;
            else if(a[i] == b[j])
            {
                i++;
                j++;
            }else
                return false;
        }
        return (j== b.size());
    }
};
*/
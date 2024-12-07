/*Third Largest in an Array*/
//The below code will word for almost 1200 test cases
class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        int n = arr.size();
        if(n<3)
        {
            return -1;
        }
        else
        {
            sort(arr.begin(),arr.end());
            return arr[n-3];
        }
    }
};

//These below codes will work for only small no. of test cases

//1
/*
class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        int m1=INT_MIN,m2=INT_MIN,m3=INT_MIN;
        int n = arr.size();
        
        for(int i=0;i<n;i++)
        {
            if(m1<arr[i])
            {
                m1 = arr[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(m2<arr[i] && arr[i]<m1)
            {
                m2 = arr[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(m3<arr[i] && arr[i]<m2)
            {
                m3 = arr[i];
            }
        }
        return (m3==INT_MIN) ? -1 :m3;
    }
};

//2
class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        int n = arr.size();
        if(n<3)
        {
            return -1;
        }
        int m1=INT_MIN,m2=INT_MIN,m3=INT_MIN;
        
        for (int num : arr) {
            if (num > m1) {
                m3 = m2;
                m2 = m1;
                m1 = num;
            } else if (num > m2 && num < m1) {
                m3 = m2;
                m2 = num;
            } else if (num > m3 && num < m2) {
                m3 = num;
            }
        }
        return (m3==INT_MIN) ? -1 :m3;
    }
};
*/
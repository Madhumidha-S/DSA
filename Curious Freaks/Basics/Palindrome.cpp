/*Palindrome*/

class Solution
{
public:
	string is_palindrome(int n)
	{
		int temp = n;
		int rem = 0;
		while (temp > 0)
		{
			rem = rem * 10 + temp % 10;
			temp /= 10;
		}
		if (rem == n)
			return "Yes";
		else
			return "No";
	}
};

/*
To check String Palindrome

class Solution{
	public:
		bool palindromeCheck(string& s){
			string r = string(s.rbegin(),s.rend());
			if(r==s) return true;
			else return false;
		}
};
*/
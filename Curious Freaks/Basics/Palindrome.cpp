/*Palindrome*/

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int temp=n;
		    int rem=0;
		    while(temp>0)
		    {
		        rem = rem*10 + temp%10;
		        temp/=10;
		    }
		    if(rem==n)
		        return "Yes";
		    else
		        return "No";
		}
};
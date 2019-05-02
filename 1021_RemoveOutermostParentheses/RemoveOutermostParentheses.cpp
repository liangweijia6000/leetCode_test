class Solution {
public:
	string removeOuterParentheses(string S) {
		string res;
		int flag = 0;
		for (int i=0;i<S.size();i++)
		{
			if (S[i] == ')')
			{
				flag--;
			}
			if (flag)
			{
				res += S[i];
			}
			if (S[i] == '(')
			{
				flag++;
			}
		}

		return res;        
	}
};
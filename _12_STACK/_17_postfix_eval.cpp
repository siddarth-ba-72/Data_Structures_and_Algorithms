#include <bits/stdc++.h>
using namespace std;

int precedence_val(char c)
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}

string infix_to_postfix(string inf)
{
	stack<char> stk;
	string postFix;
	for (int i = 0; i < inf.length(); i++)
	{
		char symbol = inf[i];
		if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z') || isdigit(symbol))
			postFix += symbol;
		else if (symbol == '(')
			stk.push(symbol);
		else if (symbol == ')')
		{
			while (stk.top() != '(')
			{
				postFix += stk.top();
				stk.pop();
			}
			stk.pop();
		}
		else if (precedence_val(symbol) != -1)
		{
			while (!stk.empty() && precedence_val(stk.top()) >= precedence_val(symbol))
			{
				postFix += stk.top();
				stk.pop();
			}
			stk.push(symbol);
		}
		else
		{
			while (!stk.empty() && precedence_val(symbol) <= precedence_val(stk.top()))
			{
				postFix += stk.top();
				stk.pop();
			}
			stk.push(symbol);
		}
	}
	while (!stk.empty())
	{
		postFix += stk.top();
		stk.pop();
	}
	return postFix;
};

int performOperation(int a, int b, char symbol)
{
	if (symbol == '+')
		return a + b;
	else if (symbol == '-')
		return a - b;
	else if (symbol == '*')
		return a * b;
	else if (symbol == '/')
		return a / b;
	else if (symbol == '^')
		return pow(a, b);
	else
		return -1;
}

int postFix_evaluation(string expression)
{
	stack<int> stk;
	string post_fix = infix_to_postfix(expression);
	for (int i = 0; i < post_fix.length(); i++)
	{
		char symbol = expression[i];
		if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z') || isdigit(symbol))
		{
			int num = symbol - '0';
			stk.push(num);
		}
		else
		{
			int a = stk.top();
			stk.pop();
			int b = stk.top();
			stk.pop();
			int result = performOperation(a, b, symbol);
			stk.push(result);
		}
	}
	return stk.top();
}

int main()
{
	string expression;
	cin >> expression;
	cout << infix_to_postfix(expression) << endl;
	cout << postFix_evaluation(expression) << endl;

	return 0;
}

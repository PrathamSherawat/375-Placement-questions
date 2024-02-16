// Longest Prefix Suffix

#include <bits/stdc++.h>
using namespace std;
int largest_prefix_suffix(const std::string &str)
{
int n = str.length();

if(n < 2) {
	return 0;
}

int len = 0;
int i = 1;

while(i < n)
{
	if(str[i] == str[len])
	{
	++len;
	++i;
	}
	else
	{
	i = i - len + 1;
	len = 0;
	}
}
return len>n/2? len/2:len;
}

int main()
{	
string s = "blablabla";
cout << largest_prefix_suffix(s);
return 0;
}

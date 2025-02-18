/*
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<array>
#include<algorithm>
#include<vector>
using namespace std;

vector<string> Concatenate(vector<string> s1, vector<string> s2)
{
    vector<string> s3;
    s3.reserve(s1.size() + s2.size());
    s3.insert(s3.end(), s1.begin(), s1.end());
    s3.insert(s3.end(), s2.begin(), s2.end());
    return s3;
}

vector<string> Reverse(vector<string> s)
{
    vector<string> s3;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        s3.push_back(s[i]);
    }
    return s3;
}
vector<string> Substitution(vector<string> s, string s1, string s2)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == s1)
		{
			s[i] = s2;
		}
	}
	return s;
}

int Length(vector<string>s) {
    return s.size();
}

int main()
{
    vector<string> A = { "a", "b", "c" };
    vector<string> B = { "x", "y", "z" };
    vector<string> C = { "1", "2", "3" };
    vector<string> D = Concatenate(A, C);
    vector<string> E = Reverse(B);
    for (int i = 0; i < D.size(); i++)
    {
        cout << D[i] << " ";
    }
    cout << endl;
    E = Substitution(E, "x", "a");
    for (int i = 0; i < E.size(); i++)
    {
        cout << E[i] << " ";
    }
	cout << endl<<Length(D) << endl;
    return 0;

}*/
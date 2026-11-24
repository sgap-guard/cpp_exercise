#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, word, maxWord, minWord;
    getline(cin, s);
    s += " ";
    int maxLen = 0, minLen = 101;

    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] != ' ' && s[i] != ',')
        {
            word += s[i];
        }
        else if (word.size() > 0)
        {
            if ((int)word.size() > maxLen)
            {
                maxLen = word.size();
                maxWord = word;
            }
            if ((int)word.size() < minLen)
            {
                minLen = word.size();
                minWord = word;
            }
            word.clear();
        }
    }
    cout << maxWord << endl << minWord << endl;
    return 0;
}
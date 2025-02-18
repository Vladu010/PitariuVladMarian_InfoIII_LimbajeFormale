/*#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPalindrome(const string& s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

void generatePalindromes(vector<string>& palindromes, string current, int length, const vector<char>& alphabet) {
    if (current.size() == length) {
        if (isPalindrome(current)) {
            palindromes.push_back(current);
        }
        return;
    }
    for (char c : alphabet) {
        generatePalindromes(palindromes, current + c, length, alphabet);
    }
}

int main() {
    vector<char> alphabet = { '0', '1', '2' };
    vector<string> palindromes;

    for (int length = 1; length <= 5; length++) {
        generatePalindromes(palindromes, "", length, alphabet);
    }

    for (const string& p : palindromes) {
        cout << p << endl;
    }

    return 0;
}*/
/*#include <iostream>
#include <vector>
#include <string>

using namespace std;

string concat(const string& s1, const string& s2) {
    return s1 + s2;
}

string repeat(const string& s, int n) {
    string result;
    for (int i = 0; i < n; i++) {
        result += s;
    }
    return result;
}

string reverseStr(const string& s) {
    return string(s.rbegin(), s.rend());
}

string extract(const string& s, int i, int j) {
    if (i >= 0 && j < s.size() && i <= j) {
        return s.substr(i, j - i + 1);
    }
    return "";
}

string replaceStr(const string& s, const string& sub, const string& new_sub) {
    size_t pos = s.find(sub);
    if (pos != string::npos) {
        return s.substr(0, pos) + new_sub + s.substr(pos + sub.size());
    }
    return s;
}

int main() {
    string word = "abc123";

    cout << "Concatenare: " << concat(word, "XYZ") << endl;
    cout << "Repetare: " << repeat(word, 2) << endl;
    cout << "Inversare: " << reverseStr(word) << endl;
    cout << "Extrac?ie (1, 3): " << extract(word, 1, 3) << endl;
    cout << "Înlocuire '123' cu '789': " << replaceStr(word, "123", "789") << endl;

    return 0;
}*/
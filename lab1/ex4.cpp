#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateStrings(string current, int a_count, int b_count, vector<string>& results) {
    results.push_back(current);

    if (a_count > 0) {
        generateStrings(current + "a", a_count - 1, b_count, results);
    }
    if (b_count > 0) {
        generateStrings(current + "b", a_count, b_count - 1, results);
    }
}

int main() {
    vector<string> results;
    int max_length = 4; 
    generateStrings("", max_length, max_length, results);

    for (const string& s : results) {
        cout << s << endl;
    }

    return 0;
}
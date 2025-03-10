/*#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

set<string> states = { "q0", "q1", "q2", "q3", "q4" };
set<string> alphabet = { "C", "T", "A", "H", "OK" };
map<pair<string, string>, string> transitions = {
    {{"q0", "C"}, "q1"},
    {{"q0", "T"}, "q2"},
    {{"q0", "A"}, "q3"},
    {{"q0", "H"}, "q4"},
    {{"q1", "OK"}, "q4"},
    {{"q2", "OK"}, "q4"},
    {{"q3", "OK"}, "q4"},
    {{"q4", "OK"}, "q0"},
};
string initialState = "q0";
set<string> finalStates = { "q4" };

bool processInput(const string& inputString) {
    string currentState = initialState;
    string symbol;
    size_t i = 0;

    while (i < inputString.size()) {
        if (i + 1 < inputString.size() && inputString[i] == 'O' && inputString[i + 1] == 'K') {
            symbol = "OK";
            i += 2; 
        }
        else {
            symbol = string(1, inputString[i]);
            i += 1;
        }

        if (alphabet.find(symbol) == alphabet.end()) {
            return false;
        }

        auto transition = transitions.find({ currentState, symbol });
        if (transition == transitions.end()) {
            return false;  
        }

        currentState = transition->second;
    }


    return finalStates.find(currentState) != finalStates.end();
}

int main() {
    string input1 = "COK"; 
    string input2 = "AOK"; 
    string input3 = "HOK"; 
    string input4 = "TOK"; 
    string input5 = "COKOK";

    cout << "Input 'COK' is " << (processInput(input1) ? "accepted" : "rejected") << endl;
    cout << "Input 'AOK' is " << (processInput(input2) ? "accepted" : "rejected") << endl;
    cout << "Input 'HOK' is " << (processInput(input3) ? "accepted" : "rejected") << endl;
    cout << "Input 'TOK' is " << (processInput(input4) ? "accepted" : "rejected") << endl;
    cout << "Input 'COKOK' is " << (processInput(input5) ? "accepted" : "rejected") << endl;

    return 0;
}
*/
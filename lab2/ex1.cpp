/*
#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

set<string> states = { "q0", "q1", "q2", "q3" };
set<char> alphabet = { '0', '1' };
map<pair<string, char>, string> transitions = {
    {{"q0", '0'}, "q1"},
    {{"q0", '1'}, "q2"},
    {{"q1", '0'}, "q3"},
    {{"q2", '0'}, "q1"},
    {{"q2", '1'}, "q3"}
};
string initialState = "q0";
set<string> finalStates = { "q3" };

bool processInput(const string& inputString) {
    string currentState = initialState;

    for (char symbol : inputString) {
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
    string input1 = "11";
    string input2 = "111";
    string input3 = "100";

    cout << "Input '11' is " << (processInput(input1) ? "accepted" : "rejected") << endl;
    cout << "Input '111' is " << (processInput(input2) ? "accepted" : "rejected") << endl;
    cout << "Input '100' is " << (processInput(input3) ? "accepted" : "rejected") << endl;

    return 0;
}*/
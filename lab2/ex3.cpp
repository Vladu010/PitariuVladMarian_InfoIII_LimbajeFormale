
#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

set<string> states = { "q0", "q1", "q2", "q3" };
set<char> alphabet = { 'a', 'b', 'c', 'd'};
map<pair<string, char>, string> transitions = {
    {{"q0", 'a'}, "q1"},
    {{"q0", 'b'}, "q0"},
    {{"q0", 'c'}, "q0"},
    {{"q0", 'd'}, "q0"},
    {{"q1", 'a'}, "q1"},
    {{"q1", 'b'}, "q2"},
    {{"q1", 'c'}, "q1"},
    {{"q1", 'd'}, "q1"},
    {{"q2", 'a'}, "q2"},
    {{"q2", 'b'}, "q2"},
    {{"q2", 'c'}, "q2"},
    {{"q2", 'd'}, "q3"},
    {{"q3", 'a'}, "q3"},
    {{"q3", 'b'}, "q3"},
    {{"q3", 'c'}, "q3"},
    {{"q3", 'd'}, "q3"},
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
    string input1 = "aabbcc";
    string input2 = "aaa";
    string input3 = "bbbaac";

    cout << "Input 'aabbcc' is " << (processInput(input1) ? "accepted" : "rejected") << endl;
    cout << "Input 'aaa' is " << (processInput(input2) ? "accepted" : "rejected") << endl;
    cout << "Input 'bbbaac' is " << (processInput(input3) ? "accepted" : "rejected") << endl;

    return 0;
}
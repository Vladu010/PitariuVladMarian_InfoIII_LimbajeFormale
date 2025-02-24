/*#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <cctype>

using namespace std;

set<string> states = { "q0", "q1", "q2", "q3" };
set<char> alphabet = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                     'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
map<pair<string, char>, string> transitions;

string initialState = "q0";
set<string> finalStates = { "q3" };

void initializeTransitions() {
    for (char ch : alphabet) {
        if (ch != 'c') {
            transitions[{"q0", ch}] = "q0";  
        }
        if (ch != 'a') {
            transitions[{"q1", ch}] = "q0";  
        }
        if (ch != 't') {
            transitions[{"q2", ch}] = "q0"; 
        }
       
    }

    transitions[{"q0", 'c'}] = "q1";  // q0 -> q1 on 'c'

    transitions[{"q1", 'a'}] = "q2";  // q1 -> q2 on 'a'
    transitions[{"q1", 'c'}] = "q1";  // q1 -> q1 on 'c'

    transitions[{"q2", 't'}] = "q3";  // q2 -> q3 on 't'
    transitions[{"q2", 'c'}] = "q1";  // q2 -> q1 on 'c'

}

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

void preprocessString(string& input) {
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    input.erase(remove_if(input.begin(), input.end(), [](char c) { return !isalpha(c); }), input.end());
}


int main() {
	initializeTransitions();
    string input1 = "I have a cat.";
    string input2 = "The dog is cute.";

    preprocessString(input1);
    preprocessString(input2);

    cout << "Processed Input1: " << input1 << endl; 
    cout << "Processed Input2: " << input2 << endl;  

    cout << "Input 'I have a cat.' contains 'cat': " << (processInput(input1) ? "Yes" : "No") << endl;
    cout << "Input 'The dog is cute.' contains 'cat': " << (processInput(input2) ? "Yes" : "No") << endl;
    return 0;
}*/
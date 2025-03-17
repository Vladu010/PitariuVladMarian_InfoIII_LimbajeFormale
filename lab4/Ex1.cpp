#include <iostream>
#include <map>
#include <string>

using namespace std;

enum State { S1, S2 };

string getOutput(State state) {
    return (state == S1) ? "O1" : "O2";
}

int main() {
    map<pair<State, char>, State> transitions = {
        {{S1, 'A'}, S1},
        {{S1, 'B'}, S2},
        {{S2, 'A'}, S1},
        {{S2, 'B'}, S2}
    };

    State currentState = S1;
    string inputs;

    cout << "Introduceți secvența de intrări (A/B): ";
    cin >> inputs;

    for (char input : inputs) {
        if (input == 'A' || input == 'B') {
            cout << "Intrare: " << input
                << " | Stare curentă: " << (currentState == S1 ? "S1" : "S2")
                << " | Ieșire: " << getOutput(currentState) << endl;
          
            currentState = transitions[{currentState, input}];
        }
        else {
            cout << "Caracter invalid: " << input << endl;
        }
    }

    return 0;
}

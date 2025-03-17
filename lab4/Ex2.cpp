/*#include <iostream>
#include <map>
#include <string>

using namespace std;

enum State { Q1, Q2 };
enum Input { X, Y };
enum Output { O1, O2 };

struct StateInput {
    State state;
    Input input;

    bool operator<(const StateInput& other) const {
        if (state != other.state) return state < other.state;
        return input < other.input;
    }
};

int main() {
    map<StateInput, pair<State, Output>> transitionTable = {
        {{Q1, X}, {Q2, O1}}, 
        {{Q1, Y}, {Q1, O1}}, 
        {{Q2, X}, {Q1, O2}}, 
        {{Q2, Y}, {Q2, O2}}  
    };

    State currentState = Q1;
    string inputSequence;

    cout << "Introducetii secventa de intrari (X/Y): ";
    cin >> inputSequence;

    for (char c : inputSequence) {
        Input input;
        if (c == 'X' || c == 'x') {
            input = X;
        }
        else if (c == 'Y' || c == 'y') {
            input = Y;
        }
        else {
            cerr << "Intrare invalida: " << c << endl;
            continue;
        }

        StateInput key = { currentState, input };
        if (transitionTable.find(key) != transitionTable.end()) {
            auto result = transitionTable[key];
            State nextState = result.first;
            Output output = result.second;

            cout << "Intrare: " << c << " | Stare curenta: " << (currentState == Q1 ? "Q1" : "Q2")
                << " | Stare urmatoare: " << (nextState == Q1 ? "Q1" : "Q2")
                << " | Iesire: " << (output == O1 ? "O1" : "O2") << endl;

            currentState = nextState;
        }
        else {
            cerr << "Tranzitie nedefinita pentru starea " << currentState << " si intrarea " << input << endl;
        }
    }

    return 0;
}*/
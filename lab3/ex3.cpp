#include <iostream>
#include <map>
#include <set>
using namespace std;

enum State { A, B, C };

map<State, map<int, State>> transitionTable = {
    {A, {{0, A}, {1, B}, {2, C}}},
    {B, {{0, B}, {1, C}, {2, C}}},
    {C, {{0, C}, {1, C}, {2, C}}}
};

State currentState = A; 

void processInput(int input) {
    if (transitionTable[currentState].find(input) != transitionTable[currentState].end()) {
        currentState = transitionTable[currentState][input];
        cout << "Tranzitie realizata. Noua stare: " << currentState << endl;
    }
    else {
        cout << "Input invalid!" << endl;
    }
}

int main() {
    int input;
    cout << "Automat DFA (derivat din NFA)\n";
    cout << "Stare initiala: A (echivalent cu {q0})\n";

    while (true) {
        cout << "Introduceti un simbol (0, 1, 2) sau -1 pentru a iesi: ";
        cin >> input;
        if (input == -1) break;
        processInput(input);
    }

    cout << "Program incheiat." << endl;
    return 0;
}

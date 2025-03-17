/*#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <queue>

using namespace std;

map<int, map<char, vector<int>>> transitions;
set<int> final_states;
int initial_state = 0;

void add_transition(int from, char symbol, int to) {
    transitions[from][symbol].push_back(to);
}

set<int> epsilon_closure(int state) {
    set<int> closure;
    queue<int> q;
    closure.insert(state);
    q.push(state);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (transitions[current].count('e')) {
            for (int next : transitions[current]['e']) {
                if (closure.find(next) == closure.end()) {
                    closure.insert(next);
                    q.push(next);
                }
            }
        }
    }

    return closure;
}

bool accepts(string input) {
    set<int> current_states = epsilon_closure(initial_state);

    for (char symbol : input) {
        set<int> next_states;

        for (int state : current_states) {
            if (transitions[state].count(symbol)) {
                for (int next : transitions[state][symbol]) {
                    set<int> closure = epsilon_closure(next);
                    next_states.insert(closure.begin(), closure.end());
                }
            }
        }

        current_states = next_states;
    }

    for (int state : current_states) {
        if (final_states.find(state) != final_states.end()) {
            return true;
        }
    }

    return false;
}

int main() {

    add_transition(0, 'a', 1);
    add_transition(1, 'b', 2);
    add_transition(2, 'a', 2);
    add_transition(2, 'b', 2);
    add_transition(2, 'a', 3);
    add_transition(3, 'a', 4);
    add_transition(0, 'e', 4); 

    final_states.insert(4);

    vector<string> test_cases = { "a", "ab", "aba", "abb", "abaa", "abab", "b", "aa" };

    for (const string& test : test_cases) {
        cout << "Cuvant: " << test << " -> " << (accepts(test) ? "ACCEPTAT" : "RESPINS") << endl;
    }

    return 0;
}
*/
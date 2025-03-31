//#include <iostream>
//#include <set>
//#include <string>
//#include <regex>
//
//using namespace std;
//
//set<string> genereazaLimbaj(const string& expresie) {
//    set<string> limbaj;
//    regex rgx("\\(([^)]+)\\)|([a-z]+)");
//    smatch match;
//    string temp = expresie;
//
//    while (regex_search(temp, match, rgx)) {
//        string rezultat = match[1].str().empty() ? match[2].str() : match[1].str();
//        regex split_rgx("\\|");
//        sregex_token_iterator it(rezultat.begin(), rezultat.end(), split_rgx, -1);
//        sregex_token_iterator end;
//        while (it != end) {
//            limbaj.insert(*it);
//            ++it;
//        }
//        temp = match.suffix().str();
//    }
//    return limbaj;
//}
//
//void afisareLimbaj(const set<string>& limbaj) {
//    cout << "{";
//    for (auto it = limbaj.begin(); it != limbaj.end(); ++it) {
//        if (it != limbaj.begin()) cout << ", ";
//        cout << *it;
//    }
//    cout << "}" << endl;
//}
//
//set<string> reuniune(const set<string>& L1, const set<string>& L2) {
//    set<string> rezultat = L1;
//    rezultat.insert(L2.begin(), L2.end());
//    return rezultat;
//}
//
//set<string> intersectie(const set<string>& L1, const set<string>& L2) {
//    set<string> rezultat;
//    for (const auto& cuvant : L1) {
//        if (L2.find(cuvant) != L2.end()) {
//            rezultat.insert(cuvant);
//        }
//    }
//    return rezultat;
//}
//
//set<string> diferenta(const set<string>& L1, const set<string>& L2) {
//    set<string> rezultat = L1;
//    for (const auto& cuvant : L2) {
//        rezultat.erase(cuvant);
//    }
//    return rezultat;
//}
//
//set<string> concatenare(const set<string>& L1, const set<string>& L2) {
//    set<string> rezultat;
//    for (const auto& cuvant1 : L1) {
//        for (const auto& cuvant2 : L2) {
//            rezultat.insert(cuvant1 + cuvant2);
//        }
//    }
//    return rezultat;
//}
//
//set<string> putere(const set<string>& L, int n) {
//    if (n == 0) return { "" };
//    if (n == 1) return L;
//    set<string> rezultat = L;
//    for (int i = 1; i < n; ++i) {
//        rezultat = concatenare(rezultat, L);
//    }
//    return rezultat;
//}
//
//int main() {
//    string expr1, expr2;
//    cout << "Introduceti expresia regulata pentru L1: ";
//    cin >> expr1;
//    cout << "Introduceti expresia regulata pentru L2: ";
//    cin >> expr2;
//
//    set<string> L1 = genereazaLimbaj(expr1);
//    set<string> L2 = genereazaLimbaj(expr2);
//
//    int optiune, n;
//    do {
//        cout << "\nMeniu Operatii pe Limbaje Regulate:\n";
//        cout << "1. Reuniune\n";
//        cout << "2. Intersectie\n";
//        cout << "3. Diferenta L1 - L2\n";
//        cout << "4. Concatenare\n";
//        cout << "5. Putere L1^n\n";
//        cout << "0. Iesire\n";
//        cout << "Optiune: ";
//        cin >> optiune;
//
//        switch (optiune) {
//        case 1:
//            afisareLimbaj(reuniune(L1, L2));
//            break;
//        case 2:
//            afisareLimbaj(intersectie(L1, L2));
//            break;
//        case 3:
//            afisareLimbaj(diferenta(L1, L2));
//            break;
//        case 4:
//            afisareLimbaj(concatenare(L1, L2));
//            break;
//        case 5:
//            cout << "Introduceti valoarea lui n: ";
//            cin >> n;
//            afisareLimbaj(putere(L1, n));
//            break;
//        case 0:
//            cout << "Iesire din program.\n";
//            break;
//        default:
//            cout << "Optiune invalida!\n";
//        }
//    } while (optiune != 0);
//
//    return 0;
//}

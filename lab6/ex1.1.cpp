//#include <iostream>
//#include <set>
//#include <string>
//#include <regex>
//
//using namespace std;
//
//bool verifyL(const string& cuvant) {
//    int numarZero = 0, numarUnu = 0;
//    int i = 0;
//    while (i < cuvant.size() && cuvant[i] == '0') {
//        numarZero++;
//        i++;
//    }
//    while (i < cuvant.size() && cuvant[i] == '1') {
//        numarUnu++;
//        i++;
//    }
//    return (i == cuvant.size() && numarZero > numarUnu);
//}
//
//int main() {
//    string cuvant;
//    cout << "Introduceti un cuvant format din 0,1: ";
//    cin >> cuvant;
//
//    if (verifyL(cuvant)) {
//        cout << "Cuvantul apartine limbajului L.\n";
//    }
//    else {
//        cout << "Cuvantul NU apartine limbajului L.\n";
//    }
//
//    return 0;
//}

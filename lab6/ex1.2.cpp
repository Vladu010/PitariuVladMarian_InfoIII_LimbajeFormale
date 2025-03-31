//#include <iostream>
//#include <set>
//#include <string>
//#include <regex>
//
//using namespace std;
//
//bool verifyL(const string& cuvant) {
//    int numarA = 0, numarB = 0;
//    int i = 0;
//    while (i < cuvant.size() && cuvant[i] == 'a') {
//        numarA++;
//        i++;
//    }
//    while (i < cuvant.size() && cuvant[i] == 'b') {
//        numarB++;
//        i++;
//    }
//    return (i == cuvant.size() && numarA <= numarB);
//}
//
//int main() {
//    string cuvant;
//    cout << "Introduceti un cuvant format din a,b: ";
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

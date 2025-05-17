//#include <iostream>
//using namespace std;
//int step = 0; 
//void hanoi(int n, char source, char auxiliary, char target) {
//    if (n == 1) {
//        cout << ++step << ". " << source << " -> " << target << endl;
//        return;
//    }
//    hanoi(n - 1, source, target, auxiliary);
//    cout << ++step << ". " << source << " -> " << target << endl;
//    hanoi(n - 1, auxiliary, source, target);
//}
//
//int main() {
//    char source, target;
//    int n;
//    cin >> source >> target >> n;
//    char auxiliary = 'A' + 'B' + 'C' - source - target;
//    hanoi(n, source, auxiliary, target);
//    return 0;
//}


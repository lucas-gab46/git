#include <iostream>
#include <deque>
#include <vector>
using namespace std;

vector<int> calcularIntervalos(vector<int>& P) {
    int n = P.size();
    vector<int> S(n);
    deque<int> dq;

    for (int i = 0; i < n; ++i) {
        while (!dq.empty() && P[dq.back()] <= P[i]) {
            dq.pop_back();
        }

        if (dq.empty()) {
            S[i] = i + 1;
        } else {
            S[i] = i - dq.back();
        }

        dq.push_back(i);
    }

    return S;
}

int main() {
    vector<int> P = {120, 100, 80, 90, 80, 95, 105, 100, 90, 80, 70, 90, 100, 115, 125, 110, 95, 90, 80, 100};

    vector<int> intervalos = calcularIntervalos(P);

    cout << "Intervalos: ";
    for (int i = 0; i < intervalos.size(); ++i) {
        cout << intervalos[i] << " ";
    }
    cout << endl;

    return 0;
}

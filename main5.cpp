#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int calcularCustoMinimo(vector<int>& comprimentos) {
    priority_queue<int, vector<int>, greater<int>> filaPrioridades(comprimentos.begin(), comprimentos.end());
    int custoFinal = 0;

    while (filaPrioridades.size() > 1) {
        int corda1 = filaPrioridades.top();
        filaPrioridades.pop();
        int corda2 = filaPrioridades.top();
        filaPrioridades.pop();
        int novoCusto = corda1 + corda2;
        custoFinal += novoCusto;
        filaPrioridades.push(novoCusto);
    }

    return custoFinal;
}

int main() {
    vector<int> comprimentosCordas = {20, 13, 15, 10, 19, 11, 8, 14, 17, 2, 9, 3, 18, 1, 16, 4, 12, 7, 5, 6};
    int custoTotal = calcularCustoMinimo(comprimentosCordas);
    cout << "Custo total: " << custoTotal << endl;
    return 0;
}


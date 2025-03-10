#include <iostream>
#include <vector>
#include <algorithm>

int jogarJogo(std::vector<int>& A, std::vector<int>& B, int MAX_SUM) {
    int soma_acumulada = 0;
    int pontos = 0;
    int i = 0, j = 0;

    while (i < A.size() || j < B.size()) {
        int valor_a = (i < A.size()) ? A[i] : INT_MAX;
        int valor_b = (j < B.size()) ? B[j] : INT_MAX;

        if (soma_acumulada + valor_a <= MAX_SUM && valor_a <= valor_b) {
            soma_acumulada += valor_a;
            i++;
        } else if (soma_acumulada + valor_b <= MAX_SUM) {
            soma_acumulada += valor_b;
            j++;
        } else {
            break;
        }

        pontos++;
    }

    return pontos;
}

int main() {
    std::vector<int> A = {5, 2, 9, 4, 6, 3, 1, 2, 4};
    std::vector<int> B = {2, 6, 9, 7, 2, 5, 1, 4, 2, 5, 3};
    int MAX_SUM = 20;

    int resultado = jogarJogo(A, B, MAX_SUM);
    std::cout << "A pontuação máxima é: " << resultado << std::endl;

    return 0;
}

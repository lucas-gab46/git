#include <iostream>
#include <vector>
using namespace std;

int alunosQueNaoComem(vector<int>& estudantes, vector<int>& sanduiches) {
    int tentativas = 0;
    int n = estudantes.size();

    while (!estudantes.empty() && tentativas < n) {
        if (estudantes.front() == sanduiches.front()) {
            estudantes.erase(estudantes.begin());
            sanduiches.erase(sanduiches.begin());
            tentativas = 0;
            n--;
        } else {
            estudantes.push_back(estudantes.front());
            estudantes.erase(estudantes.begin());
            tentativas++;
        }
    }

    return estudantes.size();
}

int main() {
    vector<int> estudantes = {1, 1, 0, 0};
    vector<int> sanduiches = {0, 1, 0, 1};

    int resultado = alunosQueNaoComem(estudantes, sanduiches);

    cout << "Alunos que não conseguem comer: " << resultado << endl;

    return 0;
}

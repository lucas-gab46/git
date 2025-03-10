#include <iostream>
#include <cstdlib>
#define SIZE 50;
using namespace std;
int main () {

int *vet = nullptr;
vet = new int [SIZE];

for (int i = 0; i < SIZE; i++)
vet[i] = rand()%10;
std::cout << "Vetor Dinamico Criado" << std::endl;
for(int = 0; i < SIZE; i++) {
std::cout << vet[i] << "  ";

delete vet;
}
}

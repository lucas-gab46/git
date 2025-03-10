#include <iostream>
#include <stdexcept>

class NumeroComplexo {
private:
    double real;
    double imaginario;

public:
    NumeroComplexo(double a, double b) : real(a), imaginario(b) {}

    void exibir() const {
        std::cout << real;
        if (imaginario >= 0) {
            std::cout << " + " << imaginario << "i" << std::endl;
        } else {
            std::cout << " - " << -imaginario << "i" << std::endl;
        }
    }

    NumeroComplexo somar(const NumeroComplexo& outro) const {
        return NumeroComplexo(real + outro.real, imaginario + outro.imaginario);
    }

    NumeroComplexo subtrair(const NumeroComplexo& outro) const {
        return NumeroComplexo(real - outro.real, imaginario - outro.imaginario);
    }

    NumeroComplexo multiplicar(const NumeroComplexo& outro) const {
        double r = real * outro.real - imaginario * outro.imaginario;
        double i = real * outro.imaginario + imaginario * outro.real;
        return NumeroComplexo(r, i);
    }

    NumeroComplexo dividir(const NumeroComplexo& outro) const {
        double denominador = outro.real * outro.real + outro.imaginario * outro.imaginario;
        if (denominador == 0) {
            std::cout << "Erro: divisão por zero." << std::endl;
            return NumeroComplexo(0, 0);
        }
        double r = (real * outro.real + imaginario * outro.imaginario) / denominador;
        double i = (imaginario * outro.real - real * outro.imaginario) / denominador;
        return NumeroComplexo(r, i);
    }
};

int main() {
    NumeroComplexo z1(2, 3);
    NumeroComplexo z2(4, 2);

    std::cout << "z1: ";
    z1.exibir();
    std::cout << "z2: ";
    z2.exibir();

    NumeroComplexo soma = z1.somar(z2);
    std::cout << "Soma: ";
    soma.exibir();

    NumeroComplexo subtracao = z1.subtrair(z2);
    std::cout << "Subtração: ";
    subtracao.exibir();

    NumeroComplexo multiplicacao = z1.multiplicar(z2);
    std::cout << "Multiplicação: ";
    multiplicacao.exibir();

    NumeroComplexo divisao = z1.dividir(z2);
    std::cout << "Divisão: ";
    divisao.exibir();

    return 0;
}

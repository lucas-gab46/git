int josephus(int n, int k) {
 if (n == 1) {
 return 0; // Retorna 0, pois estamos usando indexação 0
 }
 // Chamada recursiva
 return (josephus(n - 1, k) + k) % n;
}
int main() {
 int n, k;

 printf("Digite o número de soldados (n): ");
 scanf("%d", &n);
 printf("Digite o passo (k): ");
 scanf("%d", &k);

 int sobrevivente = josephus(n, k) + 1; // +1 para retornar a posição em indexação 1
 printf("O sobrevivente está na posição: %d\n", sobrevivente);

 return 0;
}
// Professor: Ruy Barbosa Figueiredo Júnior
// Curso : ADS
// Disciplina: Algoritmos e Programação

// 1) Faça um algoritmo que leia 5 números inteiros, armazene em um vetor e posteriormente
// imprima todos os 5 números.

#include <stdio.h>
#include <locale.h>
int main()
{
int vet1[5], i;
setlocale(LC_ALL, "Portuguese");
for (i=0;i<5;i++)
{
printf("\nDigite o %dº numero do vetor 1: ", i+1);
scanf("%d%*c", &vet1[i]);
}
printf("\n\nVetor 1: ");
for (i=0;i<5;i++)
printf("%d ", vet1[i]);
getchar();
return 0;
}

// 2) Faça um algoritmo que leia 5 números inteiros, armazene em um vetor e posteriormente
// imprima todos os 5 números. Imprima também a soma de todos eles.

#include <stdio.h>
#include <locale.h>
int main()
{
int vet1[5], i;
int soma = 0;
setlocale(LC_ALL, "Portuguese");
for (i=0;i<5;i++)
{
printf("\nDigite o %dº numero do vetor 1: ", i+1);
scanf("%d%*c", &vet1[i]);
}
printf("\n\nVetor 1: ");
for (i=0;i<5;i++){
printf("%d ", vet1[i]);
}
for (i=0;i<5;i++){
soma += vet1[i];
}
printf("\n\nSoma dos vetores:%d", soma);
getchar();
return 0;
}

// 3) Faça um algoritmo que leia 6 idades, armazene em um vetor e posteriormente adicione 3
// anos para cada idade digitada. Imprima as novas idades.

#include <stdio.h>
int main() {
int idades[6];
int i;
printf("Digite as 6 idades:\n");
for (i = 0; i < 6; i++) {
scanf("%d", &idades[i]);
idades[i] += 3;
}
printf("Novas idades:\n");
for (i = 0; i < 6; i++) {
printf("%d\n", idades[i]);
}
return 0;
}

// 4) Faça um algoritmo que receba 5 números, armazene em um vetor. Posteriormente
// armazene estes números em um segundo vetor somando o valor 2 para cada número.
// Imprima os números armazenados no primeiro vetor e imprima o segundo vetor também.

#include <stdio.h>
int main() {
int numeros1[5];
int numeros2[5];
int i;
printf("Digite 5 números:\n");
for (i = 0; i < 5; i++) {
scanf("%d", &numeros1[i]);
numeros2[i] = numeros1[i] + 2; // Adiciona 2 a cada número e armazena no segundo vetor
}
printf("Números armazenados no primeiro vetor:\n");
for (i = 0; i < 5; i++) {
printf("%d ", numeros1[i]);
}
printf("\n");
printf("Números armazenados no segundo vetor:\n");
for (i = 0; i < 5; i++) {
printf("%d ", numeros2[i]);
}
printf("\n");
return 0;
}

// 5) Carregue dois vetores com 10 números inteiros cada. Gere um terceiro vetor somando os
// elementos do primeiro vetor com o segundo vetor. Imprima o vetor resultante.
// Esboço:
// VETNUM1
// 10 20 13 4 5 40 55 2 35 8
// 0  1  2  3 4 5  6  7  8 9
// VETNUM2
// 4 14 23 1 55 43 14 18 16 3
// 0 1  2  3 4  5  6  7  8  9
// VETSOMA
// 14 34 36 5 60 83 69 20 51 11
// 0  1  2  3 4  5  6  7  8  9

#include <stdio.h>
int main() {
int primeiro_vetor[10];
int segundo_vetor[10];
int terceiro_vetor[10];
printf("Digite os elementos do primeiro vetor:\n");
for (int i = 0; i < 10; i++) {
scanf("%d", &primeiro_vetor[i]);
}
printf("Digite os elementos do segundo vetor:\n");
for (int i = 0; i < 10; i++) {
scanf("%d", &segundo_vetor[i]);
}
for (int i = 0; i < 10; i++) {
terceiro_vetor[i] = primeiro_vetor[i] + segundo_vetor[i];
}
printf("Vetor resultante:\n");
for (int i = 0; i < 10; i++) {
printf("%d ", terceiro_vetor[i]);
}
printf("\n");
return 0;
}

// 6) Carregue dois vetores com 10 números inteiros cada. Gere um terceiro vetor somando os
// elementos do primeiro vetor com o segundo (armazene essa soma invertida, ou seja, de
// trás pra frente). Imprima o vetor resultante.
// Esboço:
// VETNUM1
// 10 20 13 4 5 40 55 2 35 8
// 0  1  2  3 4 5  6  7 8  9
// VETNUM2
// 4 14 23 1 55 43 14 18 16 3
// 0 1  2  3 4  5  6  7  8  9
// VETSOMA
// 11 51 20 69 83 60 5 36 34 14
// 0  1  2  3  4  5  6 7  8  9

#include <stdio.h>
int main() {
int primeiro_vetor[10];
int segundo_vetor[10];
int terceiro_vetor[10];
printf("Digite os elementos do primeiro vetor:\n");
for (int i = 0; i < 10; i++) {
scanf("%d", &primeiro_vetor[i]);
}
printf("Digite os elementos do segundo vetor:\n");
for (int i = 0; i < 10; i++) {
scanf("%d", &segundo_vetor[i]);
}
for (int i = 0; i < 10; i++) {
terceiro_vetor[9 - i] = primeiro_vetor[i] + segundo_vetor[i];
}
printf("Vetor resultante:\n");
for (int i = 0; i < 10; i++) {
printf("%d ", terceiro_vetor[i]);
}
printf("\n");
return 0;
}

// 7) Escreva um algoritmo que leia um vetor de 5 elementos inteiros. Atualize esses números
// multiplicando por 10, quando o índice do vetor for impar.

#include <stdio.h>
int main() {
int vetor[5];
printf("Digite os elementos do vetor:\n");
for (int i = 0; i < 5; i++) {
scanf("%d", &vetor[i]);
}
printf("Vetor antes da atualizacao:\n");
for (int i = 0; i < 5; i++) {
printf("%d ", vetor[i]);
}
printf("\n");
for (int i = 0; i < 5; i++) {
if (i % 2 == 0) {
vetor[i] *= 10;
}
}
printf("Vetor depois da atualizacao:\n");
for (int i = 0; i < 5; i++) {
printf("%d ", vetor[i]);
}
printf("\n");
return 0;
}

// 8) Escreva um algoritmo que leia um vetor de 5 elementos inteiros. Atualize esses números
// multiplicando por 10, quando o valor armazenado no vetor for impar.

#include <stdio.h>
int main() {
int vetor[5];
printf("Digite os elementos do vetor:\n");
for (int i = 0; i < 5; i++) {
scanf("%d", &vetor[i]);
}
printf("Vetor antes da atualizacao:\n");
for (int i = 0; i < 5; i++) {
printf("%d ", vetor[i]);
}
printf("\n");
for (int i = 0; i < 5; i++) {
if (vetor[i] % 2 != 0) {
vetor[i] *= 10;
}
}
printf("Vetor depois da atualizacao:\n");
for (int i = 0; i < 5; i++) {
printf("%d ", vetor[i]);
}
printf("\n");
return 0;
}

// 9) Escreva um algoritmo que leia um array de 5 elementos inteiros. Solicite ao usuário a
// digitação de um número e verifique se o mesmo se encontra no vetor. Se sim, avise o que
// o número foi encontrado e sua posição, caso contrário informe que o número não se
// encontra no vetor.

#include <stdio.h>
int main() {
int vetor[5];
int numero;
printf("Digite os elementos do vetor:\n");
for (int i = 0; i < 5; i++) {
scanf("%d", &vetor[i]);
}
printf("Digite um numero: ");
scanf("%d", &numero);
int posicao = -1;
for (int i = 0; i < 5; i++) {
if (vetor[i] == numero) {
posicao = i;
break;
}
}
if (posicao != -1) {
printf("O numero %d foi encontrado na posicao %d.\n", numero, posicao);
} else {
printf("O numero %d nao foi encontrado no vetor.\n", numero);
}
return 0;
}

// 10)Carregue dois arrays com 10 números inteiros cada. Gere um terceiro array somando os
// elementos do primeiro array com o segundo vetor. Imprima o array resultante.
// Esboço:
// VETNUM1
// 10 20 13 4 5 40 55 2 35 8
// 0  1  2  3 4 5  6  7 8  9
// VETNUM2
// 4 14 23 1 55 43 14 18 16 3
// 0 1  2  3 4  5  6  7  8  9
// VETSOMA
// 14 34 36 5 60 83 69 20 51 11
// 0  1  2  3 4  5  6  7  8  9

#include <stdio.h>
int main() {
int primeiro_vetor[10];
int segundo_vetor[10];
int terceiro_vetor[10];
printf("Digite os elementos do primeiro vetor:\n");
for (int i = 0; i < 10; i++) {
scanf("%d", &primeiro_vetor[i]);
}
printf("Digite os elementos do segundo vetor:\n");
for (int i = 0; i < 10; i++) {
scanf("%d", &segundo_vetor[i]);
}
for (int i = 0; i < 10; i++) {
terceiro_vetor[i] = primeiro_vetor[i] + segundo_vetor[i];
}
printf("Vetor resultante:\n");
for (int i = 0; i < 10; i++) {
printf("%d ", terceiro_vetor[i]);
}
printf("\n");
return 0;
}

// 11) Dados os arrays x e y com 10 elementos cada um, que serão inseridos pelo usuário. Gere
// um terceiro array z - unindo x e y. Imprima o array resultante.
// Esboço:
// x
// 10 20 13 4 5 40 55 2 35 8
// 0  1  2  3 4 5  6  7 8  9
// y
// 4 14 23 1 55 43 14 18 16 3
// 0 1  2  3 4  5  6  7  8  9
// z
// 10 20 13 4 5 40 55 2 35 8 4 14 23 1 55 43 14 18 16 3
// 0  1  2  3 4 5  6 7 8 9 10 11 12 13 14 15 16 17 18 19

#include <stdio.h>
int main() {
int x[10];
int y[10];
int z[20];
printf("Digite os elementos do array x:\n");
for (int i = 0; i < 10; i++) {
scanf("%d", &x[i]);
}
printf("Digite os elementos do array y:\n");
for (int i = 0; i < 10; i++) {
scanf("%d", &y[i]);
}
// Unindo x e y em z
int z_index = 0;
for (int i = 0; i < 10; i++) {
z[z_index] = x[i];
z_index++;
}
for (int i = 0; i < 10; i++) {
z[z_index] = y[i];
z_index++;
}
printf("Array resultante z:\n");
for (int i = 0; i < 20; i++) {
printf("%d ", z[i]);
}
printf("\n");
return 0;
}

// 12) Faça um algoritmo que armazene as descrições de 5 produtos, armazene também os
// preços de venda dos mesmos.
// Atualize os preços de venda aplicando o percentual de 10%. Imprima as descrições e seus
// novos preços de venda.

#include <stdio.h>
#define TAMANHO 5
int main() {
char descricao[TAMANHO][100];
float preco[TAMANHO];
// Armazenando as descrições e preços dos produtos
printf("Digite as descrições dos produtos:\n");
for (int i = 0; i < TAMANHO; i++) {
printf("Produto %d: ", i + 1);
scanf("%s", descricao[i]);
}
printf("\nDigite os preços de venda dos produtos:\n");
for (int i = 0; i < TAMANHO; i++) {
printf("Preço do produto %d: ", i + 1);
scanf("%f", &preco[i]);
}
// Atualizando os preços de venda aplicando o percentual de 10%
for (int i = 0; i < TAMANHO; i++) {
preco[i] += (preco[i] * 0.10);
}
// Imprimindo as descrições e os novos preços de venda
printf("\nDescrições e Novos Preços de Venda:\n");
for (int i = 0; i < TAMANHO; i++) {
printf("Produto: %s | Novo Preço de Venda: %.2f\n", descricao[i], preco[i]);
}
return 0;
}

// 13) Elabore um algoritmo que, dados dois vetores inteiros de 10 posições, efetue as
// respectivas operações indicadas por outro vetor de 10 posições caracteres também
// fornecido pelo usuário, contendo as quatro operações aritméticas em qualquer
// combinação e armazenando os resultados em um terceiro vetor.

#include <stdio.h>
#include <locale.h>
int main()
{
char vetop[10];
float vetr[10];
int vet1[10], vet2[10], i;
setlocale(LC_ALL, "Portuguese");
for (i=0;i<10;i++)
{
printf("\nDigite o %d numero do vetor 1: ", i+1);
scanf("%d%*c", &vet1[i]);
printf("\nDigite o %d numero do vetor 2: ", i+1);
scanf("%d%*c", &vet2[i]);
printf("\n digite '+' para soma,\ndigite '-' para subtracao,\ndigite '*' para multiplicao,\ndigite '/' para
divisao\n");
scanf("%c%*c", &vetop[i]);
switch (vetop[i])
{
case '+':vetr[i]=vet1[i]+vet2[i];
break;
case '-':vetr[i]=vet1[i]-vet2[i];
break;
case '*':vetr[i]=vet1[i]*vet2[i];
break;
case '/':vetr[i]=vet1[i]/vet2[i];
break;
default:printf ("caractere invalido");
}
}
printf("\n\nVet 1: ");
for (i=0;i<5;i++)
printf("%d ", vet1[i]);
printf("\n\nVet 2: ");
for (i=0;i<5;i++)
printf("%d ", vet2[i]);
printf("\n\nVetop: ");
for (i=0;i<5;i++)
printf("%c ", vetop[i]);
printf("\n\nVetr: ");
for (i=0;i<5;i++)
printf("%5.2f ", vetr[i]);
getchar();
return 0;
}

// 14) Faça um algoritmo que preencha um vetor de 100 inteiros, colocando 1 na posição par e 0
// na posição impar, considere que no índice zero do vetor será colocado o número 1.

#include <stdio.h>
int main() {
int vetor[100];
vetor[0] = 1; // Coloca o número 1 no índice zero
for (int i = 1; i < 100; i++) {
if (i % 2 == 0) {
vetor[i] = 1; // Coloca o número 1 nas posições pares
} else {
vetor[i] = 0; // Coloca o número 0 nas posições ímpares
}
}
// Imprime o vetor
for (int i = 0; i < 100; i++) {
printf("%d ", vetor[i]);
}
printf("\n");
return 0;
}

// 15) Faça um algoritmo que preencha dois vetores de e realize a seguinte operação: o produto
// do primeiro vetor pelo inverso do segundo, o vetor é de reais e possui 20 posições.

#include <stdio.h>
#define TAMANHO 20
int main() {
float vetor1[TAMANHO];
float vetor2[TAMANHO];
float resultado[TAMANHO];
// Preenchendo os vetores
printf("Digite os elementos do primeiro vetor:\n");
for (int i = 0; i < TAMANHO; i++) {
printf("Elemento %d: ", i + 1);
scanf("%f", &vetor1[i]);
}
printf("\nDigite os elementos do segundo vetor:\n");
for (int i = 0; i < TAMANHO; i++) {
printf("Elemento %d: ", i + 1);
scanf("%f", &vetor2[i]);
}
// Realizando a operação
for (int i = 0; i < TAMANHO; i++) {
resultado[i] = vetor1[i] * (1.0 / vetor2[i]);
}
// Imprimindo o resultado
printf("\nResultado:\n");
for (int i = 0; i < TAMANHO; i++) {
printf("%.2f ", resultado[i]);
}
printf("\n");
return 0;
}

// 16) Faça um algoritmo utilizando vetores vetores para que este realize a seguinte operação: o
// produto do primeiro vetor pelo inverso do segundo é armazenado a partir do centro para as
// bordas; de modo alternado, o vetor é de reais e possui 20 posições

#include <stdio.h>
#define TAMANHO 20
int main() {
float vetor1[TAMANHO];
float vetor2[TAMANHO];
float resultado[TAMANHO];
// Preenchendo os vetores
printf("Digite os elementos do primeiro vetor:\n");
for (int i = 0; i < TAMANHO; i++) {
printf("Elemento %d: ", i + 1);
scanf("%f", &vetor1[i]);
}
printf("\nDigite os elementos do segundo vetor:\n");
for (int i = 0; i < TAMANHO; i++) {
printf("Elemento %d: ", i + 1);
scanf("%f", &vetor2[i]);
}
// Realizando a operação e armazenando a partir do centro para as bordas
int inicio = 0;
int fim = TAMANHO - 1;
for (int i = TAMANHO / 2; i >= 0; i--) {
resultado[inicio] = vetor1[i] * (1.0 / vetor2[i]);
resultado[fim] = vetor1[TAMANHO - 1 - i] * (1.0 / vetor2[TAMANHO - 1 - i]);
inicio++;
fim--;
}
// Imprimindo o resultado
printf("\nResultado:\n");
for (int i = 0; i < TAMANHO; i++) {
printf("%.2f ", resultado[i]);
}
printf("\n");
return 0;
}

// 17) Escreva uma algoritmo que leia um vetor de 20 elementos e conte quantos valores pares
// existem no vetor.
#include <stdio.h>
#define TAMANHO 20
int main() {
int vetor[TAMANHO];
int countPares = 0;
// Preenchendo o vetor
printf("Digite os elementos do vetor:\n");
for (int i = 0; i < TAMANHO; i++) {
printf("Elemento %d: ", i + 1);
scanf("%d", &vetor[i]);
}
// Contando os valores pares
for (int i = 0; i < TAMANHO; i++) {
if (vetor[i] % 2 == 0) {
countPares++;
}
}
// Imprimindo o resultado
printf("Quantidade de valores pares: %d\n", countPares);
return 0;
}

// 18) Escreva um algoritmo que leia um vetor de 10 posições de números inteiros e faça a
// ordenação em um outro vetor na ordem crescente dos números. Ao final, Imprima os dois
// vetores.

#include <stdio.h>
#define TAMANHO 10
int main() {
int vetorOriginal[TAMANHO];
int vetorOrdenado[TAMANHO];
// Preenchendo o vetor original
printf("Digite os elementos do vetor:\n");
for (int i = 0; i < TAMANHO; i++) {
printf("Elemento %d: ", i + 1);
scanf("%d", &vetorOriginal[i]);
}
// Copiando o vetor original para o vetor ordenado
for (int i = 0; i < TAMANHO; i++) {
vetorOrdenado[i] = vetorOriginal[i];
}
// Ordenando o vetor ordenado
for (int i = 0; i < TAMANHO - 1; i++) {
for (int j = 0; j < TAMANHO - i - 1; j++) {
if (vetorOrdenado[j] > vetorOrdenado[j + 1]) {
int temp = vetorOrdenado[j];
vetorOrdenado[j] = vetorOrdenado[j + 1];
vetorOrdenado[j + 1] = temp;
}
}
}
// Imprimindo os vetores
printf("\nVetor Original: ");
for (int i = 0; i < TAMANHO; i++) {
printf("%d ", vetorOriginal[i]);
}
printf("\nVetor Ordenado: ");
for (int i = 0; i < TAMANHO; i++) {
printf("%d ", vetorOrdenado[i]);
}
printf("\n");
return 0;
}

// 19) Escreva um algoritmo que leia um vetor de 10 posições de números inteiros e faça a
// ordenação em um outro vetor na ordem decrescente dos números. Ao final, Imprima os dois
// vetores.

#include <stdio.h>
#define TAMANHO 10
int main() {
nt vetorOriginal[TAMANHO];
int vetorOrdenado[TAMANHO];
// Preenchendo o vetor original
printf("Digite os elementos do vetor:\n");
for (int i = 0; i < TAMANHO; i++) {
printf("Elemento %d: ", i + 1);
scanf("%d", &vetorOriginal[i]);
}
// Copiando o vetor original para o vetor ordenado
for (int i = 0; i < TAMANHO; i++) {
vetorOrdenado[i] = vetorOriginal[i];
}
// Ordenando o vetor ordenado em ordem decrescente
for (int i = 0; i < TAMANHO - 1; i++) {
for (int j = 0; j < TAMANHO - i - 1; j++) {
if (vetorOrdenado[j] < vetorOrdenado[j + 1]) {
int temp = vetorOrdenado[j];
vetorOrdenado[j] = vetorOrdenado[j + 1];
vetorOrdenado[j + 1] = temp;
}
}
}
// Imprimindo os vetores
printf("\nVetor Original: ");
for (int i = 0; i < TAMANHO; i++) {
printf("%d ", vetorOriginal[i]);
}
printf("\nVetor Ordenado (Decrescente): ");
for (int i = 0; i < TAMANHO; i++) {
printf("%d ", vetorOrdenado[i]);
}
printf("\n");
return 0;
}

// 20) Escreva um algoritmo que leia um vetor de 80 elementos inteiros, encontre e mostre o
// menor elemento, o maior elemento e as suas respectivas posições no vetor.

#include <stdio.h>
#define TAMANHO 80
int main() {
int vetor[TAMANHO];
// Preenchendo o vetor
printf("Digite os elementos do vetor:\n");
for (int i = 0; i < TAMANHO; i++) {
printf("Elemento %d: ", i + 1);
scanf("%d", &vetor[i]);
}
int menor = vetor[0];
int posicaoMenor = 0;
int maior = vetor[0];
int posicaoMaior = 0;
// Encontrando o menor e o maior elemento e suas posições
for (int i = 1; i < TAMANHO; i++) {
if (vetor[i] < menor) {
menor = vetor[i];
posicaoMenor = i;
}
if (vetor[i] > maior) {
maior = vetor[i];
posicaoMaior = i;
}
}
// Imprimindo o resultado
printf("\nMenor elemento: %d\n", menor);
printf("Posicao do menor elemento: %d\n", posicaoMenor);
printf("Maior elemento: %d\n", maior);
printf("Posicao do maior elemento: %d\n", posicaoMaior);
return 0;
}

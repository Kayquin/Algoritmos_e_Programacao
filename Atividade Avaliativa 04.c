// Professor: Ruy Barbosa Figueiredo Júnior
// Curso : ADS
// Disciplina: Algoritmos e Programação

// 1) Elaborar um algoritmo que leia 5 valores inteiros.
// O algoritmo não poderá aceitar o número zero. Mostrar
// a. média dos valores positivos
// b. média dos valores negativos

#include <stdio.h>
int main() {
int i = 1, n, pos = 0, neg = 0;
float media_pos = 0, media_neg = 0;
while (i <= 5) {
printf("Digite o %dº número: ", i);
scanf("%d", &n);
if (n == 0) {
printf("O número zero não é permitido.\n");
continue;
}
if (n > 0) {
media_pos += n;
pos++;
} else if (n < 0) {
media_neg += n;
neg++;
}
i++;
}
if (pos > 0) {
media_pos /= pos;
printf("Média dos valores positivos: %.2f\n", media_pos);
} else {
printf("Não foram digitados valores positivos.\n");
}
if (neg > 0) {
media_neg /= neg;
printf("Média dos valores negativos: %.2f\n", media_neg);
} else {
printf("Não foram digitados valores negativos.\n");
}
getchar();
return 0;
}

// 2) Elaborar um algoritmo que leia 5 valores inteiros.
// O algoritmo não poderá aceitar o número zero. Mostrar
// a. média dos valores pares
// b. média dos valores impares

#include <stdio.h>
int main() {
int valores[5];
int somaPares = 0, somaImpares = 0;
int countPares = 0, countImpares = 0;
float mediaPares, mediaImpares;
printf("Digite 5 valores inteiros (exceto zero):\n");
int i = 0;
while (i < 5) {
scanf("%d", &valores[i]);
if (valores[i] != 0) {
if (valores[i] % 2 == 0) {
somaPares += valores[i];
countPares++;
} else {
somaImpares += valores[i];
countImpares++;
}
}
i++;
}
if (countPares > 0)
mediaPares = (float) somaPares / countPares;
else
mediaPares = 0;
if (countImpares > 0)
mediaImpares = (float) somaImpares / countImpares;
else
mediaImpares = 0;
printf("Média dos valores pares: %.2f\n", mediaPares);
printf("Média dos valores ímpares: %.2f\n", mediaImpares);
getchar();
return 0;
}

// 3) Elaborar um algoritmo que mostre:
// a. quantidade de alunos com nota final acima de 70 pontos.
// b. quantidade de alunos com idade superior a 20 anos.
// c. média das notas finais da turma.
// Sabe-se que nessa turma há 30 pessoas.

#include <stdio.h>
int main() {
int quantidadeAlunosAcima70 = 0;
int quantidadeAlunosIdadeSuperior20 = 0;
float somaNotasFinais = 0;
float mediaNotasFinais;
int i = 0;
printf("Digite as notas finais e idades dos alunos:\n");
while (i < 30) {
float notaFinal;
int idade;
printf("Aluno %d\n", i + 1);
printf("Nota final: ");
scanf("%f", &notaFinal);
printf("Idade: ");
scanf("%d", &idade);
if (notaFinal > 70)
quantidadeAlunosAcima70++;
if (idade > 20)
quantidadeAlunosIdadeSuperior20++;
somaNotasFinais += notaFinal;
i++;
}
mediaNotasFinais = somaNotasFinais / 30;
printf("Quantidade de alunos com nota final acima de 70 pontos: %d\n", quantidadeAlunosAcima70);
printf("Quantidade de alunos com idade superior a 20 anos: %d\n", quantidadeAlunosIdadeSuperior20);
printf("Média das notas finais da turma: %.2f\n", mediaNotasFinais);
getchar();
return 0;
}

// 4) Faça um programa que lê X números e escreve na tela a quantidade de números pares,
// sendo que a leitura se encerra quando o usuário digitar zero.

#include <stdio.h>
int main() {
int numero;
int quantidadePares = 0;
printf("Digite os números (encerre com 0):\n");
do {
scanf("%d", &numero);
if (numero != 0 && numero % 2 == 0) {
quantidadePares++;
}
} while (numero != 0);
printf("Quantidade de números pares: %d\n", quantidadePares);
return 0;
}

// 5) Faça um programa que lê X números e escreve na tela a soma, sendo que a leitura se
// encerra quando o usuário digitar zero.

#include <stdio.h>
int main() {
int numero;
int soma = 0;
printf("Digite os números (encerre com 0):\n");
do {
scanf("%d", &numero);
soma += numero;
} while (numero != 0);
printf("Soma dos números: %d\n", soma);
return 0;
}

// 6) Faça um programa que lê X números e faça a soma de todos os números maiores que 5,
// sendo que a leitura se encerra quando o usuário digitar zero.

#include <stdio.h>
int main() {
int numero;
int soma = 0;
printf("Digite os números (encerre com 0):\n");
do {
scanf("%d", &numero);
if (numero > 5)
{
soma += numero;
}
} while (numero != 0);
printf("Soma dos números: %d\n", soma);
return 0;
}

// 7) Faça um programa que lê X números e conta quantos são negativos, sendo que a leitura
// se encerra quando o usuário digitar zero.
#include <stdio.h>
int main() {
int numero;
int quantidade_negativos = 0;
printf("Digite os números (encerre com 0):\n");
do {
scanf("%d", &numero);
if (numero < 0 && numero != 0){
quantidade_negativos++;
}
} while (numero != 0);
printf("Quantidade dos números Negativos: %d\n", quantidade_negativos);
return 0;
}

// 8) Faça um programa que lê X números e soma os positivos, sendo que a leitura se encerra
// quando o usuário digitar zero.
#include <stdio.h>
int main() {
int numero;
int quantidade_positivos = 0;
printf("Digite os números (encerre com 0):\n");
do {
scanf("%d", &numero);
if (numero > 0 && numero != 0){
quantidade_positivos++;
}
} while (numero != 0);
printf("Quantidade dos números Positivos: %d\n", quantidade_positivos);
return 0;
}

// 9) Utilizando do while elaborar um algoritmo que leia 5 valores inteiros. Mostrar:
// a. quantidade de números positivos
// b. quantidade de números negativos

#include <stdio.h>
int main()
{
int numero;
int QuantidadePositivo = 0;
int QuantidadeNegativo = 0;
int i = 0;
printf("Digite 5 Numeros\n");
do{
scanf("%d", &numero);
if (numero > 0){
QuantidadePositivo++;
}else if (numero < 0){
QuantidadeNegativo++;
}
i++;
} while (i < 5);
printf("Quantidade Positivos: %d\n", QuantidadePositivo);
printf("Quantidade Negativos: %d\n", QuantidadeNegativo);
return(0);
}

// 10) Utilizando do while elaborar um algoritmo que leia 5 valores inteiros. Mostrar:
// a. soma de todos os valores positivos
// b. soma de todos os valores negativos
#include <stdio.h>
int main()
{
int numero;
int somaP = 0;
int somaN = 0;
int i = 0;
printf("Digite 5 Numeros\n");
do{
scanf("%d", &numero);
if (numero > 0){
somaP += numero;
}else if (numero < 0){
somaN += numero;
}
i++;
} while (i < 5);
printf("Soma Positivos: %d\n", somaP);
printf("Soma Negativos: %d\n", somaN);
return(0);
}

// 11) Utilizando do while faça um programa que lê X números e escreve na tela somente os
// pares, sendo que a leitura se encerra quando o usuário digitar zero.

#include <stdio.h>
int main() {
int numero;
printf("Digite os números (encerre com 0):\n");
do {
scanf("%d", &numero);
if (numero != 0 && numero % 2 == 0) {
printf("Número pares: %d\n", numero);
}
} while (numero != 0);
getchar();
return 0;
}

// 12) Utilizando do while faça um programa que lê X números e escreve na tela a soma, sendo
// que a leitura se encerra quando o usuário digitar -1.

#include <stdio.h>
int main() {
int numero;
int soma = 0;
printf("Digite os números (encerre com -1):\n");
do {
scanf("%d", &numero);
if (numero != -1){
soma += numero;
}
} while (numero != -1);
printf("Soma dos Numeros: %d\n", soma);
getchar();
return 0;
}

// 13) Utilizando do while faça um programa que lê X números e faça a soma de todos os
// números maiores que 5, sendo que a leitura se encerra quando o usuário digitar -1.

#include <stdio.h>
int main() {
int numero;
int soma = 0;
printf("Digite os números (encerre com -1):\n");
do {
scanf("%d", &numero);
if (numero > 5 && numero !=-1)
{
soma += numero;
}
} while (numero != -1);
printf("Soma dos números: %d\n", soma);
getchar();
return 0;
}

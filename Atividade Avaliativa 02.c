// Professor: Ruy Barbosa Figueiredo Júnior
// Curso : ADS/ SI/ CC / Engenharias
// Disciplina: Algoritmos e Programação

// 1-) Faça um algoritmo que receba um número, calcule e imprima o seu quadrado.

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int num, quad;
printf("\nDigite um numero: ");
scanf("%d%*c",&num);
quad=num*num;
printf("O quadrado do numero e: %d", quad);
getchar();
return 0;
}
// 2-) Faça um algoritmo que receba a quantidade e o preço de custo de determinado produto. Imprima o
// valor de custo total deste item.

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int quant;
float preco, preco_total;
printf("\nDigite o preco unitario do produto: ");
scanf("%f%*c",&preco);
printf("\nDigite a quantidade do produto: ");
scanf("%d%*c",&quant);
preco_total=quant*preco;
printf("O preco total do produto e: %5.2f", preco_total);
getchar();
return 0;
}

// 3-) Escreva um programa que calcule e mostre a área de um trapézio. Sabe-se que: A = ((base maior +
// base menor)* altura)/2 ;

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
float area, base_maior, base_menor, altura;
printf("\nDigite o valor da base maior: ");
scanf("%f%*c",&base_maior);
printf("\nDigite o valor da base_menor: ");
scanf("%f%*c",&base_menor);
printf("\nDigite o valor da altura: ");
scanf("%f%*c",&altura);
area=((base_maior+base_menor)*altura/2);
printf("\nA area do trapezio eh: %5.2f", area);
getchar();
return 0;
}

// 4-) Escreva um algoritmo que leia uma temperatura na escala Celsius (C) e imprima o equivalente em
// Fahrenheit (F).
// Dados: (Fórmula de conversão: F = ((9/5 * C) + 32)

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
float c_temp, f_temp;
setlocale(LC_ALL, "Portuguese"); // nesta linha foram habilitados
os acentos e semântica da lingua portuguesa
printf("Digite a temperataura em graus celsius \n\n");
scanf("%f%*c",&c_temp);
f_temp = ((c_temp*9/5 )+32);
printf("\nA temperatura de %5.2f graus celsius ", c_temp);
printf("equivale a temperatura de %5.2f graus Fahrenheit \n",
f_temp);
system ("pause");
return 0;
}

// 5-) Uma locadora de veículos está preocupada em informar aos seus clientes dados sobre o consumo e
// autonomia de seus automóveis, para tanto contratou a empresa a empresa alunos batutas para que
// façam um algoritmo e um programa com as seguintes especificações:
// Ao completar o tanque de combustível de um automóvel, calcule e mostre o consumo efetuado, assim
// como a autonomia que no carro ainda terá após o abastecimento. Considere que o veículo sempre seja
// abastecido até encher o tanque e que são fornecidas apenas a capacidade do tanque, a quantidade de
// litros abastecidos e a quilometragem percorrida desde o último abastecimento.
// CM = DIST / VOL.

#include<stdio.h>
#include<locale.h>
int main()
{
float cap, qla, km, cons, aut;
setlocale(LC_ALL, "Portuguese");
printf("Digite a capacidade do tanque de combustível do seu veiculo em litros\n");
scanf("%f%*c",&cap);
printf("Digite a quantidade de combustível abastecido em litros\n");
scanf("%f%*c",&qla);
printf("Digite a distância percorrida desde o último abastecimento em Km\n");
scanf("%f%*c",&km);
cons = km/qla;
aut = cons*cap;
printf("O consumo do seu veículo em KM/litro foi de: %0.2f Km/Litro\n", cons);
printf("O seu veículo possui automia para rodar mais %0.2f Kilometros ", aut);
getchar();
return 0;
}

// 6-) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do
// distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a porcentagem do
// distribuidor seja de 12% e a dos impostos de 45%, prepare um algoritmo para ler o custo de fábrica do
// carro e imprimir o valor pago a distribuidora, o valor dos impostos e o custo total ao consumidor.

#include<stdio.h>
#include<locale.h>
int main()
{
float p_fab, perc_luc, lucro_dist, perc_imp, imp, transp,
custo_cons;
setlocale(LC_ALL, "Portuguese");
printf("Digite o preço de fábrica do veículo:\n");
scanf("%f%*c",&p_fab);
printf("Digite o percentual de lucro do distribuidor:\n");
scanf("%f%*c",&perc_luc);
printf("Digite o percentual de impostos que incide sobre o
veículo:\n");
scanf("%f%*c",&perc_imp);
printf("Digite o valor do transporte do veículo:");
scanf("%f%*c",&transp);
lucro_dist = (p_fab * (perc_luc/100));
imp = (p_fab * (perc_imp/100));
custo_cons = p_fab + lucro_dist + imp + transp;
printf("\n");
printf("O valor correspondente ao lucro do distribuidor é
de R$%3.2f\n\n", lucro_dist);
printf("O valor correspondente aos impostos é de
R$%0.2f\n\n", imp);
printf("O valor correspondente ao transporte do veículo é
de R$%0.2f\n\n", transp);
printf("O preço final do veículo é de R$%0.2f\n\n",
custo_cons);
getchar();
return 0;
}

// 7-) É muito importante para os engenheiros utilizarem a tecnologia e os conhecimentos adquiridos na
// universidade para a solução de problemas de engenharia, portanto faça um algoritmo e um programa que
// calcule a quantidade de latas de tinta necessárias e o custo para pintar seis cômodos de 10m².
// Sabendo que:
//  A lata de tinta custa R$ 50,00
//  Cada lata contém 5 litros
//  Cada litro pinta 3 metros quadrados

#include<stdio.h>
#include<locale.h>
int main()
{
float valorgasto, custo, lata, litro, metros,latasdetintas;
setlocale(LC_ALL, "Portuguese");
printf("Digite o tamanho do comodo em Metros\n");
scanf("%f%*c",&metros);
custo = 50;
lata = 5;
litro = 3;
latasdetintas = metros/lata*litro;
valorgasto = latasdetintas*custo;
printf("\nA quantidade de latas: %0.0f\n",latasdetintas);
printf("\nO custo das latas: R$%0.2f\n\n",valorgasto);
getchar;
return 0;
}

// 8-) Um dado comerciante maluco cobra 15% de acréscimo para cada prestação em atraso e depois dá um
// desconto de 15% sobre este valor. Adquirindo os conhecimentos adquiridos, faça um algoritmo e um
// programa em C/C++ que solicite o valor da prestação em atraso e apresente o valor final a pagar, assim
// como o prejuízo do comerciante.

#include<stdio.h>
#include<locale.h>
int main()
{
float Prest, V_atual, V_final, Preju;
setlocale(LC_ALL, "Portuguese");
printf("Digite o valor da presta o em atraso\n");??
scanf("%f%*c",&Prest);
V_atual = Prest * 1.15;
V_final = V_atual * 0.85;
Preju = Prest - V_final;
printf("\nO valor final da presta o : R$%0.2f\n",V_final);?? ?
printf("\nO prejuizo foi de: R$%0.2f\n\n",Preju);
getchar;
return 0;
}

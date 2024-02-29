// Professor: Ruy Barbosa Figueiredo Júnior
// Curso : ADS
// Disciplina: Algoritmos e Programação

// 1-Faça um algoritmo em pseudocódigo (portugol) e um programa que receba três notas de um aluno, calcule e
// mostre a média aritmética e a mensagem constante na tabela a seguir. Aos alunos que ficaram para exame,
// calcule e mostre a nota que deverão tirar para serem aprovados, considerando que a média exigida é 7,0.
// Média Aritmética Mensagem
// 0,0 3,0 Reprovado
// 3,0 7,0 Exame
// 7,0 10,0 Aprovado

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
float nota1, nota2, nota3, media;
printf("Digite a primeira nota\n");
scanf("%f%*c", &nota1);
printf("Digite a segunda nota\n");
scanf("%f%*c", &nota2);
printf("Digite a terceira nota\n");
scanf("%f%*c", &nota3);
media=(nota1 + nota2 + nota3) /3;
printf("A Media das notas = %5.2f\n", media);
if (media < 3)
{
printf("\nAluno Reprovado!!!\n");
}
if ((media >=3) && (media <7))
{
printf("\nAluno em Exame Especial\n");
}
if ((media>=7) && (media <=10))
{
printf("\nAluno Aprovado\n");
}
getchar();
return 0;
}

// 2) Faça um algoritmo e um programa que receba dois números e mostre o maior.

#include<stdio.h>
int main()
{
int num3,num4;
printf("Digite o primeiro numero: \n");
scanf("%i%*c", &num3);
printf("Digite o segundo numero: \n");
scanf("%i%*c", &num4);
if((num3 > num4) && (num3 != num4))
{
printf("O maior numero = %i", num3);
}
if((num3 < num4) && (num3 !=num4))
{
printf("O maior numero = %i", num4);
}
getchar();
return 0;
}

// 3) Faça um algoritmo e um programa que receba três números e mostre-os em ordem crescente. Suponha que
// o usuário digitará três números diferentes.

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
float num1,num2,num3;
printf("Digite o primeiro num:\n");
scanf("%f%*c", &num1);
printf("Digite o segundo num:\n");
scanf("%f%*c", &num2);
printf("Digite o terceiro num:\n");
scanf("%f%*c", &num3);
if((num1 > num2) && (num2 > num3))
{
printf("A ordem crescente dos numeros =%5.2f %5.2f %5.2f",num3,num2,num1);
}
if((num1 > num3) && (num3 > num2))
{
printf("A ordem crescente dos numeros =%5.2f %5.2f %5.2f",num2,num3,num1);
}
if((num2 > num1) && (num1 > num3))
{
printf("A ordem crescente dos numeros =%5.2f %5.2f %5.2f",num2,num3,num1);
}
if((num2 > num3) && (num3 > num1))
{
printf("A ordem crescente dos números =%5.2f %5.2f %5.2f",num1,num2,num3);
}
if((num3 > num2) && (num2 > num1))
{
printf("A ordem crescente dos numeros =%5.2f %5.2f %5.2f",num1,num2,num3);
}
return 0;
}

// 4) Faça um algoritmo e um programa que receba três números obrigatoriamente em ordem crescente e um
// quarto número que não siga esta regra. Mostre, em seguida, os quatro números em ordem decrescente.
// Suponha que o usuário digitará quatro números diferentes.

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
float num1, num2, num3, num4;
printf("Você deverá digitar três números em ordem crescente\n");
printf("Digite o primeiro número\n");
scanf("%f%*c", &num1);
printf("Digite o segundo número\n");
scanf("%f%*c", &num2);
printf("Digite o terceiro número\n");
scanf("%f%*c", &num3);
printf("Digite um quarto número diferente dos três primeiros\n");
scanf("%f%*c", &num4);
if (num4 > num3)
{
printf("\nA ordem decrescente dos números = %5.2f %5.2f %5.2f %5.2f", num1, num2, num3, num4);
}
if ((num4 > num2) && (num3 > num4))
{
printf("\nA ordem decrescente dos números = %5.2f %5.2f %5.2f %5.2f", num3, num4, num2, num1);
}
if ((num4 > num1) && (num2 > num4))
{
printf("\nA ordem decrescente dos números = %5.2f %5.2f %5.2f %5.2f" ,num4, num2, num3, num1);
}
if (num4 < num1)
{
printf("\nA ordem decrescente dos números = %5.2f %5.2f %5.2f %5.2f", num3, num2, num1, num4);
}
}

// 5) Faça um algoritmo e um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é
// 4531. O programa deve mostrar uma mensagem de permissão de acesso ou não.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int senha;
printf("\nDigite a senha\n");
scanf("%i%*c", &senha);
if(senha == 4531)
{
printf("\nAcesso Liberado\n");
}
else
{
printf("\nSenha invalida\n");
}
getchar();
return 0;
}

// 6) Faça um algoritmo e um programa que receba a idade de um nadador e mostre sua categoria, usando as
// regras a seguir. Para idade inferior a 5 anos não deverá mostrar mensagem.
// Categoria Idade
//  Infantil 5 a 7
//  Juvenil 8 a 10
//  Adolescente 11 a 15
//  Adulto 16 a 30
//  Sênior acima de 30

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int idade;
printf("\nDigite a idade do nadador\n");
scanf("%i%*c", &idade);
if ((idade>=5) && (idade<=7))
{
printf("\nNadador Categoria Infantil\n");
}
if ((idade>=8) && (idade<=10))
{
printf("\nNadador de Categoria Juvenil\n");
}
if ((idade>=11) && (idade<=15))
{
    printf("\nNadador Categoria Adolecente\n");
}
if ((idade>=16) && (idade<=30))
{
printf("\nNadador Categoria Adulto\n");
}
if (idade>30)
{
printf("\nNadador Categoria Senior");
}
getchar();
return 0;
}

// 7) Faça um algoritmo e um programa que receba:
//  O código do produto comprado; e
//  A quantidade comprada do produto.
// Calcule e mostre:
//  O preço unitário do produto, seguindo a tabela I;
//  O preço total da nota;
//  O valor do desconto, seguindo a tabela II e aplicado sobre o preço total da nota; e
//  O preço final da nota depois do desconto.
// Tabela I Tabela II
// Código Preço Preço Total da Nota % de Desconto
// 1 a 10 R$ 10,00 Até R$ 250,00 5%
// 11 a 20 R$ 15,00 Entre R$ 250,00 e R$ 500,00 10%
// 21 a 30 R$ 20,00 Acima de R$ 500,00 15%
// 31 a 40 R$ 30,00

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
float preco_tot, valor_desc, preco_final;
int codigo, quant;
setlocale(LC_ALL, "Portuguese");
printf("Digite o código do produto \n");
scanf("%d%*c",&codigo );
if ((5<=codigo) && (codigo <=10))
{
printf("\nDigite a quantidade de produtos\n");
scanf("%d%*c",&quant);
preco_tot=quant*10;
if (preco_tot<=250)
{
valor_desc=preco_tot*0.05;
preco_final=preco_tot - valor_desc;
printf("\nO preço unitário do produto é: R$ 10,00\n\n");
printf("O preço total da nota é: R$ %5.2f\n\n", preco_tot);
printf("O valor do desconto é: R$ %5.2f\n\n", valor_desc);
printf("O preço final da nota é: R$ %5.2f\n\n", preco_final);
}
if ((preco_tot>250) && (preco_tot <=500))
{
valor_desc=preco_tot*0.10;
preco_final=preco_tot - valor_desc;
printf("\nO preço unitário do produto é: R$ 10,00\n\n");
printf("O preço total da nota é: R$ %5.2f\n\n", preco_tot);
printf("O valor do desconto é: R$ %5.2f\n\n", valor_desc);
printf("O preço final da nota é: R$ %5.2f\n\n", preco_final);
}
if (preco_tot>500)
{
valor_desc=preco_tot*0.15;
preco_final=preco_tot - valor_desc;
printf("\nO preço unitário do produto é: R$ 10,00\n\n");
printf("O preço total da nota é: R$ %5.2f\n\n", preco_tot);
printf("O valor do desconto é: R$ %5.2f\n\n", valor_desc);
printf("O preço final da nota é: R$ %5.2f\n\n", preco_final);
}
}
if ((11<=codigo) && (codigo <=20))
{
printf("\nDigite a quantidade de produtos\n");
scanf("%d%*c",&quant);
preco_tot=quant*15;
if (preco_tot<=250)
{
valor_desc=preco_tot*0.05;
preco_final=preco_tot - valor_desc;
printf("\nO preço unitário do produto é: R$ 15,00\n\n");
printf("O preço total da nota é: R$ %5.2f\n\n", preco_tot);
printf("O valor do desconto é: R$ %5.2f\n\n", valor_desc);
printf("O preço final da nota é: R$ %5.2f\n\n", preco_final);
}
if ((preco_tot>250) && (preco_tot <=500))
{
valor_desc=preco_tot*0.10;
preco_final=preco_tot - valor_desc;
printf("\nO preço unitário do produto é: R$ 15,00\n\n");
printf("O preço total da nota é: R$ %5.2f\n\n", preco_tot);
printf("O valor do desconto é: R$ %5.2f\n\n", valor_desc);
printf("O preço final da nota é: R$ %5.2f\n\n", preco_final);
}
if (preco_tot>500)
{
valor_desc=preco_tot*0.15;
preco_final=preco_tot - valor_desc;
printf("\nO preço unitário do produto é: R$ 15,00\n\n");
printf("O preço total da nota é: R$ %5.2f\n\n", preco_tot);
printf("O valor do desconto é: R$ %5.2f\n\n", valor_desc);
printf("O preço final da nota é: R$ %5.2f\n\n", preco_final);
}
}
if ((21<=codigo) && (codigo <=15))
{
printf("\nDigite a quantidade de produtos\n");
scanf("%d%*c",&quant);
preco_tot=quant*20;
if (preco_tot<=250)
{
valor_desc=preco_tot*0.05;
preco_final=preco_tot - valor_desc;
printf("\nO preço unitário do produto é: R$ 20,00\n\n");
printf("O preço total da nota é: R$ %5.2f\n\n", preco_tot);
printf("O valor do desconto é: R$ %5.2f\n\n", valor_desc);
printf("O preço final da nota é: R$ %5.2f\n\n", preco_final);
}
if ((preco_tot>250) && (preco_tot <=500))
{
valor_desc=preco_tot*0.10;
preco_final=preco_tot - valor_desc;
printf("\nO preço unitário do produto é: R$ 20,00\n\n");
printf("O preço total da nota é: R$ %5.2f\n\n", preco_tot);
printf("O valor do desconto é: R$ %5.2f\n\n", valor_desc);
printf("O preço final da nota é: R$ %5.2f\n\n", preco_final);
}
if (preco_tot>500)
{
valor_desc=preco_tot*0.15;
preco_final=preco_tot - valor_desc;
printf("\nO preço unitário do produto é: R$ 20,00\n\n");
printf("O preço total da nota é: R$ %5.2f\n\n", preco_tot);
printf("O valor do desconto é: R$ %5.2f\n\n", valor_desc);
printf("O preço final da nota é: R$ %5.2f\n\n", preco_final);
}
}
if ((31<=codigo) && (codigo <=40))
{
printf("\nDigite a quantidade de produtos\n");
scanf("%d%*c",&quant);
preco_tot=quant*30;
if (preco_tot<=250)
{
valor_desc=preco_tot*0.05;
preco_final=preco_tot - valor_desc;
printf("\nO preço unitário do produto é: R$ 30,00\n\n");
printf("O preço total da nota é: R$ %5.2f\n\n", preco_tot);
printf("O valor do desconto é: R$ %5.2f\n\n", valor_desc);
printf("O preço final da nota é: R$ %5.2f\n\n", preco_final);
}
if ((preco_tot>250) && (preco_tot <=500))
{
valor_desc=preco_tot*0.10;
preco_final=preco_tot - valor_desc;
printf("\nO preço unitário do produto é: R$ 30,00\n\n");
printf("O preço total da nota é: R$ %5.2f\n\n", preco_tot);
printf("O valor do desconto é: R$ %5.2f\n\n", valor_desc);
printf("O preço final da nota é: R$ %5.2f\n\n", preco_final);
}
if (preco_tot>500)
{
valor_desc=preco_tot*0.15;
preco_final=preco_tot - valor_desc;
printf("\nO preço unitário do produto é: R$ 30,00\n\n");
printf("O preço total da nota é: R$ %5.2f\n\n", preco_tot);
printf("O valor do desconto é: R$ %5.2f\n\n", valor_desc);
printf("O preço final da nota é: R$ %5.2f\n\n", preco_final);
}
}
getchar();
return 0;
}

// 8) Faça um algoritmo e um programa em C/C++ que a partir de um mês fornecido ( número inteiro de 1 a 12 ),
// apresente o nome dele por extenso ou uma mensagem de Mês Inválido.

#include<stdio.h>
int main()
{
int x;
printf("Entre com o numero de 1 a 12\n");
scanf("%i%*c", &x);
switch( x )
{
case 1:
printf("Janeiro\n");
break;
case 2:
printf ("Fevereiro\n");
break;
case 3:
printf ("Março\n");
break;
case 4:
printf ("Abril\n");
break;
case 5:
printf ("Maio\n");
break;
case 6:
printf ("Junho\n");
break;
case 7:
printf ("Julho\n");
break;
case 8:
printf ("Agosto\n");
break;
case 9:
printf ("Setembro\n");
break;
case 10:
printf ("Outubro\n");
break;
case 11:
printf ("Novembro\n");
break;
case 12:
printf ("Dezembro\n");
break;
default:
printf ("Mes invalido\n");
}
return 0;
}

// 9) Em uma eleição presidencial existem quatro candidatos. Os votos são informados por códigos. Os dados
// utilizados para a escrutinagem obedecem à seguinte codificação:
//  1, 2, 3, 4 = voto para os respectivos candidatos
//  5 = voto nulo
//  6 = voto em branco
// Faça um algoritmo e um programa em C/C++ que calcule e escreva:
//  O total de votos para cada candidato e seu percentual sobre o total
//  O total de votos nulos percentual sobre o total
//  O total de votos brancos e seu percentual sobre o total
// Como finalizador do conjunto de votos tem-se o valor “ 0 “.

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
float P1, P2, P3, P4, PN, PB;
int V ,
VC1, VC2, VC3, VC4, VN, VB, TotVotos;
VC1 = 0;
VC2 = 0;
VC3 = 0;
VC4 = 0;
VN = 0;
VB = 0;
TotVotos = 0;
do
{
printf("Digite o voto \n");
scanf("%d%*c",&V );
switch ( V )
{
case 1:VC1 = VC1 + 1;
break;
case 2:VC2 = VC2 + 1;
break;
case 3:VC3 = VC3 + 1;
break;
case 4:VC4 = VC4 + 1;
break;
case 5:VN = VN + 1;
break;
case 6:VB = VB + 1;
break;
}
}
while (V != 0);
TotVotos = VC1 + VC2 + VC3 + VC4 + VN + VB;
if (TotVotos > 0)
{
P1 = (VC1 * 100) / TotVotos;
P2 = (VC2 * 100) / TotVotos;
P3 = (VC3 * 100) / TotVotos;
P4 = (VC4 * 100) / TotVotos;
PN = (VN * 100) / TotVotos;
PB = (VB * 100) / TotVotos;
}
printf("Total de Votos do Candidato 1 = %d", VC1);
printf(" - porcentual de votos do candidato 1 %7.3f \n\n", P1);
printf("Total de Votos do Candidato 2 = %d", VC2);
printf(" - porcentual de votos do candidato 2 %7.3f \n\n", P2);
printf("Total de Votos do Candidato 3 = %d", VC3);
printf(" - porcentual de votos do candidato 3 %7.3f \n\n", P3);
printf("Total de Votos do Candidato 4 = %d", VC4);
printf(" - porcentual de votos do candidato 4 %7.3f \n\n", P4);
printf("Total de Votos Votos Nulos = %d", VN);
printf(" - porcentual de votos nulos %7.3f \n\n", PN);
printf("Total de Votos em Branco = %d", VB);
printf(" - porcentual de votos em branco %7.3f \n\n", PB);
getchar();
return 0;
}

// 10) Faça um algoritmo e um programa em C/C++ que leia um conjunto de dados contendo altura e sexo (“M”
// para masculino e “F” para feminino) de 50 pessoas e, depois, calcule e escreva:
//  A maior e a menor altura do grupo
//  A média de altura das mulheres
//  O Número de homens e a diferença porcentual entre eles e as mulheres.

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
char SEXO;
float Alt, MaiorAlt, MenorAlt, PH, PM, Mediafem;
int V, QH, QM, SomaFem;
setlocale(LC_ALL, "Portuguese");
QH = 0;
QM = 0;
SomaFem = 0;
MaiorAlt = Alt;
MenorAlt = Alt;
V = 1;
while (V < 50)
{
printf("Digite a altura:\n");
scanf("%f%*c\n",&Alt);
printf("Digite o Sexo: 'M' de Masculino p/ os Homens e 'F' de Feminino p/ as mulheres\n");
scanf("%c%*c\n",&SEXO);
switch(SEXO)
{
case 'M':QH = QH + 1;
break;
case 'F':
QM = QM + 1;
SomaFem = SomaFem + 1;
break;
}
if (Alt > MaiorAlt)
MaiorAlt = Alt;
if (Alt < MenorAlt)
MenorAlt = Alt;
V = V + 1;
getchar();
}
PH = (QH * 100)/50;
PM = (QM * 100)/50;
Mediafem = SomaFem / QM;
printf("Maior Altura = %4.2f \n", MaiorAlt);
printf("Menor Altura = %4.2f \n", MenorAlt);
printf("Media de Altura das Mulheres = %4,2f \n", Mediafem);
printf("Total de Homens = %d \n", QM);
printf("Diferenca percentual entre homens e mulheres = %6.2f", PH - PM);
getchar();
return 0;
}

// 11) Faça um algoritmo e um programa em C/C++ que seja capaz de dar a classificação olímpica de 3 países
// informados. Para cada país é informado o nome, a quantidade de medalhas de ouro prata e bronze. Considere
// que cada medalha de ouro tem peso 3, cada prata tem peso 2 e cada bronze tem peso 1.

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int P1ouro, P1prata, P1bronze, P2ouro, P2prata, P2bronze, P3ouro, P3prata, P3bronze, P1total,
P2total, P3total;
char Nomepais1[29], Nomepais2[29], Nomepais3[29];
printf("\nDigite o nome do pais 1\n");
scanf("%s", &Nomepais1);
fflush(stdin);
printf("\nDigite a quantidade de madalhas de ouro do Primeiro Pais\n");
scanf("%i", &P1ouro);
fflush(stdin);
printf("\nDigite a quantidade de medalhas de prata do Primeiro Pais\n");
scanf("%i", &P1prata);
fflush(stdin);
printf("\nDigite a quantidade de medalhas de bronze do Primeiro Pais\n");
scanf("%i", &P1bronze);
fflush(stdin);
printf("\nDigite o nome do pais 2\n");
scanf("%s", &Nomepais2);
fflush(stdin);
printf("\nDigite a quantidade de madalhas de ouro do Segundo Pais\n");
scanf("%i", &P2ouro);
fflush(stdin);
printf("\nDigite a quantidade de medalhas de prata do Segundo Pais\n");
scanf("%i", &P2prata);
fflush(stdin);
printf("\nDigite a quantidade de medalhas de bronze do Segundo Pais\n");
scanf("%i", &P2bronze);
fflush(stdin);
printf("\nDigite o nome do pais 3\n");
scanf("%s", &Nomepais3);
fflush(stdin);
printf("\nDigite a quantidade de madalhas de ouro do Terceiro Pais\n");
scanf("%i", &P3ouro);
fflush(stdin);
printf("\nDigite a quantidade de medalhas de prata do Terceiro Pais\n");
scanf("%i", &P3prata);
fflush(stdin);
printf("\nDigite a quantidade de medalhas de bronze do Terceiro Pais\n");
scanf("%i", &P3bronze);
fflush(stdin);
P1total = (3*P1ouro + 2*P1prata + P1bronze);
P2total = (3*P2ouro + 2*P2prata + P2bronze);
P3total = (3*P3ouro + 2*P3prata + P3bronze);
if((P1total>P2total) && (P1total > P3total)){
if (P2total > P3total)
{
printf("\nPrimeiro colocado: %s\n", Nomepais1);
printf("\nSegundo colocado: %s \n", Nomepais2);
printf("\nTerceiro colocado: %s\n", Nomepais3);
}
else
{
printf("\nPrimeiro colocado: %s\n", Nomepais1);
printf("\nSegundo colocado: %s\n", Nomepais3);
printf("\nTerceiro colocado: %s\n", Nomepais2);
}
}
if((P2total>P1total) && (P2total > P3total)){
if (P1total > P3total)
{
printf("\nPrimeiro colocado: %s\n", Nomepais2);
printf("\nSegundo colocado: %s\n", Nomepais1);
printf("\nTerceiro colocado: %s\n", Nomepais3);
}
else
{
printf("\nPrimeiro colocado: %s\n", Nomepais2);
printf("\nSegundo colocado: %s\n", Nomepais3);
printf("\nTerceiro colocado: %s\n", Nomepais1);
}
}
if((P3total>P1total) && (P3total > P2total)){
if (P1total > P2total)
{
printf("\nPrimeiro colocado: %s\n", Nomepais3);
printf("\nSegundo colocado: %s\n", Nomepais1);
printf("\nTerceiro colocado: %s\n", Nomepais2);
}
else
{
printf("\nPrimeiro colocado: %s\n", Nomepais3);
printf("\nSegundo colocado: %s\n", Nomepais2);
printf("\nTerceiro colocado: %s\n", Nomepais1);
}
}
getchar();
return 0;
}

// 12) Faça um algoritmo e um programa em C/C++ que calcule a média aritmética de um conjunto de números
// pares que forem fornecidos pelo usuário. O valor de finalização será a entrada do número “0”.
// Observe que nada impede que o usuário forneça quantos números impares quiser , com a
// ressalva de que eles não poderão ser acumulados.

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int num,sp,cont;
float media;
sp=0;
cont=0;
do
{
printf ("Digite um numero \n");
scanf ("%d%*c", &num);
if (num%2==0)
{
sp = sp+num;
cont = cont+1;
}
}while (num != 0);
if (sp > 0)
media = sp/cont;
printf("a media dos numeros pares fornecidos eh: %5.2f", media);
getchar();
return 0;
}

// 13) Imagine uma brincadeira entre dois colegas, na qual um pensa um número e o outro deve fazer chutes até
// acertar o número imaginado. Como dica, a cada tentativa é dito se o chute foi alto ou foi baixo. Faça um
// algoritmo e um programa em C/C++ dentro deste conceito que leia o número imaginado e os chutes, ao final
// mostre quantas tentativas foram necessárias para descobrir o número.

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int NUM,
CHUTE,
TENT;
TENT = 0;
CHUTE = 0;
printf("Digite um numero \n");
scanf("%d%*c",&NUM);
while(NUM!=CHUTE)
{
printf("Chute um numero: \n");
scanf("%d%*c",CHUTE);
TENT = TENT + 1;
if (CHUTE > NUM)
printf("chutou alto \n");
else
if (CHUTE < NUM)
printf("chutou baixo \n");
}
printf("Voce acertou o numero em: %d",TENT);
printf(" tentativas");
getchar();
return 0;
}

// 14) Faça um algoritmo e um programa em C/C++ que permita fazer um levantamento do estoque de vinhos de
// uma adega, tendo como dados de entrada tipos de vinho, sendo: “T” para tinto, “B” para branco e “R” para rosê.
// Especifique a porcentagem de cada tipo sobre o total geral de vinhos; a quantidade de vinhos é desconhecida,
// utilize como finalizador “F” de fim.

#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
char TV ;
float PVB, PVR, PVT;
int CONV , CONB, CONR, CONT;
setlocale(LC_ALL, "Portuguese");
CONV = 0;
CONB = 0;
CONR = 0;
CONT = 0;
do
{
printf("Digite: 'B' para vinhos brancos, 'R' para vinhos rose,'T' para vinhos tintos e 'F' para sair do programa \n");
scanf("%s%*c",&TV);
switch(TV)
{
case 'B':CONB = CONB + 1;
break;
case 'R':CONR = CONR +1;
break;
case 'T':CONT = CONT +1;
}
}
while(TV!='F');
CONV = CONB + CONR + CONT;
if (CONV >0)
{
PVB = CONB * 100 / CONV;
PVR = CONR * 100 / CONV;
PVT = CONT * 100 / CONV;
printf("o percentual de vinhos brancos é = %6.2f \n",PVB);
printf("o percentual de vinhos rose é = %6.2f \n",PVR);
printf("o percentual de vinhos tintos é = %6.2f \n",PVT);
}
else
printf("Nenhum tipo de vinho encontrado\n\n");
getchar();
return 0;
}

// 15) Faça um algoritmo e um programa em C/C++ que efetue a soma de todos os números ímpares que são
// múltiplos de 3 e que se encontram no conjunto dos números de 1 até 500.

#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
int i,SI;
setlocale(LC_ALL, "Portuguese");
i=1;
while ((i >= 1) && (i<=500))
{
if (i%2==1 && i%3==0)
{
SI = SI + i;
}
i++;
}
printf("a soma dos números inteiros múltiplos de 3 é: %d", SI);
getchar();
return 0;
}

// 16) Faça um algoritmo programa em C/C++ que receba quatro notas de um aluno, calcule e mostre a média
// aritmética das notas e a mensagem de aprovado ou reprovado, considerando para aprovação a nota 6,5.

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
float nota1, nota2, nota3, nota4, media;
setlocale(LC_ALL, "Portuguese");
printf("\nDigite a primeira nota: ");
scanf("%f%*c",&nota1);
printf("\nDigite a segunda nota: ");
scanf("%f%*c",&nota2);
printf("\nDigite a terceira nota: ");
scanf("%f%*c",&nota3);
printf("\nDigite a quarta nota: ");
scanf("%f%*c",&nota4);
media = (nota1 + nota2 + nota3) / 3;
printf("\nA Média das Notas é: %5.2f\n",media);
if (media >= 6.5)
printf("\nAluno Aprovado !!!\n\n");
else
printf("\nAluno Reprovado !!!\n\n");
getchar();
return 0;
}

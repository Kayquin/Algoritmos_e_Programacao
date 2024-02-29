//Atividade Avaliativa 01 – Algoritmos e Programação
//Professor: Ruy Barbosa Figueiredo Júnior
//Curso : ADS/ SI/ CC / Engenharias
//Disciplina: Algoritmos e Programação

//1-) Escreva um algoritmo em portugol e um programa de computador utilizando a linguagem C que leia
//(entrada de dados) o valor da idade de uma pessoa. Em seguida, esse programa deve imprimir uma
//mensagem informando a idade digitada.


#include<stdio.h>
int main()
{
int idade;
printf("digite a idade da pessoa: \n");
scanf("%i", &idade);
printf("A idade digitada foi = %i anos!\n", idade);
return 0;
}

//2-) Escreva um algoritmo em portugol e um programa de computador utilizando a linguagem C que leia
//(entrada de dados) o valor da idade e a altura de uma pessoa. Em seguida, esse programa deve imprimir
//uma mensagem informando a idade e a altura digitadas.

#include<stdio.h>
int main()
{
int altura;
int idade;
printf("Digite a altura da pessoa: \n");
scanf("%i", &altura);
fflush(stdin);
printf("digite a idade da pessoa: \n");
scanf("%i", &idade);
printf("A altura digitado foi = %i Cm! \n", altura);
printf("A idade digitada foi = %i anos!\n", idade);
return 0;
}


//3-) Escreva um algoritmo em portugol e um programa de computador utilizando a linguagem C que leia
//(entrada de dados) o valor de cinco letras do alfabeto do idioma português. Em seguida, esse programa
//deve imprimir cada uma das letras, na mesma ordem em que foram digitadas. A impressão deve ocorrer
//tanto com uma letra por linha como com todas as letras na mesma linha.

#include<stdio.h>
int main()
{
char A;
char B;
char C;
char D;
char E;
printf("Digite qualquer letra do alfabeto: \n");
scanf("%c", &A);
fflush(stdin);
printf("Digte qualquer letra do alfabeto: \n");
scanf("%c", &B);
fflush(stdin);
printf("Digite qualquer letra do alfabeto: \n");
scanf("%c", &C);
fflush(stdin);
printf("Digite qualquer letra do alfabeto: \n");
scanf("%c", &D);
fflush(stdin);
printf("Digite qualquer letra do alfabeto: \n");
scanf("%c", &E);
printf("A primeira letra digitada foi = %c !\n" ,A);
printf("A segunda letra digitada foi = %c !\n" ,B);
printf("A terceira letra digitada foi = %c !\n" ,C);
printf("A quarta letra digitada foi = %c !\n" ,D);
printf("A quinta letra digitada foi = %c !\n" ,E);
return 0;
}

//4-) Escreva um algoritmo em portugol e um programa de computador utilizando a linguagem C que
//imprima a mensagem “#somostodosnewton” dentro e no centro de uma “caixa”.

#include<stdio.h>
int main()
{
char newton [30]= "#somostodosnewton";
printf("-----------------------------------\n");
printf("| %s | \n", newton);
printf("-----------------------------------\n");
return 0;
}

//5-) Escreva um algoritmo em portugol e um programa de computador utilizando a linguagem C que leia
//(entrada de dados) cinco valores numéricos reais. Em seguida, esse programa deve calcular o valor da
//soma e da média dos números digitados e imprimir o valor da soma e da média.

#include<stdio.h>
int main()
{
float a, b, c, x, y, soma, media;
printf("Digite os 5 numeros: \n");
scanf("%f %f %f %f %f", &a, &b, &c, &x, &y);
fflush(stdin);
soma = a + b + c + x + y;
media = soma /5;
printf("A soma dos 5 numeros foi: = %f ! \n", soma);
printf("A media dos 5 numeros foi: = %f ! \n", media);
return 0;
}

//6-) Escreva um algoritmo em portugol e um programa de computador utilizando a linguagem C que leia
//(entrada de dados) três números reais e imprima as somas parciais desses números.

#include <stdio.h>
#include<locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float num1, num2, num3, somaParcial;
printf("Digite o 3 números \n");
scanf("%f%f%f%*c" ,&num1, &num2, &num3);
somaParcial = 0.0;
printf("Soma Parcial = %.2f \n" , somaParcial);
somaParcial = somaParcial + num1;
printf("Soma Parcial + %.2f \n", num1, somaParcial);
somaParcial = somaParcial + num2;
printf("Soma Parcial + %.2f = %.2f \n" , num1, somaParcial);
somaParcial = somaParcial + num3;
printf("Soma Parcial + %2.f = %2f \n", num3, somaParcial);
getchar();
return 0;
}



//7-) Escreva um algoritmo em portugol e um programa de computador utilizando a linguagem C que leia
//(entrada de dados) as letras “a” e “r” e imprima a palavra “arara” chamando a função printf() uma única
//vez.

#include<stdio.h>
int main()
{
char a,r;
printf("Digite os Letras \n");
scanf("%c %c", &a, &r);
fflush(stdin);
printf("character = %c %c %c %c %c", a ,r ,a ,r ,a);
return 0;
}
//8-) Escreva um algoritmo em portugol e um programa de computador utilizando a linguagem C que leia
//(entrada de dados) três números inteiros e imprima (exiba) sua soma e seu produto, deixando uma linha
//em branco entrar após as entradas e entre linhas impressas (exibidas).

#include<stdio.h>
int main()
{
float a, b, c, soma, produto;
printf("Digite os 3 numeros: \n");
scanf("%f %f %f", &a, &b, &c);
printf("\n");
fflush(stdin);
soma = a + b + c;
produto = a * b * c;
printf("A soma dos 3 numeros foi: = %f ! \n\n", soma);
printf("O produto dos 3 numeros foi: = %f ! \n", produto);
return 0;
}

//9-) Escreva um algoritmo em portugol e um programa de computador utilizando a linguagem C que leia
//dois números faça a divisão do primeiro numero pelo segundo e imprima: Quais são os números e uma
//mensagem informado o resto da divisão do primeiro número pelo segundo.

#include<stdio.h>
int main()
{
int resto, a, b;
printf("Digite os 2 numeros: \n");
scanf("%i %i", &a, &b);
fflush(stdin);
resto = a%b;
printf("\nO resto da divisao = %i\n", resto);
return 0;
}

//10-) Escreva um algoritmo em portugol e um programa de computador utilizando a linguagem C leia um
//número inteiro de três dígitos capaz de inverter este número de 3 dígitos fornecido, ou seja, apresentar
//primeiro a unidade, depois a dezena e depois a centena. O número de 3 dígitos deverá ser lido de uma
//única vez.

#include<stdio.h>
int main()
{
int uni, dez, cen, num;
printf("Digite um numero com 3 Digitos\n");
scanf("%i", &num);
fflush(stdin);
uni = num%10;
dez = (num/10)%10;
cen = num%100;
printf("\nOs numeros sao:\n");
printf("%i %i %i", uni, dez, cen);
return 0;
}

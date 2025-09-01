#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define a 10 //declaraÃ§Ã£o de constante

int main(){
    /*1.O jogador Messi quer implantar um novo campo de futebol 
    e precisa saber quantos m² serão necessários. Faça um algoritmo que lê 
    a largura e o comprimento do campo de futebol, calcula e ao final mostra 
    sua área em metros quadrados.*/

    float l, c, q;
    
    printf("Digite o valor da largura do campo l: \n");
    //scanf("%f", &l); //comentado penas para seguri direto
    l = 3;

    printf("Digite o valor do comprimento do campo c: \n");
    //scanf("%f", &c); //comentado penas para seguri direto
    c = 3;

    printf("O valor de l eh: %.2f.\nO valor de c eh: %.2f\n",l,c);

    q = l*c;

    printf("Serão necessarios %.2f m^2 para a implantacao do campo de futebol\n\n\n",q);

    /*Parte do codio de exemplo da professora mas mudei variaveis e crashow
    
    float r;
    r = -3.15 * y;

    printf("O valor do r eh: %.1f \n", r);

    printf("Retorno da funcao abs: %d \n", abs(-2)); //funÃ§Ã£o que retorna valor absoluto

    printf("Retorno da funcao pow: %f \n", pow(l,c)); //funÃ§Ã£o que retorna a potÃªncia

    printf("Retorno da funcao sqrt: %.2f \n", sqrt(l)); //funÃ§Ã£o que retorna a raiz quadrada
    */

    /*
    2.O rei Charles III deseja ter mais um jardim circular no seu pátio. 
    Elabore um algoritmo para calcular e mostrar a quantidade de grama necessária 
    para esse jardim.
    */
   float r, j, pi = 3.14159265358979323846;

   printf("Qual o raio que o jardin deve ter? \n");
   //scanf("%f",&r);//comentado penas para seguri direto
   r=2;

   j = pi*pow(r,2);

   printf("Sera necessario : %f m^2 de grama\n\n\n", j);

   /*
   3.A loja DarthSide está oferecendo 10% de desconto em todos os seus produtos. 
   Faça um algoritmo que leia o valor inicial e mostre o valor do produto 
   considerando os 10% de desconto.
   */

   float v,d;

   printf("Informe o valor do produto: \n");
   //scanf("%f",&v); //para passar
   v = 100;

   d = v -v*0.1;

   printf("O produto com desconto custa: R$%.2f\n\n\n",d);


   /*
   4.A empresa Snow Ltda. oferece descontos variados em seus produtos. 
   Faça um algoritmo que calcule e mostre o valor final da venda (VF) de um produto, 
   considerando um percentual de desconto (P) sobre o valor inicial do produto (VI).
   */

   float va,de, re;

   printf("Informe o valor do produto: \n");
   //scanf("%f",&va); //para passar
   va=100;

   printf("Informe o valor do desconto em %%(porcentagem): \n");
   //scanf("%f",&de);//para passar
   de=50;

   re = va -(va*(de/100));

   printf("O produto com desconto custa: R$%.2f\n\n\n",re);

   /*
   5.Calcule e mostre a média ponderada de 3 notas e seus respectivos 3 pesos.
   */
  float not1, not2, not3, medp;
  double p1, p2, p3;

  printf("Digite as 3 notas em sequencia: \n");
  //scanf("%f %f %f", &not1, &not2, &not3); //para passar
  not1 = not2 = not3 = 5;
  printf("Digite as 3 notas em sequencia: \n");
  //scanf("%d%d%d", &not1, &not2, &not3); //para passar
  p1 = p2 = p3 = 5;

  medp = (not1*p1 + not2*p2 + not3*p3)/(p1+p2+p3);
  printf("A media ponderada eh: %.2f\n\n\n", medp);

  /*
  6.No Brasil medimos a temperatura em graus Celsius, já nos Estados Unidos 
  a temperatura é medida em graus Fahrenheit. Leia uma temperatura em
  graus Celsius e transforme-a para graus Fahrenheit e vice-versa, 
  mostrando os valores na tela.
  */
 float temp, cal;
 char uni;
 printf("Informe a medida de temperatura (f) Para Fahrenheit e (c) Para Celsius: \n");
 //scanf(" %c",&uni);//para passar
 uni = 'f';

 printf("Informe a temperatura: \n");
 //scanf(" %f",&temp);//para passar
 temp = 212;

 if (uni == 'f'){
    cal = (temp -32)/1.8;
    printf("A temperatura em Celsius eh: %.2f\n\n\n",cal);
 } else {
    cal = temp*1.8+32;
    printf("A temperatura em Fahrenheit eh: %.2f\n\n\n",cal);
 }


 /*
 7.Fazer um algoritmo que leia dois horários (hora, minuto, segundo), 
 calcule e escreva quantos segundos transcorreram entre estes dois horários 
 (considerar que os dois horários estejam no mesmo dia no formato de 24 horas).
 */

    int h1, h2, m1, m2, s1, s2, seg;

    printf("Digite um horario / minuto / segundo (no formato de 24h) \n");
    //scanf(" %d %d %d", &h1, &m1, &s1);//para passar

    printf("Digite o segundo horario / minuto / segundo (no formato de 24h)\n");
    //scanf(" %d %d %d", &h2, &m2, &s2);//para passar
    h1 = h2 = m1 = m2 =  s1 =  s2 = 10;

    if ((h2*60*60 + m2*60 + s2)>(h1*60*60 + m1*60 + s1)) {

        seg = (h2*60*60 + m2*60 + s2) -(h1*60*60 + m1*60 + s1);
        printf ("Entre os horarios transcorreram %d segundos \n\n\n",seg);

    } else {
        seg = (h1*60*60 + m1*60 + s1) - (h2*60*60 + m2*60 + s2);
        printf ("Entre os horarios transcorreram %d segundos \n\n\n",seg);
    }

    /*
    8.Sabe-se que se uma pessoa viaja 220Km de Alegrete para Santa Maria 
    na velocidade média de 73 Km/h, ela chegará em 3 horas. 
    Leia uma distância (em Km) e o tempo de duração de uma viagem (em horas). 
    Calcule e mostre na tela a velocidade média durante a viagem (em Km/h).
    */

    float del, th, ho;
    
    printf("Informe a distancia percorrida: \n");
    scanf("%f", &del);

    printf("Informe o tempo de viagem em horas: \n");
    scanf(" %f", &ho);

    th = del / ho;

    printf("A vlocidade media foi de %.2f Km/h \n\n\n", th);


    //system("pause");
    return 0;

}
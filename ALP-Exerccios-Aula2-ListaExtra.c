#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){

    /*1. Ler um valor para a base e outro para a potência. 
    Calcular e mostrar o resultado da potenciação
    */
   float bas, pot; //Não precisa criar variavel para o pow
    printf("Digite o valor da base: \n");
    // para passar /scanf("%f",&bas);
    bas = 3;

    printf("Digite o valor da potencia: \n");
    // para passar /scanf("%f",&pot);
    pot = 3;

    printf("Usando o %.2f como base e o %.2f como potencia temos\n o resultado de %.2f como resposta\n\n\n",bas,pot,pow(bas, pot));


    /*2. Leia os valores a, b e c de um trinômio ax² +bx + c , 
    calcule e mostre os valores de x1 e x2 utilizando a fórmula 
    de Bhaskara: (-b ± √(b² -4ac))/2a
    */
    float a, b, c, d;
    printf("Digite o valor de (a)x^2: \n");
    // para passar /scanf("%f",&a);
    a = 1;

    printf("Digite o valor de (b)x^1: \n");
    // para passar /scanf("%f",&b);
    b= 2;

    printf("Digite o valor de (c)x^0: \n");
    // para passar /scanf("%f",&c);
    c= -3;

    d= (pow(b,2)-4*a*c);

    if ((pow(b,2)-4*a*c)<0){
        printf("Valor de delta eh negativo e nao pertence aos numeros reais\n\n\n");

    }else{
        printf("D = %f\n",d);
        printf("sqrt = %f\n",sqrt(d));
        printf("pow = %f\n",pow(d,0.5));
        printf("O valor de x1 eh:%.2f \n",(-b+pow(d,0.5))/(2*a));
        printf("O valor de x2 eh:%.2f \n\n\n",(-b-pow(d,0.5))/(2*a));

    }

    /*3. Maria quer fazer um aquário artesanal no formato de um CUBO.
     Ela quer saber qual a quantidade de vidro necessária e a capacidade 
     máxima de armazenamento de água. Portanto ela quer saber a área e o 
     volume do aquário a partir da medida da aresta. Faça um algoritmo 
     que leia o valor necessário, calcule e mostre os resultados esperados.*/
    float l;
    printf("Digite o valor do lado do aquario em metros: \n");
    // para passar /scanf("%f",&l);
    l= 3;
    printf("O aquario possui %.2f metros cubicos/Litros: \n", l*l*l);
    printf("Sera necessario uma area total de %.2f m de vidro: \n", 6*l*l);

    /*4. Fazer um algoritmo que leia as coordenadas de dois pontos no plano
    cartesiano e após calcule e escreva a distância entre eles. Fórmula: */
    float xa, ya, xb, yb;
    printf("Digite as coordenadas do ponto a x e y respectivamente: \n");
    // para passar /scanf("%f%f",&xa, &ya);
    xa = ya = 5;

    printf("Digite as coordenadas do ponto a x e y respectivamente: \n");
    // para passar /scanf("%f%f",&xb, &yb);
    xb = yb = 6;

    printf("A distancia entre os pontos eh: %.3f\n\n\n", sqrt(pow((xb-xa),2)+pow((yb-ya),2)));
    /*6. A forma mais comum para determinar o maior entre dois números é
    utilizando comandos de decisão. Alternativamente podemos calcular o maior
    de dois números pela fórmula*: Maior = ((a + b) + |a – b|)/2
    a. Faça um programa que leia dois números, calcule e mostre o MAIOR.
    b. Faça outro programa que leia três números, calcule e escreva o MAIOR.
    c. Alterar a fórmula acima de modo a determinar o MENOR entre dois números. 
    Adaptar o programa para ler quatro números, calcular e mostrar o MENOR entre eles.
    *usar a função abs()da biblioteca math.h para obter o valor absoluto de a-b*/
    
    //teste a e b já são variaveis float, apenas usar eles diretamente

    printf("Informe um numero:\n");
    // para passar /scanf("%f", &a);  
    printf("Informe outro numero:\n");
    // para passar /scanf("%f", &b);
    printf("o maior numero eh:%.2f \n", (a+b+abs(a-b))/2);


    printf("Informe um numero:\n");
    // para passar /scanf("%f", &a);
    printf("Informe outro numero:\n");
    // para passar /scanf("%f", &b);
    printf("Informe outro numero:\n");
    // para passar /scanf("%f", &c);
    printf("o maior numero eh:%.2f \n", ((((a+b+abs(a-b))/2)+ c) + abs(((a+b+abs(a-b))/2)-c))/2);

    printf("Informe um numero:\n");
    // para passar /scanf("%f", &a);  
    printf("Informe outro numero:\n");
    // para passar /scanf("%f", &b);
    printf("o menor numero eh:%.2f \n", (a+b-abs(a-b))/2);

    printf("Informe um numero:\n");
    scanf("%f", &a);
    printf("Informe outro numero:\n");
    scanf("%f", &b);
    printf("Informe outro numero:\n");
    scanf("%f", &c);
    printf("Informe outro numero:\n");
    scanf("%f", &d);

    xa = (a+b-abs(a-b))/2;
    ya = (c+d-abs(c-d))/2;

    printf("O menor numero eh: %.2f", (xa+ya-abs(xa-ya))/2);


    
    

    
    
    
    return 0;
}
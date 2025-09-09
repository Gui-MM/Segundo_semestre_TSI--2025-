#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>


int main(){
    /*1) A Evasão (cancelamento) e a Retenção (reprovação) são problemas 
    enfrentados em qualquer curso superior. Elabore um programa que leia 
    o total de alunos de um curso. Leia também o número de alunos evadidos 
    e o número de alunos repetentes. O programa deve mostrar como resultado 
    os seguintes percentuais: alunos evadidos, alunos repetentes e alunos 
    regulares (não cancelados e não repetentes) no curso */

    float cont, E, R, Tot;

    printf("Informe quantos alunos foram matriculados no curso: \n");

    //scanf("%f", &Tot);

    printf("Informe quantos alunos realizaram o cancelamento no curso: \n");

    //scanf("%f", &E);

    printf("Informe quantos alunosreprovaram no curso: \n");

    //scanf("%f", &R);

    cont = (E/Tot)*100;

    printf("A porcentagem de alunos Evadidos é de: %f\n", Tot);
    printf("A porcentagem de alunos Evadidos é de: %f\n", E);
    printf("A porcentagem de alunos Evadidos é de: %f\n", R);

    printf("A porcentagem de alunos Evadidos é de: %.2f%%\n", cont);

    cont = (R/Tot)*100;

    printf("A porcentagem de alunos Reprovados é de: %.2f%%\n", cont);

    cont = ((Tot-E-R)/Tot)*100;

    printf("A porcentagem de alunos Regulares é de: %.2f%%\n", cont);
    

    /*2) Um Pivô central de irrigação distribui a água em várias seções,
    sendo que as mesmas giram em torno de uma torre central que disponibiliza 
    a água. Assim, o pivô distribui a água em uma área circular (conforme a figura). 
    Faça um programa que leia o número de seções de um pivô e o tamanho 
    padrão de cada seção. Ao final, o algoritmo deve mostrar o tamanho da área que o 
    pivô irriga, sabendo que a área do círculo é dada por PI x raio².*/

    int piv;

    float sec, circ;

    printf("Digite a quantidade de seções do pivô:\n");

    //scanf("%i", &piv);

    printf("Digite o tamanho padrão de cada seção em M: \n");

    //scanf("%f", &sec);

    circ = 3.14*(piv*sec)*(piv*sec);

    printf("A area de irrigacao eh de: %.2fm\n", circ);

    /*3) Faça um programa que leia a matrícula de um aluno e a quantidade de horas
    realizadas das seguintes Atividades Complementares: Eventos, Artigos e Cursos. 
    O programa deve mostrar a matrícula do aluno e o total das horas informadas. Mostrar
    também se o aluno atingiu o total de 200 horas, caso contrário, mostrar a quantidade
    de horas que faltam ser realizadas.*/

    int Matric;
    float Even, Artig, Cursos, test01;

    printf("Informe sua matricula: \n");

    scanf("%d", &Matric);

    printf("Informe a quantidade de horas complementares em eventos, artigos e curso respectivamente: \n");

    scanf("%f %f %f", &Even, &Artig, &Cursos);

    test01 = Even+Artig+Cursos;

    if (test01>=200){
        printf("Parabens voce já atingiu as 200h obrigatorias\ncom um total de %.2fh\n",test01);
        printf("Evento: %.2f, Art: %.2f, Cursos: %.2f\n", Even, Artig, Cursos);
    }else{
        printf("Ainda faltam %.2fh complementares", (200-Even-Cursos-Artig));
        printf("Evento: %.2f, Art: %.2f, Cursos: %.2f\n", Even, Artig, Cursos);
    }

    /*7) O Diretor da empresa DarthSide resolveu reajustar o salário dos seus
    funcionários, concedendo um aumento conforme a categoria de cada um. Faça um
    programa que leia o salário base de um funcionário e a sua categoria. O programa
    deve calcular e mostrar o salário final, considerando o percentual de reajuste, 
    além de mostrar a descrição da categoria, conforme a tabela abaixo: (Utilizar o comando
    SWITCH e ler a categoria com o comando getchar() ou getch() da biblioteca <conio.h>).*/

    char categoria;

    float salario;

    printf("Digite o salario do funcionario: \n");

    scanf("%f", &salario);

    printf("Digite a categoria do funcionario (A, B, C, D ou E): \n");

    categoria = getch();


    
    // Usando getchar() - requer pressionar Enter
    // categoria = getchar();
    
    // Usando getch() - lê o caractere sem pressionar Enter
    
    switch(categoria) {
        case 'A':
        case 'a':
            printf("O novo salario do funcionario sera de: %.2f\n", salario+salario*0.2);
            break;
        case 'B':
        case 'b':
            printf("O novo salario do funcionario sera de: %.2f\n", salario+salario*0.15);
            break;
        case 'C':
        case 'c':
            printf("O novo salario do funcionario sera de: %.2f\n", salario+salario*0.10);
            break;
        case 'D':
        case 'd':
            printf("O novo salario do funcionario sera de: %.2f\n", salario+salario*0.5);
            break;
        case 'E':
        case 'e':
            printf("O novo salario do funcionario sera de: %.2f\n", salario+salario*0.02);
            break;
    }
    return 0;
}
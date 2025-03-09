#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define M_PI 3.14159265358979323846

/*protótipo de funções*/
void chave(void);

void seno(double x, double y);
void cosseno(double x, double y);
void tangente(double x, double y);
void cossecante(double x, double y);
void secante(double x, double y);
void cotangente(double x, double y);

void arcoseno(double y);
void arcocosseno(double y);
void arcotangente(double y);

/*função principal*/
int main (void)
{
    char continuar[3]; /*cria um array "continuar" com valor 3 para depois, no do...while 
    ser inserido um caractere s ou n sem problema no loop*/

    /*selecionar ou não manter a calculadora*/
    do{
        
        chave();

        printf("\nDeseja continuar com a calculadora? (s/n)?:");
        scanf("%c", &continuar);/*lê o caractere como string s ou n*/
        fgets(continuar, sizeof(continuar), stdin); /*Lê a entrada de forma segura*/

     } while (continuar[0] == 'S' || continuar[0] == 's');/*condicional*/

    return 0;
}

/*FUNÇÃO CHAVE PARA SELECIONAR A CALCULADORA*/
/**********************************************************/
void chave(void){

    double graus, radianos;
    int chave;

    printf("Digite 1 para funcoes trigonometricas: (em graus):\n");
    printf("Digite 2 para funcoes arco-seno, arco-cosseno, arco-tangente. \n");
    scanf("%d", &chave);

        if (chave != 1 && chave != 2){
            printf("Entrada inválida: Digite um numero inteiro.\n");

            return;

        }

        if (chave == 1){

            printf("Digite un valor a ser calculado na funcao trigonometrica: \n");
            printf("ATENCAO!!!! valor deve ser em graus!!!\n");
            scanf ("%lf", &graus);

            /*converte o valor de graus em radianos*/
            radianos = M_PI * graus / 180.0;

            seno(graus, radianos);
            cosseno(graus, radianos);
            tangente(graus, radianos);
            cossecante(graus, radianos);
            secante(graus, radianos);
            cotangente(graus, radianos);

        }/*fim do if*/

        else if (chave == 2){
    
            printf("Digite un valor a ser calculado: \n");
            printf("ATENCAO!!!! valor deve ser em RADIANOS!!! \n");
            scanf ("%lf", &radianos);
    
            arcoseno(radianos);
            arcocosseno(radianos);
            arcotangente(radianos);

    }/*fim do else if*/

    else{
        /*mensagem advertência*/
        printf("ATENCAO!!!!!Valor incorreto! Digite 1 ou 2!!!!!!");

        return;

    }/*fim do else*/

}/*fim da função chave*/


/**********************************************************/
/*FUNÇÕES TRIGONOMÉTRICAS*/
/**********************************************************/


/*função seno*/
void seno(double x, double y)
{
    /*declara variável seno*/
    double seno = sin(y);
    printf("Seno de %.2f eh %.5f.\n", x, seno);
}

/*função cosseno*/
void cosseno(double x, double y)
{
    /*declara variável cosseno*/
    double cosseno = cos(y);
    printf("Cosseno de %.2f eh %.5f.\n", x, cosseno);
}

/*função tangente*/
void tangente(double x, double y)
{
    /*declara variável tangente*/
    double tangente = tan(y);
    printf("Tangente de %.2f eh %.5f.\n", x, tangente);
}

/*função cossecante*/
void cossecante(double x, double y)
{
    /*declara variável cossecante*/
    double cossecante = 1.0 / sin(y);
    printf("Cossecante de %.2f eh %.5f.\n", x, cossecante);
}

/*função secante*/
void secante(double x, double y)
{
    /*declara variável secante*/
    double secante = 1.0 / cos(y);
    printf("Secante de %.2f eh %.5f.\n", x, secante);
}

/*função cotangente*/
void cotangente(double x, double y)
{
    /*declara variável cotangente*/
    double cotangente = 1.0 / tan(y);
    printf("Cotangente de %.2f eh %.5f.\n", x, cotangente);
}

/*função arco-seno*/
void arcoseno(double y)
{
    /*declara variável arco-seno*/
    double arcoseno = asin(y);

    /*converte o arcoseno em graus*/
    double graus = arcoseno * 180 / M_PI;

    printf("Arco-seno de %.2f eh %.5f EM GRAUS e %.5f EM RADIANOS.\n", y, graus, arcoseno);
}


/*ARCOS...................................................*/


/*função Arco-cosseno*/
void arcocosseno(double y)
{
    /*declara variável arco-cosseno*/
    double arcocosseno = acos(y);

    /*converte o arco-cosseno em graus*/
    double graus = arcocosseno * 180 / M_PI;

    printf("Arco-cosseno de %.2f eh %.5f EM GRAUS e %.5f EM RADIANOS.\n", y, graus, arcocosseno);
}

/*função arco-tangente*/
void arcotangente(double y)
{
    /*declara variável arco-tangente*/
    double arcotangente = atan(y);

    /*converte o arco-tangente em graus*/
    double graus = arcotangente * 180 / M_PI;

    printf("Arco-tangente de %.2f eh %.5f EM GRAUS e %.5f EM RADIANOS.\n", y, graus, arcotangente);
}

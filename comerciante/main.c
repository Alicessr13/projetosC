#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0, porcen10=0, porcen1020=0, porcen20=0;
    double lucro=0, porcento=0, totalcompra=0, totalvenda=0, totallucro=0;

    printf("Serao digitados quantos produtos: ");
    scanf("%d",&numero);

    typedef struct{
        char prod[40];
        double compra;
        double venda;
    }produtos;
    produtos vetor[numero];

    for(int i =0; i<numero; i++){
        printf("Produto %d\n",i+1);

        setbuf(stdin,NULL);
        printf("Nome: ");
        scanf("%[^\n]",&vetor[i].prod);

        printf("Preco de compra: ");
        scanf("%lf",&vetor[i].compra);

        printf("Preco de venda: ");
        scanf("%lf",&vetor[i].venda);
    }

    for(int i=0; i<numero; i++){
        lucro = (vetor[i].venda - vetor[i].compra)*100/vetor[i].compra;
        porcento = lucro/100;
        if(porcento<0.1){
            porcen10++;
        }
        if(porcento>=0.1&& porcento<=0.2){
            porcen1020++;
        }
        if(porcento>0.2){
            porcen20++;
        }

        totalcompra =totalcompra + vetor[i].compra;
        totalvenda = totalvenda + vetor[i].venda;

    }
    totallucro = totalvenda - totalcompra;

    printf("Lucro abaixo de 10: %d\n",porcen10);
    printf("Lucro entre 10 e 20: %d\n",porcen1020);
    printf("Lucro acima de 20: %d\n",porcen20);
    printf("Valor total de compra: %.2lf\n",totalcompra);
    printf("Valor total de venda: %.2lf\n",totalvenda);
    printf("Lucro total %.2lf\n",totallucro);
    return 0;
}

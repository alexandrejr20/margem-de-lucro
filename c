#include <stdio.h>
#include <stdlib.h>

int main()
{
    int venda,compra,despesa;
   for(int mes=1;mes<=12;mes++)
   {
       printf("\nDigite a venda do %d mes :",mes);
       scanf("%d",&venda);
       printf("\nDigite o valor dos produtos comprados no %d mes : ",mes);
       scanf("%d",&compra);
       printf("\nDigite seu custo operacional do %d mes: ",mes);
       scanf("%d",&despesa);
       float bruto = venda-compra;
       float margem = (bruto/venda)*100;
       float markup = (bruto/compra)*100;
       float liquido = bruto-despesa;
       if (margem<=5&&margem>0)
       {
           printf("\nSUA MARGEM ESTA MUITO BAIXA !\n\n\n ");
       }
       if (margem<=0)
       {
        printf("\nSUA MARGEM ESTA NEGATIVA !\n\n\n ");
       }
       else
       {
        printf("\nSeu markup de vendas foi de %.2f%%",markup);
       printf("\nSua Margem de lucro foi de %.2f%%",margem);
       printf("\nSeu lucro bruto foi de %.2fR$",bruto);
       printf("\nSeu lucro liquido foi de %.2fR$\n\n\n",liquido);

       }



   }
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        float num1, num2, resultado; 						///declara��o das variaveis.
        char oper;
        int loop, val = '=',val1 = 'c';
       
            	printf("Calculadora Turbo\n\n");			///declara��o do nome da calculadora, as opera��es disponiveis.
            	printf("Operacoes disponiveis\n");			
            	printf("'+' : soma\n");
            	printf("'-' : subtracao\n");
            	printf("'*' : multiplicao\n");
            	printf("'/' : divisao\n");
            	printf("'=' : encerra a operacao\n");
            	printf("'c' : apaga a aperacao\n");
            	
            
            	printf("Digite o valor: \n");				

            scanf("%f",  &num1);							///o usu�rio declara o valor para iniciar a opera��o.
         
        do
        {
        	
			scanf("%s",&oper);								///o usu�rio declara a opera��o.

			if( oper == val){								/// declara que ao clicar na tecla "=" encerra a opera��o.
				printf("resultado: %.2f", resultado);		
				return 0;
			}
			else if(oper == val1)
    		{
        		 system("cls");                             ///declara que ao clicar na tecla c apaga toda opera��o.
       			 scanf("%f",&num1);

   			}

            else if(oper != val){							
            	
			scanf("%f", &num2);								///continua calculando.

            	printf(" %.2f %c %.2f = ", num1,oper,num2);
            	

            switch( oper )									///declara as opera��es[+ , - , * , / ].
            {
                case '+':
						resultado = num1 + num2;
                        printf("%.2f\n", resultado);
                        break;

                case '-':
                        resultado = num1 - num2;
                        printf("%.2f\n", resultado);
                        break;

                case '*':
                        resultado = num1 * num2;
                        printf("%.2f\n", resultado);
                        break;

                case '/':
                        if(num2 != 0)
                        resultado = num1 / num2;
						printf("%.2f\n", resultado);
                        printf("Nao existe divisao por 0\n");
                        break;
        	}
    							}
					   
        }while(num1= resultado);							///traz o resultado da opera��o e retorna para pr�xima opera��o at� o usu�rio finalizar.

return 0;
}



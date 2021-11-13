#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        float num1, num2, resultado; 						///declaração das variaveis.
        char oper;
        int loop, valor1 = '=',valor2 = 'c';
       
            	printf("Calculadora Turbo\n\n");			///declaração do nome da calculadora, as operações disponiveis.
            	printf("Operacoes disponiveis\n");			
            	printf("'+' : soma\n");
            	printf("'-' : subtracao\n");
            	printf("'*' : multiplicao\n");
            	printf("'/' : divisao\n");
            	printf("'=' : encerra a operacao\n");
            	printf("'c' : apaga a aperacao\n");
            	
            
            	printf("Digite o valor: \n");				

            scanf("%f",  &num1);							///o usuário declara o valor para iniciar a operação.
         
        do
        {
        	
			scanf("%s",&oper);								///o usuário declara a operação.

			if( oper == valor1){								/// declara que ao clicar na tecla "=" encerra a operação.
				printf("resultado: %.2f", resultado);		
				return 0;
			}
			else if(oper == valor2)
    		{
        		 system("cls");                             ///declara que ao clicar na tecla c apaga toda operação.
       			 scanf("%f",&num1);

   			}

            else if(oper != valor1){							
            	
			scanf("%f", &num2);								///continua calculando.

            	printf(" %.2f %c %.2f = ", num1,oper,num2);
            	

            switch( oper )									///declara as operações[+ , - , * , / ].
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
					   
        }while(num1= resultado);							///traz o resultado da operação e retorna para próxima operação até o usuário finalizar.

return 0;
}



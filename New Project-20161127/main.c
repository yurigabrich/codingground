/*
    Lista Prática 1 - Estruturas de Dados I
    Aquecimento: Linguagem C/C++
    Prof. Igor Machado Coelho
    Aluno: Yuri Bastos Gabrich
    Date : 27/11/2016
*/

#include <string.h>
#include <stdio.h>
int main(void) {
	
	int i;				/* identifier in a loop */
	int y;				/* número do exercício */
	scanf("%d", &y);	/* input char as int */

	if ( y == 0 ) {				/* Exercício 0 */
	    printf("%s\n", "Hello_World!");
	}
	else if ( y == 1 ) { 		/* Exercício 1 */
		int A;
		scanf("%d", &A);
		int B;
		scanf("%d", &B);
		for ( i = A; i <= B; ++i ) {
		   printf("%d\n", i);
		}
	}
	else if ( y == 2 ) { 		/* Exercício 2 */
		/* input não condiz com a descrição do problema */
		int N;
	}
	else if ( y == 3 ) { 		/* Exercício 3 */
		int N;	/* N = número de valores a serem inseridos*/
		scanf("%d", &N);
		int vetor_linha[ N ];
		int soma = 0;

		for( i = 0 ; i < N ; ++i ) {
      		scanf("%f", &vetor_linha[i]); /*PODE DAR MERDA!*/
      		soma += vetor_linha[i];
   		}

   		int max(int vetor[]){
   			/* determina o elemento máximo armazenado em um vetor */
   			int max;
   			for ( i = 0; i < sizeof(vetor); ++i){
   				if ( i == 0 ){
   					max = vetor[i];
   				}
   				else{
   					if ( vetor[i] > max){
   						max = vetor[i];
   					}
   				}
   			}
   			return max;
   		}

   		int min(int vetor[]){
   			/* determina o elemento mínimo armazenado em um vetor */
   			int min;
   			for ( i = 0; i < sizeof(vetor); ++i){
   				if ( i == 0 ){
   					min = vetor[i];
   				}
   				else{
   					if ( vetor[i] < min){
   						min = vetor[i];
   					}
   				}
   			}
   			return min;
   		}

   		printf("%.1f\n", soma);
   		printf("%.1f\n", soma/N);				/* MÉDIA */
   		printf("%.1f\n", max(vetor_linha));
   		printf("%.1f\n", min(vetor_linha));
	}
	else if ( y == 4 ) { 		/* Exercício 4 */
		int N;	/* N = número de alunos {1 < N < 100}*/
		scanf("%d", &N);
		
		char *relacao_alunos[ N ][ 1 ];	/* matriz nula de alunos */
		for( i = 0 ; i < N ; ++i ) {
      		scanf(" %[^\n]s", &relacao_alunos[i][1]); /*AINDA ESTÁ DANDO MERDA!*/
      		/* Consigo carregar o vetor corretamente aqui?! */
   		}
				
		int k;	/* k-ésimo aluno ~> k > 0 */
		scanf("%d", &k);
		
		char aluno[ strlen( relacao_alunos ) ];
		char temp_nota[4];
		char *nota;
		char nome[ strlen( relacao_alunos ) ];
		
		strcpy( aluno, relacao_alunos );			/* pega os dados de 1 aluno */
		strcpy( temp_nota, aluno );					/* copia os valores, pra não sobrescrever ALUNO */
		nota = strtok( temp_nota, " " );			/* pega a NOTA do aluno */
		memcpy( nome, &aluno[strlen( nota )+1], (strlen( aluno ) - strlen( nota ))-1 ); /* pega o NOME do aluno */
		
		char situacao[] = nome;		/* a situação do aluno vai ser atualizada depois de verificar sua nota */
		
		/* Se a nota do aluno for...
		if ( N[k].get(%.1f) >= 7.0){
			strcat( situacao, ' Aprovado' );
		}
		else{
			strcat( situacao, ' Reprovado' );
		}
		*/
		printf("%s\n", situacao); /* Depende de como estará armazenada a variável */
	}
	else if ( y == 5 ) { 		/* Exercício 5 */
		int N;	/* N = número a calcular o fatorial (N!) */
		scanf("%d", &N);
		
		/* função recursiva para calcular o fatorial */
		int fat(int n){
			if ( n == 1){
				return 1;
			}
			else{
				return n*fat(n-1);
			}
		}

		/*cálculo do fatorial pela função declarada acima */
		printf("%d\n", fat(N));
	}
	else if ( y == 6 ) { 		/* Exercício 6 */
		int k;	/* k-ésimo elemento de Fibonacci */
		scanf("%d", &k);

		/* função recursiva do cálculo de Fibonacci */
		int Fib(n){
			/* n = n-ésimo elemento da sequência */
			if ( n == 0 ){
				return 0;
			}
			else if ( n == 1 ){
				return 1;
			}
			else {
				return (Fib(n-1) + Fib(n-2));
			}
		}

		printf("%d\n", Fib(k));
	}
	else if ( y == 7 ) { 		/* Exercício 7 */
		int N;	/* N = número de rodadas de Jokenpô */
		scanf("%d", &N);

		/*
		* d = pedra		|\
		* p = papel		| > [ d > t ];[ t > p ];[ p > d ]
		* t = tesoura	|/
		* jogad@r 1 = Maria ~> M
		* jogad@r 2 = João ~> J
		*/

		/* carregando o vetor de jogadas */
		int jogadas[ N ];
		for( i = 0 ; i < N ; i++ ) {
      			scanf("%c %c", &jogadas[i]); /*PODE DAR MERDA!*/
   		}

   		/* contando os pontos */
   		/*
		Depende de como os dados serão armazenados!
   		==> Não esquecer da comparação das jogadas!
		*/

   		/* resultado do jogo */
   		char *resultado;
   		int M, J;
		if (M > J){
   			resultado = "Maria";
   		}
   		else if (J > M){
   			resultado = "João";
   		}
   		else{
   			resultado = "EMPATE";
   		}
   		printf("%s\n", resultado);
	}
	else if ( y == 8 ) { 		/* Exercício 8 */
		int A, B;
		scanf("%d %d\n", &A, &B); /* PODE DAR MERDA! */
		printf("%d %d\n", B, A);
		/* Pra q ponteiro? */
	}
	else if ( y == 9 ) { 		/* Exercício 9 */
		/*
		input:
			D = dívida do mês anterior
			A = valor mensal amortizado
			P = prestações
			TR = taxa de referência = 0,0957% (Fev/2016)
			x = taxa de juros
			r = taxa de referência percentual(TR) / 100
			k = número de parcelas
		output:
			D_ = D – A*(1+r) + D*r = dívida do mês seguinte
			P_ = A*(1+r) + D*x*(1+r) = parcela do mês seguinte
		*/
		float D, A, x;
		char *mes;
		int k;
		scanf("%f %f %f %s %d\n", &D, &A, &x, &mes, k); /* PODE DAR MERDA! */

		float D_, P_;
		float TR = 0.0957; /* (Fev/2016) => Como fazer pra variar? */
		float r = TR/100;
		for ( i = 0; i < k; ++i ){
			P_ = A*(1+r) + D*(x/100)*(1+r);
			D_ = D - A*(1+r) + D*r;
			printf("%.2f %.2f\n", P_, D_);
			D = D_;
		}	/* Falta atualizar mais alguma coisa! */
	}

	return 0;
}

/*
REFERÊNCIAS PARA ESTUDO:
 
 - [Arrays and Pointers](http://www.lysator.liu.se/c/c-faq/c-2.html)
 - [Endereços e ponteiros](https://www.ime.usp.br/~pf/algoritmos/aulas/pont.html)
 - [C Tutorial – printf, Format Specifiers, Format Conversions and Formatted Output](https://www.codingunit.com/printf-format-specifiers-format-conversions-and-formatted-output)

 */

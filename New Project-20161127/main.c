/*
    Lista Prática 1 - Estruturas de Dados I
    Aquecimento: Linguagem C/C++
    Prof. Igor Machado Coelho
    Aluno: Yuri Bastos Gabrich
    Date : 27/11/2016
*/

#include <stdio.h>
int main(void) {
	
	int i;				/* identifier in a loop */
	int y;				/* número do exercício */
	scanf("%d", &y);	/* input char as int */

	if ( y == 0 ) { 			/* Exercício 0 */
	    printf("Hello_World!");
	}
	else if ( y == 1 ) { 		/* Exercício 1 */
		int A;
		scanf("%d", &A);
		int B;
		scanf("%d", &B);
		for ( i = A; i <= B; ++i ) {
		   printf(i);
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

   		int max(vetor){
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

   		int min(vetor){
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

   		printf(soma);
   		printf(soma/N);				/* MÉDIA */
   		printf(max(vetor_linha));
   		printf(min(vetor_linha));
	}
	else if ( y == 4 ) { 		/* Exercício 4 */
		int N;	/* N = número de alunos {1 < N < 100}*/
		scanf("%d", &N);
		int num_alunos[ N ];
		
		for( i = 0 ; i < N ; ++i ) {
      		scanf("%.1f %s %s", &num_alunos[i]); /*PODE DAR MERDA!*/
      		
      		/* Consigo carregar o vetor corretamente aqui?! */

      		/*
      		Tem q permitir pegar uma string e depois separá-la
   			por um delimitador, no nosso caso, espaço " "
   			*/
   		}
				
		int k;	/* k-ésimo aluno ~> k > 0 */
		scanf("%d", &k);
		char situacao[] = N[k].nome;
		/* Se a nota do aluno for...
		if ( N[k].get(%.1f) >= 7.0){
			str_append( situacao, ' Aprovado' );
		}
		else{
			str_append( situacao, ' Reprovado' );
		}
		*/
		printf(situacao);
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
		printf(fat(N));
	}
	else if ( y == 6 ) { 		/* Exercício 6 */
		int k;	/* k-ésimo elemento de Fibonacci */
		scanf("%d", &k);

		/* função recursiva do cálculo de Fibonacci */
		int Fib(n){
			/* n = n-ésimo elemento da sequência */
			if ( n == 0){
				return 0;
			{
			else if ( n == 1){
				return 1;
			}
			else{
				return (Fib(n-1) + Fib(n-2));
			}
		}

		printf(Fib(k));
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
   		Depende de como os dados serão armazenados!
   		==> Não esquecer da comparação das jogadas!


   		/* resultado do jogo */
   		char resultado;
   		if (M > J){
   			resultado = 'Maria';
   		}
   		else if (J > M){
   			resultado = 'João';
   		}
   		else{
   			resultado = 'EMPATE';
   		}
   		printf(resultado);
	}
	else if ( y == 8 ) { 		/* Exercício 8 */
		int A, B;
		scanf("%d %d\n", &A, &B); /* PODE DAR MERDA! */
		printf(“%d %d\n”, B, A);
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
			r = taxa de referência percentual
			k = número de parcelas
		output:
			D_ = D – A*(1+r) + D*r = dívida do mês seguinte
			P_ = A*(1+r) + D*x*(1+r) = parcela do mês seguinte
		*/
		float D, A, x;
		char mes;
		int k;
		scanf("%f %f %f %s %d\n", &D, &A, &x, &mes, k); /* PODE DAR MERDA! */

		float D_, P_;
		for ( i = 0; i < k; ++i ){
			D_ = D – A*(1+r) + D*r;
			P_ = A*(1+r) + D*x*(1+r);
			printf("%.2f %.2f\n", P_, D_);
		}	/* Acho q está errado a atualização dos valores! */
	}

	return 0;
}

/*
REFERÊNCIAS PARA ESTUDO:
 
 - http://www.lysator.liu.se/c/c-faq/c-2.html
 - https://www.ime.usp.br/~pf/algoritmos/aulas/pont.html

 */
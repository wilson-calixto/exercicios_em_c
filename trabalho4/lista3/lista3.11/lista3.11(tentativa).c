#include <stdio.h>
#include <stdlib.h>

typedef struct cliente
{
	int conta;
	float saldo;
}Cliente;

void addCliente(int n, Cliente *c);
int addOp(int *nop, int *nS, int *nD, Cliente *c, int i);
void Mostraclientes(Cliente *c, int n);
void sortClientes(int n, Cliente *c);

void addCliente(int n, Cliente *c)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		puts("Informe o numero da conta:");
		scanf("%d", &c[i].conta);
		puts("Informe o saldo dessa conta:");
		scanf("%f", &c[i].saldo);
	}
}

int addOp(int *nOp, int *nS, int *nD, Cliente *c, int i)
{
	int j;
	float valor;
	char op;
	
	puts("Informe o numero de operações:");
	scanf("%d", &*nOp);
	
	for(j = 0; j < *nOp; j++)
	{
        setbuf(stdin, NULL);
		puts("Informe a operação realizada: saque('S'), deposito('D')");
		op = getchar();
		
		switch(op)
		{
			case 'S':
				
				nS++;
				puts("Informe o valor do saque:");
				scanf("%f", &valor);
				c[i].saldo -= valor; 
				break;
			case 'D':
				nD++;
				puts("Informe o valor do saque:");
				scanf("%f", &valor);
				c[i].saldo += valor;
				break;
			default:
				puts("Operaçao invalida.");
		}
	}
	
	return *nOp;
}

void MostraClientes(Cliente *c, int n)
{
	int i;

	sortClientes(n, c);
	
	for(i = 0; i < n; i++)
	{
		printf("O numero da conta eh %d e o saldo eh %0.2f\n", c[i].conta, c[i].saldo);
	}
	
}

void sortClientes(int n, Cliente c[n])
{
	int i, j;
	Cliente aux;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(c[i].conta < c[j].conta)
			{
				aux = c[i];
				c[i] = c[j];
				c[j] = aux;
			}
		}
	}
}

int EscolheCliente(Cliente *c, int n)
{
	int op;
	
	MostraClientes(c, n);
	
	puts("Informe que cliente voce deseja consultar:");
	scanf("%d", &op);
	
	printf("O numero da conta eh %d, o saldo eh %0.2f\n e o indice ", c[op].conta, c[op].saldo);

	return op;
}

int main()
{
	int n, nOp, nS, nD, continua, i;
	char op;
	Cliente *c;
	
	continua = 1;
	
	nD = nS = 0;
		
	puts("Informe o numero de clientes:");
	scanf("%d", &n);
	
	c = malloc(sizeof(Cliente) * n);

	addCliente(n, c);
	
	while(continua)
	{
        setbuf(stdin, NULL);

		puts("Informe o que deseja fazer: Ver clientes(1), Escolher um cliente(2), Sair(3), Adiciona Operação(4)");
		op = getchar();
	
		switch(op)
		{
			case '1':
				MostraClientes(c, n);
				break;
			case '2':
				i = EscolheCliente(c, n);
				break;
			case '3':
				continua = 0;
				break;
			case '4':
				puts("Informe o indice do cliente:");
				scanf("%d", &i);
				addOp(&nOp, &nS, &nD, c, i);
				break;
			default:
				puts("Operação invalida");
				break;
		}
	}
	return 0;
}

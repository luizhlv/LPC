//Aluno: Luiz Henrique Lara de Vasconcelos - Eng. de Materiais
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 200

struct cliente{
	char nome[60];
	char cpf[11];
	float salario[SIZE];
	int tipo[SIZE];
	};
int main(){
	struct cliente c[200];
	int x=0;
	int j, y, conf = 0;
	float juros[3], emp, cf, i, resp, n, p;
do{
    printf("1-Cadastrar Taxas de Juros\n2-Cadastrar Cliente\n3-Simular Emprestimo\n4-Sair\n");
    scanf("%i", &y);

    if(y==2){
	printf("Digite seu nome: \n");
	scanf("%s", c[x].nome);

	printf("Digite seu cpf: \n");
	scanf("%s", c[x].cpf);

	printf("Digite seu salario: \n");
	scanf("%f", &c[x].salario);
	do {
		printf("\nSelecione seu tipo de cliente: \n1-Aposentado INSS\n2-Funcionario Publico\n3-Funcionario Privado\n");
		scanf("%i", &c[x].tipo[x]);
	}while (c[x].tipo[x]<0 && c[x].tipo[x]>3);
	conf = conf + 1;
	printf("\nUsuario Adicionado com sucesso\n");
    }
    else if(y==1){
    printf("\nDigite em porcentagem os juros\n");

    printf("\nJuros INSS: ");
    scanf("%f", &juros[0]);
    printf("\nJuros Funcionario Publico: ");
    scanf("%f", &juros[1]);
    printf("\nJuros Funcionario Privado: ");
    scanf("%f", &juros[2]);
    printf("\nTaxas Adicionadas com sucesso\n");
    conf = conf + 1;
    }

	else if(y==3 && conf==2){
	printf("\nDigite o valor do Emprestimo: ");
	scanf("%f", &emp);
	printf("\nDigite o Prazo para o Pagamento, em meses: ");
	scanf("%f", &n);

	i = juros[c[x].tipo[x]-1]/100;
	p = pow(1+i, -n);
	cf = i/(1-p);
	resp = emp * cf;

	printf("O valor da parcela e: R$%.2f", resp);
	printf("\n");
	}
	else if(y==3){
	    printf("Por favor cadastre o Usuario e a Taxa de juros antes da simulação\n");
	    printf("\n");
	}
	else if(y==4){
	    printf("Ate mais");
	}
	else{
	    printf("Numero invalido\n");

	}
	if(conf>1){
	    printf("\nUser: %s\n", c[x].nome);
	}
}while(y!=4);
}

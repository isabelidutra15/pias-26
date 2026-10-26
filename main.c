#include <stdio.h>


#define qp 57
char produtos[57][75] = {"café", "cappuccino", "Café latte", "Macchiato",
     "Americano", "Caramel Macchiato", "Iced latte", "Chocolate quente cremoso",
     "Chá de hibisco com frutas vermelhas", "Suco de laranja natural", "Pão de queijo mineiro",
     "Croissant recheado", "Coxinha de Frango",
     "Avocado Toast", "Quiche de alho-poró", "Folhado com requeijão",
     "Folhado de ricota de espinafre", "Empada de Palmito",
     "Empada de frango", "Pastel de carne",
     "Pastel de queijo e presunto", "Esfirra de carne", "Esfirra de queijo",
     "Esfirra de calabresa", "Pastel doce", "Donut de chocolate", "Sonho recheado", "Bolo gelado ",
     "Bolo com cobertura de chocolate", "Bolo de Baunilha com cobertura de leite ninho", "Pudim",
     "Cookie de Baunilha com gotas de chocolate", "Brownie de chocolate", "Torta de Limão siciliano",
     "Cheescake de frutas vermelhas", "Banoffe pie", "Torta holandesa", "Mil-folhas tradicional",
     "Cinnamom Roll", "Palha Italiana de brigadeiro", "Bolo de Laranja com calda", "Muffin de Mirtilo",
     "Macarons", "Bolo de cenoura com cobertura de brigadeiro", "Brigadeiro tradicional", "Brownie vegano e sem glúten",
     "Bolo de Banana integral", "Torta de maça", "Cocada de forno fit",
     "Suco natural de frutas vermelhas", "Suco natural de abacaxi com hortelã",
     "Água com gás", "suco natural de pêssego", "Água sem gás", "Chá de menta", "Soda italiana", "Chá verde"};
     

    char categoria[57][33] = {"bebida", "bebida", "bebida", "bebida", "bebida",
       "bebida", "bebida", "bebida", "bebida", "bebida",
       "salgados", "salgados", "salgados",
       "salgados", "salgados", "salgados", "salgados", "salgados", "salgados",
       "salgados",
       "salgados", "salgados", "salgados", "salgados", "Doces","Doces","Doces",
       "Doces",
       "Doces","Doces","Doces","Doces", "Doces","Doces","Doces","Doces","Doces",
       "Doces","Doces","Doces",
       "Doces","Doces","Doces","Doces","Doces","Doces","Doces","Doces","Doces"
       "Bebidas", "Bebidas","Bebidas",
       "Bebidas","Bebidas","Bebidas","Bebidas","Bebidas"};
       
    float preco[qp] = { 7.50, 13.00, 11.00, 9.00, 8.00, 16.50, 15.00, 14.00, 10.50, 11.00,
    6.50, 16.00, 10.00, 24.00, 14.50, 12.00, 12.00, 9.00, 9.00, 11.00, 
    11.00, 9.50, 9.50, 9.50, 10.00, 11.50, 10.00, 12.00, 11.00, 14.00, 
    11.00, 14.00, 11.00, 9.50, 11.50, 14.00, 11.50, 16.00, 15.50, 15.00, 
    3.50, 9.00, 9.00, 13.50, 8.00, 12.50, 6.00, 14.00, 11.50, 15.50,
    12.00, 14.00, 12.00, 5.50, 12.50, 5.00, 8.50};
    
int estoque[60] = {0};
int compra[57] = {0};
float pagar[57] = {0.0};
void mostra_produtos() {
	for(int i = 0; i<qp; i++) {
		printf("%d- %s -- %.2f\n", i, produtos[i], preco[i]);
	}
}

void escolha_produto() {
	int produto;
	int quantidade;

	scanf("%d", &produto);
	printf("\nQuantos?: ");
	scanf("%d", &quantidade);
	compra[produto] = quantidade;
	estoque[produto] = estoque[produto] - quantidade;
	
	void escolha_produto() {
	    int opcao;
	    printf("Digite o produto");
	    
	}


switch(produto) {
    case 1:
    printf("Bebidas\n");
    break;
    
    case 2:
    printf("Doces\n");
    break;
    default:
    
    case 3:
    printf("Salgados\n");
    break;
}

}
void mostra_compra() {
	float pagar;
	for(int i = 0; i<qp; i++) {
		if(compra[i] != 0) {
			pagar = compra[i]*preco[i];
			printf("%d- %s -- %d\n -- pagar %.2f ", i, produtos[i], compra[i], pagar);
		}
	}
}


int main(){
	printf("  ______ ___   _      _     ____   ____ ___  _____ _____ \n");
	printf("  |  ___/ _ \\ | |    | |   / ___| / ___/ _ \\|  ___|  ___|\n");
	printf("  | |_ / /_\\ \\| |    | |   \\___ \\| |  | | | | |_  | |_   \n");
	printf("  |  _||  _  || |___ | |___ ___) | |__| |_| |  _| |  _|  \n");
	printf("  |_|  |_| |_|\\_____/\\_____/____/ \\____\\___/|_|   |_|    \n");
	printf("\n");
	printf("                 - O MELHOR LUGAR PARA FINISHED COM SUA HUNGER -\n\n");


	mostra_produtos();
	escolha_produto();
	mostra_compra();
	printf("\nOBRIGADA PELA COMPRA! VOLTE SEMPRE.\n ");

	return 0;
}
// Tema 2 - Teste de For�a.
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
//abrindo na biblioteoca 
int main()
{
// desmostra��o das veriaveis 
    bool sair = false;
	string jog1, jog2;
	int vida1 = 100, vida2 = 100;
	int At1 = 4 , At2 = 4;
	int Df1 = 1 , Df2 = 1;
	
	// perguntando o nome dos dois lutadores 
	cout << "Digite o nome do lutador 1:" << endl;
	cin >> lut1;
	cout << "Digite o nome do lutador 2:" << endl;
	cin >> lut2;
    // La�o
	while  (sair == false)
	{
		// desmostra��o de personagens 
		cout << " o                   o" << endl;
		cout << ".T./               \\.T." << endl;
		cout << " ^                   ^" << endl;
		// Mostra o nome de cada lutador	
		cout << lut1 << "               " << lut2 << endl;
		// Mostra a vida dos personagens.
		cout << "Vida: " << vida1 << "          " << "Vida: " << vida2 << endl;


     	//Vari�veis para o n�mero aleat�rio "dado" do 1� lutador

	    // armazena o n�mero aleat�rio
		int dado1;
		// guarda o valor aleat�rio para a condi��o
		int dadof1;
		//guardar o resultado do dano para imprimir no futuro na tela	
		int dano1;


		// Usa o tempo atual como "semente" do gerador
		srand((int)time(0));
		// Gera um n�mero aleat�rio entre 1 e 100
		dado6 = rand() % 6 + 1;
		// Causa dano igual o valor gerado no "dado" , o numero aletorio 
		vida1 = vida1 - dado6;
           
		   
		   
		   //vari�vel para guardar o valor aleat�rio si for mais que 4
		if (dadof1 >= 4)
		{
			//C�lculo para ter o valor do dano no lutador 1
			dano1 = At2 - Df1;
			//o amarzenamento da vida atual do lutador 1 menos o dano do lutador 2 
			vida1 = vida1 - dano1;

        }

        //Vari�veis para o n�mero aleat�rio "dado" do 2� jogador

		// armazena o n�mero aleat�rio
		int dado2;
		//guarda o valor aleat�rio para a condi��o
		int dadof2;
		//guardar o resultado do dano para imprimir no futuro na tela
		int dano2;

		// Mesma coisa para o Jogador 2
		dado6 = rand() % 6 + 1;
		vida2 = vida2 - dado6;
		
		//vari�vel para  guardar o valor aleat�rio for mais que 4
		if (dadof2 >= 4)
		{
			//C�lculo ter o valor do dano no lutador 2 
			dano2 = At1 - Df2;
			//o amarzenamento da vida atual do lutador 1 menos o dano do lutador 1
			vida2 = vida2 - dano2;

		}

       //Caso a n�mero do dado for menor que 4 o nosso lutador vai errar 
		else cout << "Errou " << endl;

		//desmostrando informa��es na tela
		//mostra o ataque do lutador 1 e do lutador 2
		cout << "A:" << At1 << "                    " << "A:" << At2 << endl;
		//mostra a defesa do lutador 1 e lutador 2
		cout << "D:" << Df1 << "                    " << "D:" << Df2 << endl;
		//mostra  a vida do lutador 1 e do lutador 2
		cout << "Vida:" << vida1 << "               " << "Vida:" << vida2 << endl;

		//para a programa n�o fechar continua esse la�o 
		
		system("Pause"); 

    	// Se sair n�o limpa a tela
		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}
		// Se continuar ent�o limpa a tela
		else system("cls");
	}

	// Verifica quem venceu o jogo.
	if (vida1 > 0) cout << jog1 << " Venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << " Venceu!" << endl;
	// Se a vida dos dois chegar a menos de 0 (zero) quer dizer que os dois perderam.
	else cout << " Game Over " << endl;

	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

//Tema 3 - Jogo de Corrida 
#include <iostream> 
#include <string>
#include <ctime>
//entrando na biblioteca 

using namespace std;
/
//Funçoes cria pequenos pedaços de códigos para separa-los do programa principal
void imprimir_espacos(int total);

int main()
{
 //demostração das variaves
	bool sair = false; 
	string pil1; 
	string pil2; 
	int rodada1 = 0, rodada2 = 0; 
	int total_espacos = 20; 

    // pergunta o nome do jogadores e os salva nas suas variaveis 
	cout << "Digite o nome do piloto 1:" << endl; 
	cin >> pil1; 
	
	cout << "Digite o nome do piloto 2:" << endl
	cin >> pil2;
// é ultilizado para determinar a hora de parar
	while (sair == false)
	{
        //esse comandos abaixo servem para gerar um numero aleatorio e para cada rodada sera somado o total_espaços que ira substituir o numero de rodadas anterior
		srand((int)time(0)); 
		total_espacos = rand() % 3 + 1; 
		rodada = rodada1 + total_espacos;  
		
		// para imprimir os carinhos , os pilotos e a quantidades de espaços  
		cout << "Largada                                                                               Chegada" << endl;
		cout << "piloto " << pil1 << endl;
		imprimir_espacos(rodada1);  
		cout << "   _  " << endl;
		imprimir_espacos(rodada1);
		cout << " -Lo=o> " << endl;
		cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
		
		// o memsmo so que com o piloto 2 
		srand((int)time(0));
		total_espacos = rand() % 3 + 1;
		rodada2 = rodada2 + total_espacos;
		
		cout << "largada                                                                               Chegada" << endl;
		cout << "piloto " << pil2 << endl;
		imprimir_espacos(rodada2);
		cout << "   _  " << endl;
		imprimir_espacos(rodada2);
		cout << " -Lo=o> " << endl;
		cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

		cout << "jogar novamente  (Digite enter)" << endl; //para jogar novamente 
		

		system("pause");//para pausar o jogo ate alguem apertar alguma tecla
		
		system("cls"); //limpa a tela 
		


		if (rodada >= 30 || rodada2 >= 30) // se eles chegam em 30 ai os carrinhos param 
		{
			sair = true; // // comando buleano
		}
		else //ouu
		
			system("cls"); // limpa a tela 
		

	
	}
	
	if (rodada = 20)  // se o jagador chagar a 20 ele ganha
		cout << mot1 << " 1º lugar aeeeeeeee" << endl;
	
	else if (rodada2 = 20) // mesma coisa 
		cout << mot2 << " 1º lugar aeeeeeee" << endl;
	
	else // se nao empate
		cout << "EMPARE O.O " << endl; // se nao empate 
	
	
	system("pause"); // pausar 

	return 0; 
}

void imprimir_espacos(int total) // função 
{
	for (int quantidade_atual = 0; quantidade_atual < total; quantidade_atual++) // laço for com uma variavel quantidade_atual

	{
		cout << " ";
	}
}

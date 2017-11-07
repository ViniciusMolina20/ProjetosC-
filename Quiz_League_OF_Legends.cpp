#include <iostream>
#include <locale.h>
#define perguntas 10
//Vinicius Molina
//Em andamento

using namespace std ; 


//Variaveis Globais
int nivel ; 
int resposta ; 
int erros  ; 
int acertos ; 
//Fim Variaveis Globais

//Declaracoes de Funcoes Globais
int nivel_conhecimento () ; 
int nivel_facil (); 
int nivel_intermediario () ;
int escolher_nivel () ;   
int nivel_dificil () ; 
int verificar_fases () ;
//Fim declaracoes De Funcoes Globais

//Variaveis Booleanas
bool fim_facil = false ;
bool fim_inter = false ;
bool fim_dificil = false ;  
//Fim Variaveis Booleanas

//Funcao para limpar tela 
void limpar_tela () 
{
	system ( " cls " ) ; //Comando para limpar tela
}

int nivel_conhecimento ()  //Nivel de conhecimento  baseado nos elos de league of legends
{
	
	if ( acertos >= 0 and acertos <= 3 ) 
	{
		cout << "\n\nVocê é Bronze" ; //Se ela acertar entre 0 e 3 ela é bronze
	}
	
	else if ( acertos > 3 and acertos <= 6 ) 
	{
		cout << "\n\nVocê é Prata" ; //Se ele acertar entre 3 e 6 ele é prata
	}
	
	else if ( acertos > 6 and acertos <= 8 ) 
	{
		cout << "\n\nVocê é Ouro" ; //Se ele acertar entre 6 e 8 ele é gold (Ouro)
	}
	
	else if ( acertos > 8 and acertos <= 10 ) 
	{
		cout << "\n\nVocê é Diamante" ; //Se ele acertar entre 8 e 10 ele é diamante
	}
}

void errou_dificil () 
{
	limpar_tela () ; 
	cout << "\nVoce Errou!"; //Mostro que ele Errou
	cout << "\nAperte 1 para Comecar novamente ou 2 para sair do jogo: " ; //Se ele quiser comecar novamente só apertar 1
	cin >> resposta ; 
	
	while ( resposta != 1 and resposta != 2 )  //Enquanto a resposta for diferente do que eu to pedindo ficar nesse looping 
	{
		limpar_tela () ;  
		cout << "\nAperte 1 para Comecar novamente ou 2 para sair do jogo: " ; 
		cin >> resposta ; 	
	}
	
	if ( resposta == 1 ) //Se a resposta for igual a 1 (Recomecar) chamar a funcao que esta meu jogo
	{
		nivel_dificil () ; 
	}
	
	else  //Se nao mostro quantas perguntas ele errou e quantas ele acertou e dou comando para sair do jogo
	{
		cout << "\nVoce errou " << erros + 1 << " pergunta e acertou " << acertos  ;
		nivel_conhecimento () ; 
		exit ( 2 ) ; 
	}
}

void errou_inter ()  //Errou para o intermediario 
{
	limpar_tela () ; //Limpar tela 
	
	cout << "\nVoce Errou!"; //Mostro que ele Errou
	cout << "\nAperte 1 para Comecar novamente ou 2 para sair do jogo: " ; //Se ele quiser comecar novamente só apertar 1
	cin >> resposta ; 
	
	while ( resposta != 1 and resposta != 2 )  //Enquanto a resposta for diferente do que eu to pedindo ficar nesse looping 
	{
		limpar_tela () ;  
		cout << "\nAperte 1 para Comecar novamente ou 2 para sair do jogo: " ; 
		cin >> resposta ; 	
	}
	
	if ( resposta == 1 ) //Se a resposta for igual a 1 (Recomecar) chamar a funcao que esta meu jogo
	{
		nivel_intermediario () ; 
	}
	
	else  //Se nao mostro quantas perguntas ele errou e quantas ele acertou e dou comando para sair do jogo
	{
		cout << "\nVoce errou " << erros + 1 << " pergunta e acertou " << acertos  ;
		nivel_conhecimento () ; 
		exit ( 2 ) ; 
	}
}


//Funcao de reinicio de jogo quando o usuario erra da opcao de recomecar ou sair do jogo 
void errou ()  
{
	limpar_tela () ; //Limpar tela 
	
	cout << "\nVoce Errou!"; //Mostro que ele Errou
	cout << "\nAperte 1 para Comecar novamente ou 2 para sair do jogo: " ; //Se ele quiser comecar novamente só apertar 1
	cin >> resposta ; 
	
	while ( resposta != 1 and resposta != 2 )  //Enquanto a resposta for diferente do que eu to pedindo ficar nesse looping 
	{
		limpar_tela () ;  
		cout << "\nAperte 1 para Comecar novamente ou 2 para sair do jogo: " ; 
		cin >> resposta ; 	
	}
	
	if ( resposta == 1 ) //Se a resposta for igual a 1 (Recomecar) chamar a funcao que esta meu jogo
	{
		nivel_facil () ; 
	}
	
	else  //Se nao mostro quantas perguntas ele errou e quantas ele acertou e dou comando para sair do jogo
	{
		cout << "\nVoce errou " << erros + 1 << " pergunta e acertou " << acertos  ;
		nivel_conhecimento () ; 
		exit ( 2 ) ; 
	}
}

int escolher_nivel ()  //Funcao para o usuario escolher o nivel do jogo no comeco 
{
	//Opcoes de niveis
	cout << "\nSEJA BEM VINDO";
	cout << "\nQual Nivel voce deseja Jogar";
	cout << "\n1-FACIL";
	cout << "\n2-INTERMEDIARIO";
	cout << "\n3-DIFICIL";
	cout << "\n4-SAIR" ; 
	cout << "\n\nNivel: " ;
	cin >> nivel ; //Variavel que vou guardar a resposta 
	
	while ( nivel != 1 and nivel != 2 and nivel != 3 and nivel != 4 ) //Enquanto a resposta dele for diferente das opcoes que estou pedindo ficar no looping 
	{
		limpar_tela () ;  //Funcão para limpar a tela 
		escolher_nivel () ;  //Função para escolher o nivel 
	}
}

int main(int argc, char** argv)  //Funcao principal 
{
	setlocale(LC_ALL, "Portuguese");
	int nivel_facil () ; //Declaracao da minha funcao de nivel facil
	int nivel_intermediario () ; //Declaracao da minha funcao de nivel intermediario
	int nivel_dificil () ; //Declaracao da minha funcao de nivel dificil 
	escolher_nivel () ; //Chamo minha funcao escolher nivel 
	
	switch (nivel) //Switch para cada nivel 
	{
		case 1: nivel_facil () ;  //Caso a resposta for 1 entra na funcao nivel facil 
				break ;
		case 2: nivel_intermediario () ; //Caso a resposta for 2 entrar na funcao nivel intermediario
				break ;
		case 3: nivel_dificil () ; //Caso a resposta for 3 entrar na funcao nivel dificil 
				break ;
		case 4: exit (4) ; 
				
	}
	return 0;
}
 
int nivel_facil () //Funcao Nivel Facil 
{ 
	limpar_tela () ;  //Chamando a funcao para limpar a tela 
	
	//1- Questao do quiz no nivel Facil
	cout << "\n(Questao 1) - O que quer dizer League of Legends em Portugues?";
	cout << "\n\n1-Liga Das Lendas" ;
	cout << "\n2-Liga Das Legendas" ;
	cout << "\n3-Legenda Das Liga" ;
	cout << "\n4-Nenhuma das Anteriores"; 
	cout << "\nResposta: " ; 
	cin >> resposta ; 
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) //Enquanto a resposta for diferente das opcoes que eu dei ficar nesse looping
	{
		nivel_facil () ; //Chamando a minha funcao ja que é a primeira pergunta
	}
 
	
	if ( resposta != 1 ) //Se a resposa for diferente da resposta correta (1) entrar na funcao if 
	{
		errou () ; //Chamando a minha funcao errou 
		erros = erros + 1 ; //Erros recebe ele mais 1
	}
	
	else if ( resposta == 1 ) //Se a resposta for a resposta correta (1) entrar nessa funcao if
	{
		acertos = acertos + 1 ;  //Acertos recebe ela mais 1 
	}
	
 	limpar_tela () ; //Chamando a funcao limpar tela
 	
 	//Questao 2
 	cout << "\n(Questao 2) - Qual desses campeoes nao sao magos" ;
 	cout << "\n\n1- Veigar e Ryze" ;
 	cout << "\n2- Ahri e Cassiopeia " ;
 	cout << "\n3- Malzahar e Morgana" ;
 	cout << "\n4- Jinx e Leona" ;
 	cout << "\nResposta: " ;
 	cin >> resposta ; 
 	
 	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) //Enquanto a resposta for diferente das opcoes que eu dei ficar nesse looping
	{
		limpar_tela () ; 
		cout << "\n(Questao 2) - Qual desses campeoes nao sao magos" ;
 		cout << "\n\n1- Veigar e Ryze" ;
 		cout << "\n2- Ahri e Cassiopeia " ;
 		cout << "\n3- Malzahar e Morgana" ;
 		cout << "\n4- Jinx e Leona" ;
 		cout << "\nResposta: " ;
 		cin >> resposta ; 
	}

	if ( resposta != 4 )  //Se resposta for diferente da resposta correta entrar na funcao if 
	{
		errou () ; //Chamando minha funcao errou 
		erros = erros + 1 ;  //Erros recebe ela mais 1
	}
	
	else if ( resposta == 4 ) 
	{
		acertos = acertos + 1 ; 
	}
	
	limpar_tela () ; //Chamando a funcao limpar tela
	
	//Questao 3
	cout << "\n(Questao 3) - Qual desses campeoes e considerado como ""A Vinganca Flamejante""" ;
	cout << "\n\n1- Ziggs" ;
	cout << "\n2- Brand" ;
	cout << "\n3- Ahri" ;
	cout << "\n4- Soraka" ;
	cout << "\nResposta: " ;
	cin >> resposta ; 
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) 
	{
		limpar_tela () ; 
		cout << "\n(Questao 3) - Qual desses campeoes e considerado como ""A Vinganca Flamejante""" ;
		cout << "\n\n1- Ziggs" ;
		cout << "\n2- Brand" ;
		cout << "\n3- Ahri" ;
		cout << "\n4- Soraka" ;
		cout << "\nResposta: " ;
		cin >> resposta ; 
	}
	
	if ( resposta != 2 ) 
	{
		errou () ; 
		erros = erros + 1 ; 
	}
	
	else if ( resposta == 2 ) 
	{
		acertos = acertos + 1 ;
	}
	
	limpar_tela () ; //Chamando funcao limpar tela 
	
	//Questao 4
	cout << "\n(Questao 4) - O Campeao Tahm Kench Pode engolir um campeao Aliado?";
	cout << "\n\n1- Verdadeiro" ;
	cout << "\n2- Falso" ;
	cout << "\nResposta: " ;
	cin >> resposta ; 
	
	while ( resposta != 1 && resposta != 2 ) 
	{
		limpar_tela () ; 
		cout << "\n(Questao 4) - O Campeao Tahm Kench Pode engolir um campeao Aliado?";
		cout << "\n\n1- Verdadeiro" ;
		cout << "\n2- Falso" ;
		cout << "\nResposta: " ;
		cin >> resposta ; 
	}
	
	if ( resposta != 1 ) 
	{
		errou () ;
		erros = erros + 1 ; 
	}
	
	else 
	{
		acertos = acertos + 1 ;
	}
	
	limpar_tela () ; //Chamando a funcao limpar tela 
	
	//Questao 5
	cout << "\n(Questao 5) - O Campeao Volibear e um Jacare e  o campeao Renekton e um Urso?";
	cout << "\n\n1-Verdadeiro e Verdadeiro" ;
	cout << "\n2- Falso e Verdadeiro" ;
	cout << "\n3- Falso e Falso";
	cout << "\n4- Verdadeiro e Falso" ;
	cout << "\nResposta: " ;
	cin >> resposta ; 
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) 
	{
		limpar_tela () ; 
		cout << "\n(Questao 5) - O Campeao Volibear e um Urso?";
		cout << "\n\n1-Verdadeiro e Verdadeiro" ;
		cout << "\n2- Falso e Verdadeiro" ;
		cout << "\n3- Falso e Falso";
		cout << "\n4- Verdadeiro e Falso" ;
		cout << "\nResposta: " ;
		cin >> resposta ;
	}
	
	if ( resposta != 3 ) 
	{
		errou () ;
		erros = erros + 1 ; 
 	}
	
	else 
	{
		acertos = acertos + 1 ;
	}
	
	limpar_tela () ;//Chamando a funcao limpar tela 
	
	//Questao 6
	cout << "\n(Questao 6) - ""Eu fui esculpida do gelo, moldada pelas tempestades e enrijecida pelo frio"" Essa frase e de que campeao?" ;
	cout << "\n\n1- Anivia";
	cout << "\n2- Amumu" ;
	cout << "\n3- Sejuani" ;
	cout << "\n4- Ashe" ;
	cout << "\nResposta: " ;
	cin >> resposta ;
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 )
	{
		limpar_tela () ;
		cout << "\n(Questao 6) - ""Eu fui esculpida do gelo, moldada pelas tempestades e enrijecida pelo frio"" Essa frase e de que campeao?" ;
		cout << "\n\n1- Anivia";
		cout << "\n2- Amumu" ;
		cout << "\n3- Sejuani" ;
		cout << "\n4- Ashe" ;
		cout << "\nResposta: " ;
		cin >> resposta ;
	}
	
	if ( resposta != 3 ) 
	{
		errou () ; 
		erros = erros + 1 ; 
	}
	
	else 
	{
		acertos = acertos + 1 ; 
	}
	
	limpar_tela () ; //Chamando a funcao limpar tela 
	
	//Questao 7
	cout << "\n(Questao 7) - O item Anel de Doran da +60 de vida ?";
	cout << "\n\n1-Verdadeiro" ;
	cout << "\n2- Falso" ;
	cout << "\nResposta: " ;
	cin >> resposta ;
	
	while ( resposta != 1 && resposta != 2 ) 
	{
		limpar_tela () ;
		cout << "\n(Questao 7) - O item Anel de Doran da +60 de vida ?";
		cout << "\n\n1-Verdadeiro" ;
		cout << "\n2- Falso" ;
		cout << "\nResposta: " ;
		cin >> resposta ;
	}
	
	if ( resposta != 1 ) 
	{
		errou () ; 
		erros = erros + 1 ; 
	}
	
	else 
	{
		acertos = acertos + 1 ; 
	}
	
	limpar_tela () ; //Chamando a funcao limpar tela  
	
	//Questao 8 
	cout << "\n\n(Questao 8) - Quais das botas abaixo e indicado para a campea Cassiopeia" ;
	cout << "\n\n1- Bota da Rapidez" ;
	cout << "\n2- Bota da Velocidade";
	cout << "\n3- Tabi Ninja" ;
	cout << "\n4- Nenhuma, a campea nao precisa de botas" ;
	cout << "\nResposta: " ;
	cin >> resposta ;
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) 
	{
		limpar_tela () ; 
		cout << "\n\n(Questao 7) - Quais das botas abaixo e indicado para a campea Cassiopeia" ;
		cout << "\n\n1- Bota da Rapidez" ;
		cout << "\n2- Bota da Velocidade";
		cout << "\n3- Tabi Ninja" ;
		cout << "\n4- Nenhuma, a campea nao precisa de botas" ;
		cout << "\nResposta: " ;
		cin >> resposta ;
	}
	
	if ( resposta != 4 ) 
	{
		errou () ;
		erros = erros + 1 ; 
	}
	
	else 
	{
		acertos = acertos + 1 ; 
	}
	
	limpar_tela () ;//Chamando a funcao limpar tela 
	
	//Questao 9 
	cout << "\n(Questao 9) - Qual o nome da habilidade (Q) do campeao Blitzcrank?";
	cout << "\n\n1- Turbo" ;
	cout << "\n2- Puxao Bionico" ;
	cout << "\n3- Punho do Poder";
	cout << "\n4- Campo Estatico" ;
	cout << "\nResposta: " ;
	cin >> resposta ; 
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) 
	{
		limpar_tela () ;
		cout << "\n(Questao 8) - Qual o nome da habilidade (Q) do campeao Blitzcrank?";
		cout << "\n\n1- Turbo" ;
		cout << "\n2- Puxao Bionico" ;
		cout << "\n3- Punho do Poder";
		cout << "\n4- Campo Estatico" ;
		cout << "\nResposta: " ;
		cin >> resposta ; 
	}
	
	if ( resposta != 2 ) 
	{
		errou () ;
		erros = erros + 1 ; 
	}
	
	else 
	{
		acertos = acertos + 1 ; 
	}
	
	limpar_tela () ; //Chamando minha funcao para limpar  a tela
	
	//Questao 10
	cout << "\n(Questao 10) - Quais desses dragoes que dao Velocidade de Movimento adicional?";
	cout << "\n\n1- Dragao infernal";
	cout << "\n2- Dragao da Montanha";
	cout << "\n3- Dragao de Vento" ;
	cout << "\n4- Dragao do Oceano";
	cout << "\nResposta: " ;
	cin >> resposta ; 
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) 
	{
		limpar_tela () ; 
		cout << "\n(Questao 10) - Quais desses dragoes que da Velocidade de Movimento adicional?";
		cout << "\n\n1- Dragao infernal";
		cout << "\n2- Dragao da Montanha";
		cout << "\n3- Dragao de Vento" ;
		cout << "\n4- Dragao do Oceano";
		cout << "\nResposta: " ;
		cin >> resposta ; 	
	}
	
	if ( resposta != 3 ) //Se a resposta for diferente da correta entrar na funcao if 
	{
		errou () ; //Chamando minha funcao errou 
		erros = erros + 1 ; //Erros recebe ela mais 1 
	}
	
	else 
	{
		acertos = acertos + 1 ; //Acertos recebe ela mais 1
	}
	
	limpar_tela () ; 
	fim_facil = true ; 
	nivel_conhecimento () ;
	cout << "\n\n" ;  
	system ("pause") ; 
	
	limpar_tela () ; 
	cout << "\nVocê completou o nivel facil, quer ir para o nivel intermediario ?" ;
	cout << "\n1- Sim";
	cout << "\n2- Não" ;
	cout << "\nResposta: " ;
	cin >> resposta ; 
	
	while ( resposta != 1 && resposta != 2 ) 
	{
		limpar_tela () ; 
		cout << "\nVocê completou o nivel facil, quer ir para o nivel intermediario ?" ;
		cout << "\n1- Sim";
		cout << "\n2- Não" ;
		cout << "\nResposta: " ;
		cin >> resposta ; 
	}
	
	if ( resposta == 1 ) 
	{
		limpar_tela () ; 
		cout << "\n!!!Nivel Intermediario!!!" ;
		cout << "\nDigite 1 para comecar ou 2 para sair: " ;
		cin >> resposta ; 
		
		while (resposta != 1 and resposta != 2 ) 
		{
			limpar_tela () ; 
			cout << "\n!!!Nivel Intermediario!!!" ;
			cout << "\nDigite 1 para comecar ou 2 para sair: " ;
			cin >> resposta ; 
		}
		
		if ( resposta == 1 ) 
		{
			nivel_intermediario () ; 	
		}
		
		else 
		{
			exit (2) ; 
		}
	}
	
	else 
	{
		limpar_tela () ; 
		cout << "\nVolte Sempre!" ; 
	}
	
	
}//Fim


nivel_intermediario () 
{
	limpar_tela () ; 
	cout << "\n(Questao 1) - Quantas torres, no total, possui no mapa de Summoner's Rift?" ;
	cout << "\n\n1- 13";
	cout << "\n2- 15" ;
	cout << "\n3- 19" ;
	cout << "\n4- 22" ;
	cout << "\nResposta: " ;
	cin >> resposta ;
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) 
	{
		nivel_intermediario () ; 
	}
	
	if ( resposta != 4 ) 
	{
		errou_inter () ;
		erros = erros + 1 ;
	}
	
	else 
	{
		acertos = acertos + 1 ; 
	}
	
	limpar_tela () ; 
	cout << "\n(Questao 2) - O poder de habilidade ""solo atormentado"", pode ser invocado por qual campeão?";
	cout << "\n\n1- Morgana" ;
	cout << "\n2- Yorick" ;
	cout << "\n3- Vladimir" ;
	cout << "\n4- Anivia" ;
	cout << "\nResposta: " ;
	cin >> resposta ; 
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) 
	{
		limpar_tela () ; 
		cout << "\n(Questao 2) - O poder de habilidade ""solo atormentado"", pode ser invocado por qual campeão?";
		cout << "\n\n1- Morgana" ;
		cout << "\n2- Yorick" ;
		cout << "\n3- Vladimir" ;
		cout << "\n4- Anivia" ;
		cout << "\nResposta: " ;
		cin >> resposta ; 
	}
	
	if ( resposta != 1 ) 
	{
		errou_inter () ;
		erros = erros + 1 ;
	}
	
	else 
	{
		acertos = acertos + 1 ; 
	}
	
	limpar_tela () ;
	cout << "\n(Questao 3) - Qual é o nome da Ultimate do Zac?";
	cout << "\n\n1- Pular Vamos!" ;
	cout << "\n2- Hora do Show!" ;
	cout << "\n3- Vamos Pular!" ;
	cout << "\n4- Salto Mortal!" ;
	cout << "\nResposta: " ;
	cin >> resposta ;
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) 
	{
		limpar_tela () ;
		cout << "\n(Questao 3) - Qual é o nome da Ultimate do Zac?";
		cout << "\n\n1- Pular Vamos!" ;
		cout << "\n2- Hora do Show!" ;
		cout << "\n3- Vamos Pular!" ;
		cout << "\n4- Salto Mortal!" ;
		cout << "\nResposta: " ;
		cin >> resposta ;
	}
	
	if ( resposta != 3 ) 
	{
		errou_inter () ;
		erros = erros + 1 ;
	}
	
	else 
	{
		acertos = acertos + 1 ; 
	}
	
	limpar_tela () ;
	cout << "\n(Questao 4) - No ano de 2015, qual das equipes abaixo foi a campeã do CBLOL?" ;
	cout << "\n\n1- INTZ " ;
	cout << "\n2- PAIN" ;
	cout << "\n3- VTI " ;
	cout << "\n4- RED" ;
	cout << "\nResposta: " ;
	cin >> resposta ; 
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) 
	{
		limpar_tela () ;
		cout << "\n(Questao 4) - No ano de 2015, qual das equipes abaixo foi a campeã do CBLOL?" ;
		cout << "\n\n1- INTZ " ;
		cout << "\n2- PAIN" ;
		cout << "\n3- VTI " ;
		cout << "\n4- RED" ;
		cout << "\nResposta: " ;
		cin >> resposta ; 
	}
	
	if ( resposta != 2) 
	{
		errou_inter () ;
		erros = erros + 1 ;  
	}
	
	else 
	{
		acertos = acertos + 1 ;  
	}
	
	limpar_tela () ;
	cout << "\n(Questao 5) - Quem fez os óculos de Master Yi e o aviao de Corki?" ; 
	cout << "\n\n1- Viktor" ;
	cout << "\n2- Vel'koz" ;
	cout << "\n3- Azir" ;
	cout << "\n4- Heimerdinger" ;
	cout << "\nResposta: " ;
	cin >> resposta ; 
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) 
	{
		limpar_tela () ;
		cout << "\n(Questao 5) - Quem fez os óculos de Master Yi e o aviao de Corki?" ; 
		cout << "\n\n1- Viktor" ;
		cout << "\n2- Vel'koz" ;
		cout << "\n3- Azir" ;
		cout << "\n4- Heimerdinger" ;
		cout << "\nResposta: " ;
		cin >> resposta ; 
	}
		
	if ( resposta != 4 ) 
	{
		errou_inter () ;
		erros = erros + 1 ; 
	}
	
	else 
	{
		acertos = acertos + 1 ; 
	}
	
	limpar_tela () ; 
	cout << "\n(Questao 6) - de acordo com o (E) de Sivir (Escudo de Feitiço), Sivir bloqueará: (A Proxima Habilidade de um inimigo, recuperando vida)" ;
	cout << "\n\n1- Verdadeiro";
	cout << "\n2- Falso" ;
	cout << "\nResposta: " ;
	cin >> resposta ;
	
	while ( resposta != 1 && resposta != 2 ) 
	{
		limpar_tela () ; 
		cout << "\n(Questao 6) - de acordo com o (E) de Sivir (Escudo de Feitiço), Sivir bloqueará: (A Proxima Habilidade de um inimigo, recuperando vida)" ;
		cout << "\n\n1- Verdadeiro";
		cout << "\n2- Falso" ;
		cout << "\nResposta: " ;
		cin >> resposta ;
	}
	
	if ( resposta != 2 ) 
	{
		errou_inter () ;
		erros = erros + 1 ; 
	}
	
	else 
	{
	 	acertos = acertos + 1 ; 
	}
	
	limpar_tela () ; 
	cout << "\n(Questao 7) - Quem é o principal inimigo de Tryndamere?" ;
	cout << "\n\n1- Garen" ;
	cout << "\n2- Viktor" ;
	cout << "\n3- Aatrox" ;
	cout << "\n4- Nocturne" ; 
	cout << "\nResposta: " ; 
	cin >> resposta ; 
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) 
	{
		limpar_tela () ; 
		cout << "\n(Questao 7) - Quem é o principal inimigo de Tryndamere?" ;
		cout << "\n\n1- Garen" ;
		cout << "\n2- Viktor" ;
		cout << "\n3- Aatrox" ;
		cout << "\n4- Nocturne" ; 
		cout << "\nResposta: " ; 
		cin >> resposta ; 
	}
	
	if ( resposta != 3 ) 
	{
		errou_inter () ; 
		erros = erros + 1 ; 
	}
	
	else 
	{
		acertos = acertos + 1 ; 
	}
	
	limpar_tela () ; 
	cout << "\n(Questao 8) - Qual o nome do modo onde o mapa é apenas uma ponte?";
	cout << "\n\n1- Aram" ;
	cout << "\n2- Summoner's Rift" ;
	cout << "\n3- Dominus" ;
	cout << "\n4- Nenhuma das Anteriores" ;
	cout << "\nResposta: " ;
	cin >> resposta ;
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4) 
	{
		limpar_tela () ; 
		cout << "\n(Questao 8) - Qual o nome do modo onde o mapa é apenas uma ponte?";
		cout << "\n\n1- Aram" ;
		cout << "\n2- Summoner's Rift" ;
		cout << "\n3- Dominus" ;
		cout << "\n4- Nenhuma das Anteriores" ;
		cout << "\nResposta: " ;
		cin >> resposta ;
	}
	
	if ( resposta != 1 ) 
	{
		errou_inter () ;
		erros = erros + 1 ;
	}
	
	else 
	{
		acertos = acertos + 1 ; 
	}
	
	limpar_tela () ;
	cout << "\n(Questao 9) - Qual o nome do ultimate de Tahm Kench?" ;
	cout << "\n\n1- Viagem" ;
	cout << "\n2- Viagem Abissal" ;
	cout << "\n3- Viagem Noturna" ;
	cout << "\n4- Viagem Maritima" ;
	cout << "\nResposta: " ;
	cin >> resposta ;
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) 
	{
		limpar_tela () ;
		cout << "\n(Questao 9) - Qual o nome do ultimate de Tahm Kench?" ;
		cout << "\n\n1- Viagem" ;
		cout << "\n2- Viagem Abissal" ;
		cout << "\n3- Viagem Noturna" ;
		cout << "\n4- Viagem Maritima" ;
		cout << "\nResposta: " ;
		cin >> resposta ;
	}
	
	if ( resposta != 2 ) 
	{
		errou_inter () ;
		erros = erros + 1 ; 
	}
	
	else 
	{
		acertos = acertos + 1 ; 
	}
	
	
	limpar_tela () ;
	cout << "\n(Questao 10) - Qual o nome do sistema que define se você joga bem com um campeão ou não?" ;
	cout << "\n\n1- Maestro" ;
	cout << "\n2- Calculator" ;
	cout << "\n3- Maestria" ;
	cout << "\n4- XP" ;
	cout << "\nResposta: " ;
	cin >> resposta ;
	
	while ( resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 ) 
	{
		limpar_tela () ;
		cout << "\n(Questao 10) - Qual o nome do sistema que define se você joga bem com um campeão ou não?" ;
		cout << "\n\n1- Maestro" ;
		cout << "\n2- Calculator" ;
		cout << "\n3- Maestria" ;
		cout << "\n4- XP" ;
		cout << "\nResposta: " ;
		cin >> resposta ;
	}
	
	if ( resposta != 3 ) 
	{
		errou_inter () ;
		erros = erros + 1 ; 
	}
	
	else 
	{
		acertos = acertos + 1 ; 
	}
	
	limpar_tela () ; 
	nivel_conhecimento () ; 
	fim_inter = true ; 
	cout << "\n\n" ;  
	system ("pause") ; 
	
	limpar_tela () ; 
	cout << "\nVocê completou o nivel Intermediario, quer ir para o nivel dificil ?" ;
	cout << "\n1- Sim";
	cout << "\n2- Não" ;
	cout << "\nResposta: " ;
	cin >> resposta ; 
	
	while ( resposta != 1 && resposta != 2 ) 
	{
		limpar_tela () ; 
		cout << "\nVocê completou o nivel Intermediario, quer ir para o nivel dificil ?" ;
		cout << "\n1- Sim";
		cout << "\n2- Não" ;
		cout << "\nResposta: " ;
		cin >> resposta ; 
	}
	
	if ( resposta == 1 ) 
	{
		limpar_tela () ; 
		cout << "\n!!!Nivel Dificil!!!" ;
		cout << "\nDigite 1 para comecar ou 2 para sair: " ;
		cin >> resposta ; 
		
		while (resposta != 1 and resposta != 2 ) 
		{
			limpar_tela () ; 
			cout << "\n!!!Nivel Dificil!!!" ;
			cout << "\nDigite 1 para comecar ou 2 para sair: " ;
			cin >> resposta ; 
		}
		
		if ( resposta == 1 ) 
		{
			nivel_dificil () ; 	
		}
		
		else 
		{
			limpar_tela () ; 
			cout << "\n!!!Jogo Quiz League Of Legends!!!";
			cout << "\nCriador do Jogo Vinicius Molina" ;
			cout << "\nObrigado, Volte Sempre!!!" ; 
			exit (2) ; 
		}
	}
	
	else 
	{
		limpar_tela () ; 
		cout << "\n!!!Jogo Quiz League Of Legends!!!";
		cout << "\nCriador do Jogo Vinicius Molina" ;
		cout << "\nObrigado, Volte Sempre!!!" ; 
		exit (2) ;
	}
}


nivel_dificil ()
{
	int vetor_perguntas [perguntas] ; //Declaracao do meu vetor 
	limpar_tela () ;//Limpar a tela 
	int i = 0 ; //Como vou usar o do while tenho que fazer a declaracao na mao 
	do 
	{
		i = i + 1 ; // I recebe ela mais 1 
		limpar_tela ; 
		cout << "\n(Questao 1)- Qual dos seguintes itens NÃO providencia chance de acerto crítico?";
		cout << "\n1- Dançarina Fantasma";
		cout << "\n2- Hidra Raivosa";
		cout << "\n3- Empalador de Atma" ;
		cout << "\n4- Chamado do Carrasco" ; 
		cout << "\n5- Gume do Infinito" ;
		cout << "\nRespota: " ;
		cin >> vetor_perguntas [i] ; //Guardar a resposta no vetor na posicao i
		
		//Se a resposta for diferente das 5 opcoes ficar no looping 
		while (vetor_perguntas [i] != 1 and vetor_perguntas [i] != 2 and vetor_perguntas [i] !=  3 and vetor_perguntas [i] != 4 and vetor_perguntas [i] != 5 )
		{
			limpar_tela ; 
			cout << "\n(Questao 1)- Qual dos seguintes itens NÃO providencia chance de acerto crítico?";
			cout << "\n1- Dançarina Fantasma";
			cout << "\n2- Hidra Raivosa";
			cout << "\n3- Empalador de Atma" ;
			cout << "\n4- Chamado do Carrasco" ; 
			cout << "\n5- Gume do Infinito" ;
			cout << "\nRespota: " ;
			cin >> vetor_perguntas [i] ;	
		}
		
		if ( vetor_perguntas [i] != 2 ) //Se vetor perguntas na posicao i for diferente de 2 que é a resposta certa entrar na funcao if
		{
			errou_dificil () ; //chamando minha funcao dificil 
			erros = erros + 1 ;  //Erros recebe erros + 1 
		}
		
		else //Se ele acertar entrar nessa funcao 
		{
			acertos = acertos + 1 ; //Acertos recebe acertos + 1 
		}
		
		i = i + 1 ; //Incrementando a variavel auxiliar I 

		limpar_tela () ; //Comando para limpar a tela
		//Questao 2 
		cout << "\n(Questao 2)- ""Crescendo"" é uma magia de qual dos seguintes hérois?";
		cout << "\n1- Sona";
		cout << "\n2- Lulu";
		cout << "\n3- Soraka" ;
		cout << "\n4- Zilean" ;
		cout << "\n5- Nasus" ;
		cout << "\nResposta: " ;
		cin >> vetor_perguntas [i] ; //Guardar no vetor na posicao i (2)
		
		
		//Se a resposta for diferente das 5 opções dadas ficar nesse looping 
		while (vetor_perguntas [i] != 1 and vetor_perguntas [i] != 2 and vetor_perguntas [i] != 3 and vetor_perguntas [i] != 4 and vetor_perguntas [i] != 5) 
		{
			limpar_tela () ; 
			cout << "\n(Questao 2)- ""Crescendo"" é uma magia de qual dos seguintes hérois?";
			cout << "\n1- Sona";
			cout << "\n2- Lulu";
			cout << "\n3- Soraka" ;
			cout << "\n4- Zilean" ;
			cout << "\n5- Nasus" ;
			cout << "\nResposta: " ;
			cin >> vetor_perguntas [i] ;
		}
		
		
		//Se for diferente de 1 que é a resposta certa entrar nessa funcao if 
		if ( vetor_perguntas [i] != 1 ) 
		{
			errou_dificil () ; //Chamando minha funcao errou 
			erros = erros + 1 ; //Erros recebe erros + 1 
		}
		
		else 
		{
			acertos = acertos + 1 ; //Acertos recebe acertos + 1 
		}
		
		i = i + 1 ; //Incrementando o I  
		
		limpar_tela () ; 
		cout << "\n(Questao 3)- Um inibidor tem quanto de vida?";
		cout << "\n1- 3850";
		cout << "\n2- 3999" ;
		cout << "\n3- 4120" ;
		cout << "\n4- 4000" ;
		cout << "\n5- 3560" ;
		cout << "\nResposta: " ;
		cin >> vetor_perguntas [i] ; 
		
		while ( vetor_perguntas [i] != 1 and vetor_perguntas [i] != 2 and vetor_perguntas [i] != 3 and vetor_perguntas [i] != 4 and vetor_perguntas [i] != 5 ) 
		{
			limpar_tela () ; 
			cout << "\n(Questao 3)- Um inibidor tem quanto de vida?";
			cout << "\n1- 3850";
			cout << "\n2- 3999" ;
			cout << "\n3- 4120" ;
			cout << "\n4- 4000" ;
			cout << "\n5- 3560" ;
			cout << "\nResposta: " ;
			cin >> vetor_perguntas [i] ; 
		}
		
		if ( vetor_perguntas [i] != 4 ) 
		{
			errou_dificil () ;
			erros = erros + 1 ; 
		} 
		
		else 
		{
			acertos = acertos + 1 ; 
		}
		
		i = i + 1 ;
		limpar_tela () ;
		cout << "\n(Questao 4)- O que acontece quando você fica próximo a um Fiddlesticks?" ;
		cout << "\n1- Sua resistência mágica é diminuída em 5";
		cout << "\n2- Sua resistência mágica é diminuída em 10";
		cout << "\n3- Sua resistência mágica é diminuída em 15";
		cout << "\n4- Sua resistência mágica é diminuída em 20";
		cout << "\n5- Sua resistência mágica é diminuída em 25";
		cout << "\nResposta: " ; 
		cin >> vetor_perguntas [i] ; 
		
		while (vetor_perguntas [i] != 1 and vetor_perguntas [i] != 2 and vetor_perguntas [i] !=  3 and vetor_perguntas [i] != 4 and vetor_perguntas [i] != 5 )
		{
			limpar_tela () ;
			cout << "\n(Questao 4)- O que acontece quando você fica próximo a um Fiddlesticks?" ;
			cout << "\n1- Sua resistência mágica é diminuída em 5";
			cout << "\n2- Sua resistência mágica é diminuída em 10";
			cout << "\n3- Sua resistência mágica é diminuída em 15";
			cout << "\n4- Sua resistência mágica é diminuída em 20";
			cout << "\n5- Sua resistência mágica é diminuída em 25";
			cout << "\nResposta: " ; 
			cin >> vetor_perguntas [i] ; 	
		}
		
		if ( vetor_perguntas [i] != 2 ) 
		{
			errou_dificil () ;
			erros = erros + 1 ;
		}
		
		else 
		{
			acertos = acertos + 1 ; 
		}		
		
		i = i + 1 ;
		limpar_tela ()  ; 
		cout << "\n(Questao 5)- Qual dos heróis abaixo apresenta uma magia cujo dano é aumentado de acordo com seu HP?" ;
		cout << "\n1- Veigar" ;
		cout << "\n2- Cho'gath" ;
		cout << "\n3- Ahri" ;
		cout << "\n4- Jinx" ;
		cout << "\n5- Volibear" ;
		cout << "\nResposta: " ;
		cin >> vetor_perguntas [i] ; 
		
		while (vetor_perguntas [i] != 1 and vetor_perguntas [i] != 2 and vetor_perguntas [i] !=  3 and vetor_perguntas [i] != 4 and vetor_perguntas [i] != 5 )
		{
			limpar_tela () ; 
			cout << "\n(Questao 5)- Qual dos heróis abaixo apresenta uma magia cujo dano é aumentado de acordo com seu HP?" ;
			cout << "\n1- Veigar" ;
			cout << "\n2- Cho'gath" ;
			cout << "\n3- Ahri" ;
			cout << "\n4- Jinx" ;
			cout << "\n5- Volibear" ;
			cout << "\nResposta: " ;
			cin >> vetor_perguntas [i] ;  	
		}
		
		if ( vetor_perguntas [i] != 5 ) 
		{
			errou_dificil () ;
			erros = erros + 1 ;
		} 
		
		else 
		{
			acertos = acertos + 1 ;
		}
		
		i = i + 1 ;
		limpar_tela () ;
		cout << "\n(Questao 6)- Que campeã tem olhos verdes?";
		cout << "\n1- Sona";
		cout << "\n2- Lulu" ;
		cout << "\n3- Annie";
		cout << "\n4- Karma";
		cout << "\n5- Kalista" ;
		cout << "\nResposta: " ;
		cin >> vetor_perguntas [i] ;
			
		while (vetor_perguntas [i] != 1 and vetor_perguntas [i] != 2 and vetor_perguntas [i] !=  3 and vetor_perguntas [i] != 4 and vetor_perguntas [i] != 5 )
		{
			limpar_tela () ;
			cout << "\n(Questao 6)- Que campeã tem olhos verdes?";
			cout << "\n1- Sona";
			cout << "\n2- Lulu" ;
			cout << "\n3- Annie";
			cout << "\n4- Karma";
			cout << "\n5- Kalista" ;
			cout << "\nResposta: " ;
			cin >> vetor_perguntas [i] ; 	
		}
	
		
		if (vetor_perguntas [i] != 3 ) 
		{
			errou_dificil () ;
			erros = erros + 1 ; 
		}
		
		else 
		{
			acertos = acertos + 1 ; 
		}
		
		i = i + 1 ;
		limpar_tela () ; 
		cout << "\n(Questao 7)- Em que dia foi lançada a Skin ""Annie Panda""?" ;
		cout << "\n1- 05/03/2012 " ;
		cout << "\n2- 02/08/2013 " ;
		cout << "\n3- 01/05/2008" ;
		cout << "\n4- 02/07/2011" ;
		cout << "\n5- 10/08/2012" ;
		cout << "\nResposta: " ; 
		cin >> vetor_perguntas [i] ;
		
		if ( vetor_perguntas [i] != 2 ) 
		{
			errou_dificil () ;
			erros = erros + 1 ; 	
		}
		
		else 
		{
			acertos = acertos + 1 ;
		}
		
		i = i + 1 ;
		limpar_tela () ;
		cout << "\n(Questao 8)- Na animação ""Uma Nova Alvorada"", qual o campeão responsável por matar ""Jax""?";
		cout << "\n1- Darius";
		cout << "\n2- Rengar" ;
		cout << "\n3- Nasus" ;
		cout << "\n4- Katarina";
		cout << "\n5- Nautilus" ;
		cout << "\nResposta: " ;
		cin >> vetor_perguntas [i] ;
		
		while (vetor_perguntas [i] != 1 and vetor_perguntas [i] != 2 and vetor_perguntas [i] !=  3 and vetor_perguntas [i] != 4 and vetor_perguntas [i] != 5 )
		{
			limpar_tela () ;
			cout << "\n(Questao 8)- Na animação ""Uma Nova Alvorada"", qual o campeão responsável por matar ""Jax""?";
			cout << "\n1- Darius";
			cout << "\n2- Rengar" ;
			cout << "\n3- Nasus" ;
			cout << "\n4- Katarina";
			cout << "\n5- Nautilus" ;
			cout << "\nResposta: " ;
			cin >> vetor_perguntas [i] ;
		}
		
		if ( vetor_perguntas [i] != 5 ) 
		{
			errou_dificil () ;
			erros = erros + 1 ; 
		}
		
		else 
		{
			acertos = acertos + 1 ; 
		}
		
		i = i + 1 ; 
		limpar_tela () ; 
		cout << "\n(Questao 9)- Qual é o campeão mais nerfado da história de League of Legends?" ;
		cout << "\n1- Katarina";
		cout << "\n2- Yasuo";
		cout << "\n3- Irelia" ;
		cout << "\n4- Tristana" ;
		cout << "\n5- Galio";
		cout << "\nRespostas:" ;
		cin >> vetor_perguntas [i] ;
		
		while (vetor_perguntas [i] != 1 and vetor_perguntas [i] != 2 and vetor_perguntas [i] !=  3 and vetor_perguntas [i] != 4 and vetor_perguntas [i] != 5 )
		{
			limpar_tela () ; 
			cout << "\n(Questao 9)- Qual é o campeão mais nerfado da história de League of Legends?" ;
			cout << "\n1- Katarina";
			cout << "\n2- Yasuo";
			cout << "\n3- Irelia" ;
			cout << "\n4- Tristana" ;
			cout << "\n5- Galio";
			cout << "\nRespostas:" ;
			cin >> vetor_perguntas [i] ;
		}
		
		if ( vetor_perguntas [i]!= 3 ) 
		{
			errou_dificil () ;
			erros = erros + 1 ; 
		} 
		
		else 
		{
			acertos = acertos + 1 ; 
		}
		 
		
		i = i + 1 ;
		limpar_tela () ;
		cout << "\n(Questao 10)- Qual o campeão tem a fama por ficar na bush?";
		cout << "\n1- Darius";
		cout << "\n2- Garen" ;
		cout << "\n3- Lulu";
		cout << "\n4- Ryze" ;
		cout << "\n5- Teemo";
		cout << "\nResposta: " ;
		cin >> vetor_perguntas [i] ;
		
		while (vetor_perguntas [i] != 1 and vetor_perguntas [i] != 2 and vetor_perguntas [i] !=  3 and vetor_perguntas [i] != 4 and vetor_perguntas [i] != 5 )
		{
			limpar_tela () ;
			cout << "\n(Questao 10)- Qual o campeão tem a fama por ficar na bush?";
			cout << "\n1- Darius";
			cout << "\n2- Garen" ;
			cout << "\n3- Lulu";
			cout << "\n4- Ryze" ;
			cout << "\n5- Teemo";
			cout << "\nResposta: " ;
			cin >> vetor_perguntas [i] ;
		}
		
		if ( vetor_perguntas [i] != 2 ) 
		{
			errou_dificil () ;
			erros = erros + 1 ; 
		}
		
		else 
		{
			acertos = acertos + 1 ; 
		}
		
		break ; 
	} while ( i <= 10 ) ; 

	
	nivel_conhecimento () ; 
	system ("pause") ;
	verificar_fases () ; 

}

int verificar_fases () 
{
	if ( fim_facil == false  and fim_inter == false )  
	{
		limpar_tela () ; 
		cout << "\nVoce quer completar o nivel facil ou intermediario?";
		cout << "\n1- Sim";
		cout << "\n2- Não";
		cout << "\nResposta: " ;
		cin >> resposta ; 
		
		while ( resposta != 1 and resposta != 2 ) 
		{
			limpar_tela () ; 
			cout << "\nVoce quer completar o nivel facil ou intermediario?";
			cout << "\n1- Sim";
			cout << "\n2- Não";
			cout << "\nResposta: " ;
			cin >> resposta ; 	
		}
		
		if ( resposta == 1 ) 
		{
			limpar_tela () ; 
			cout << "\nCompletar Nivel Facil ou Intermediario?";
			cout << "\n1- Facil";
			cout << "\n2- Intermediario" ;
			cout << "\nResposta: " ;
			cin >> resposta ; 
			
			while ( resposta != 1 and resposta != 2 ) 
			{
				limpar_tela () ; 
				cout << "\nCompletar Nivel Facil ou Intermediario?";
				cout << "\n1- Facil";
				cout << "\n2- Intermediario" ;
				cout << "\nResposta: " ;
				cin >> resposta ; 
			}
			
			if ( resposta == 1 ) 
			{
				limpar_tela () ;
				cout << "\n!!!Nivel Facil!!!";
				cout << "\nDigite 1 para começar ou 2 para sair: " ;
				cin >> resposta ; 
				
				while (resposta != 1 and resposta != 2 ) 
				{
					limpar_tela () ;
					cout << "\n!!!Nivel Facil!!!";
					cout << "\nDigite 1 para começar ou 2 para sair: " ;
					cin >> resposta ; 
				}
				
				nivel_facil () ; 
			}
			
			else 
			{
				limpar_tela () ;
				cout << "\n!!!Nivel Intermediario!!!";
				cout << "\nDigite 1 para comecar ou 2 para sair: " ;
				cin >> resposta ; 
				
				while ( resposta != 1 and resposta != 2 ) 
				{
					limpar_tela () ;
					cout << "\n!!!Nivel Intermediario!!!";
					cout << "\nDigite 1 para comecar ou 2 para sair: " ;
					cin >> resposta ; 
				}
				
				if ( resposta == 1 ) 
				{
					nivel_intermediario () ; 
				}
				
				else 
				{
					exit (2) ; 
				}
				
			}
			
		}
		
		else 
		{
			limpar_tela () ; 
			cout << "\n!!!Jogo Quiz League Of Legends!!!";
			cout << "\nCriador do Jogo Vinicius Molina" ;
			cout << "\nObrigado, Volte Sempre!!!" ; 
			exit (2) ; 	
		}
	}
	
	else if ( fim_facil == true and fim_inter == false and fim_dificil == false ) 
	{
		limpar_tela () ; 
		cout << "\nVoce quer completar o nivel intermediario ou o nivel dificil ?";
		cout << "\n1- Sim";
		cout << "\n2- Não";
		cout << "\nResposta: " ;
		cin >> resposta ; 
		
		while ( resposta != 1 and resposta != 2 ) 
		{
			limpar_tela () ; 
			cout << "\nVoce quer completar o nivel intermediario ou o nivel dificil ?";
			cout << "\n1- Sim";
			cout << "\n2- Não";
			cout << "\nResposta: " ;
			cin >> resposta ; 
		}
		
		if ( resposta == 1 ) 
		{
			limpar_tela () ; 
			cout << "\nVocê quer completar nivel Intermediario ou o nivel Dificil?";
			cout << "\n1- Intermediario" ;
			cout << "\n2- Dificil";
			cout << "\nResposta: " ;
			cin >> resposta ;
			
			while ( resposta != 1 and resposta != 2 ) 
			{
				limpar_tela () ; 
				cout << "\nVocê quer completar nivel Intermediario ou o nivel Dificil?";
				cout << "\n1- Intermediario" ;
				cout << "\n2- Dificil";
				cout << "\nResposta: " ;
				cin >> resposta ;	
			}
			
			if ( resposta == 1 ) 
			{
			
				limpar_tela () ; 
				cout << "\n!!!Nivel Intermediario!!!" ;
				cout << "\nDigite 1 para comecar ou 2 para sair: " ;
				cin >> resposta ; 
			
				while ( resposta != 1 and resposta != 2 ) 
				{
					limpar_tela () ; 
					cout << "\n!!!Nivel Intermediario!!!" ;
					cout << "\nDigite 1 para comecar ou 2 para sair: " ;
					cin >> resposta ; 	
				}
			
				if (resposta == 1 ) 
				{
					nivel_intermediario () ; 
				}
			
				else 
				{
					exit (2) ; 
				}
			}
			
			else 
			{
				limpar_tela () ;
				cout << "\n!!!Nivel Dificil!!!" ;
				cout << "\nDigite 1 para comecar ou 2 para sair: " ;
				cin >> resposta ; 
				
				while ( resposta != 1 and resposta != 2 ) 
				{
					limpar_tela () ;
					cout << "\n!!!Nivel Dificil!!!" ;
					cout << "\nDigite 1 para comecar ou 2 para sair: " ;
					cin >> resposta ;
				}
				
				if ( resposta == 1 ) 
				{
					nivel_dificil () ; 
				}
				
				else 
				{
					exit (2) ; 
				}
			}
		}
		
		else 
		{
			limpar_tela () ; 
			cout << "\n!!!Jogo Quiz League Of Legends!!!";
			cout << "\nCriador do Jogo Vinicius Molina" ;
			cout << "\nObrigado, Volte Sempre!!!" ; 
			exit (2) ;
		}
					
 	}
 		
	else if ( fim_facil == false and fim_inter == true  ) 
	{
		limpar_tela () ; 
		cout << "\nVoce quer completar o nivel facil?";
		cout << "\n1- Sim";
		cout << "\n2- Não";
		cout << "\nResposta: " ;
		cin >> resposta ; 
		
		while ( resposta != 1 and resposta != 2 ) 
		{
			limpar_tela () ; 
			cout << "\nVoce quer completar o nivel facil?";
			cout << "\n1- Sim";
			cout << "\n2- Não";
			cout << "\nResposta: " ;
			cin >> resposta ; 
		}
		
		if ( resposta == 1 ) 
		{
			limpar_tela () ;
			cout << "\n!!!Nivel Facil!!!";
			cout << "\nDigite 1 para começar ou 2 para sair: " ;
			cin >> resposta ; 
			
			while ( resposta != 1 and resposta != 2 ) 
			{
				limpar_tela () ;
				cout << "\n!!!Nivel Facil!!!";
				cout << "\nDigite 1 para começar ou 2 para sair: " ;
				cin >> resposta ;	
			}
			
			if ( resposta == 1 ) 
			{
				nivel_facil () ; 
			} 
			
			else 
			{
				exit (2) ;
			}
		}
		
		else 
		{
			limpar_tela () ; 
			cout << "\n!!!Jogo Quiz League Of Legends!!!";
			cout << "\nCriador do Jogo Vinicius Molina" ;
			cout << "\nObrigado, Volte Sempre!!!" ; 
			exit (2) ;
		}	
	}
	
	else if ( fim_facil == true and fim_inter == true ) 
	{
		limpar_tela () ;
		cout << "\n!!!Parabéns Você zerou o Quiz do League Of Legends";
		cout << "\nVocê quer Jogar Novamente?";
		cout << "\n1- Sim";
		cout << "\n2- Não";
		cout << "\nResposta: " ;
		cin >> resposta ; 
		
		while ( resposta != 1 and resposta != 2 ) 
		{
			limpar_tela () ;
			cout << "\n!!!Parabéns Você zerou o Quiz do League Of Legends";
			cout << "\nVocê quer Jogar Novamente?";
			cout << "\n1- Sim";
			cout << "\n2- Não";
			cout << "\nResposta: " ;
			cin >> resposta ; 
		}
		
		if ( resposta == 1 ) 
		{
			limpar_tela () ;
			cout << "\nVocê quer jogar qual Nivel?";
			cout << "\n1- Facil" ;
			cout << "\n2- Intermediario" ;
			cout << "\n3- Dificil" ; 
			cout << "\nResposta: " ;
			cin >> resposta ; 
			
			while ( resposta != 1 and resposta != 2 and resposta != 3 ) 
			{
				limpar_tela () ;
				cout << "\nVocê quer jogar qual Nivel?";
				cout << "\n1- Facil" ;
				cout << "\n2- Intermediario" ;
				cout << "\n3- Dificil" ; 
				cout << "\nResposta: " ;
				cin >> resposta ; 
			}
		
			if ( resposta == 1 ) 
			{
				limpar_tela () ; 
				cout << "\n!!!Nivel Facil!!!" ;
				cout << "\nDigite 1 para começar ou 2 para sair: " ;
				cin >> resposta ; 
				
				while ( resposta != 1 and resposta != 2 ) 
				{
					limpar_tela () ; 
					cout << "\n!!!Nivel Facil!!!" ;
					cout << "\nDigite 1 para começar ou 2 para sair: " ;
					cin >> resposta ; 
				}
				
				if ( resposta == 1 ) 
				{
					nivel_facil () ; 
				}
				
				else 
				{
					exit (2) ;
				}
			}
			
			else if ( resposta == 2 ) 
			{
				limpar_tela () ; 
				cout << "\n!!!Nivel Intermediario!!!" ;
				cout << "\nDigite 1 para começar ou 2 para sair: " ;
				cin >> resposta ;
				
				while ( resposta != 1 and resposta != 2 ) 
				{		
					limpar_tela () ; 
					cout << "\n!!!Nivel Intermediario!!!" ;
					cout << "\nDigite 1 para começar ou 2 para sair: " ;
					cin >> resposta ;
				} 
				
				if ( resposta == 1 ) 
				{
					nivel_intermediario () ; 
				}
				
				
				else 
				{
					limpar_tela () ; 
					cout << "\n!!!Jogo Quiz League Of Legends!!!";
					cout << "\nCriador do Jogo Vinicius Molina" ;
					cout << "\nObrigado, Volte Sempre!!!" ; 
					exit (2) ;
				}	
			}
			
			else 
			{
				limpar_tela () ;
				cout << "\n!!!Nivel Dificil!!!" ;
				cout << "\nDigite 1 para começar ou 2 para sair: " ;
				cin >> resposta ;
				
				while ( resposta != 1 and resposta != 2 ) 
				{
					limpar_tela () ;
					cout << "\n!!!Nivel Dificil!!!" ;
					cout << "\nDigite 1 para começar ou 2 para sair: " ;
					cin >> resposta ;
				}
				
				if ( resposta == 1 ) 
				{
					nivel_dificil () ; 
				}
				
				else 
				{
					limpar_tela () ; 
					cout << "\n!!!Jogo Quiz League Of Legends!!!";
					cout << "\nCriador do Jogo Vinicius Molina" ;
					cout << "\nObrigado, Volte Sempre!!!" ; 
					exit (2) ;
				}	
			}
		}
		
		else 
		{
			limpar_tela () ; 
			cout << "\n!!!Jogo Quiz League Of Legends!!!";
			cout << "\nCriador do Jogo Vinicius Molina" ;
			cout << "\nObrigado, Volte Sempre!!!" ; 
			exit (2) ;  
		}
	}
}





















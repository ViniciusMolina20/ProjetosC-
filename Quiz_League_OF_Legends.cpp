#include <iostream>
#include <locale.h>
//#include <string.h>
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
//Fim declaracoes De Funcoes Globais

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
	cout << "\n\nNivel: " ;
	cin >> nivel ; //Variavel que vou guardar a resposta 
	
	while ( nivel != 1 and nivel != 2 and nivel != 3 ) //Enquanto a resposta dele for diferente das opcoes que estou pedindo ficar no looping 
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
	escolher_nivel () ; //Chamo minha funcao escolher nivel 
	
	switch (nivel) //Switch para cada nivel 
	{
		case 1: nivel_facil () ;  //Caso a resposta for 1 entra na funcao nivel facil 
				break ;
		case 2: nivel_intermediario () ; //Caso a resposta for 2 entrar na funcao nivel intermediario
				break ;
		case 3: //Aqui o nivel dificil
				break ;
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
}//Fim

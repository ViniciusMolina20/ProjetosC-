#include <iostream>

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
//Fim declaracoes De Funcoes Globais

//Funcao para limpar tela 
void limpar_tela () 
{
	system ( " cls " ) ; //Comando para limpar tela
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
	int nivel_facil () ; //Declaracao da minha funcao
	escolher_nivel () ; //Chamo minha funcao escolher nivel 
	
	switch (nivel) //Switch para cada nivel 
	{
		case 1: nivel_facil () ;  //Caso a resposta for 1 entra na funcao nivel facil 
				break ;
		case 2: //Aqui vai o nivel intermediario 
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
		cout << "\n(Questao 9) - Quais desses dragoes que da Velocidade de Movimento adicional?";
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



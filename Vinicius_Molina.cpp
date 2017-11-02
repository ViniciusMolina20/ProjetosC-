#include <iostream>
#define Linha 10 

using namespace std ; 

//Linguagem de Programação
//Vinicius Molina

int main ( int argc, char** argv ) 
{
	int m [ Linha ] ; //Declaração da minha matriz
	
	for ( int i = 0 ; i < Linha ; i++ )  //For para preencher meus valores
	{
		cout << "\nDigite o Valor " << i + 1 << ": " ; //Aqui peço para o usuario digitar os valores
		cin >> m [ i ] ; //Matriz e Posição onde irei guardar o valor
	}
	
	for ( int i = 0 ; i < Linha ; i++ ) //For para mostrar na tela do usuario
	{	
		if ( m [ i ] % 2 == 0 ) //Aqui na condição do if coloco se o resto da divisao por 2 for 0 ele é par
		{
			cout << "\nPosicao " << i + 1 << " - Valor " << m [ i ] ;
		}
	}
	
	for ( int i = 0 ; i < Linha ; i++ ) //Aqui na condicao desse if coloco se o resto da divisao por 2 for diferente de 0 ele é impar
	{
		if ( m [ i ] % 2 != 0 ) 
		{
			cout << "\nPosicao " << i + 1 << " - Valor " << m [ i ] ;
		}
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}

#include <iostream>
#define Tabuada_1 8 
#define Tabuada_2 10

using namespace std ; 
//Linguagem de Programação
//Vinicius Molina && Thiago Antony

int main(int argc, char** argv)
{
		int tab1 [ Tabuada_1] = { 2, 3, 4, 5, 6, 7, 8, 9 } ; //Declaracao da minha matriz 
		int tab2 [ Tabuada_2 ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } ; //Declaracao da minha segunda matriz
		
		for ( int i = 0 ; i < Tabuada_1 ; i++ )  //For para minha primeira matriz (tab1)
		{
			for ( int j = 0 ; j < Tabuada_2 ; j++ ) //For para a segunda matriz (tab2)
			{
				int resultado = tab1 [ i ] * tab2 [ j ] ; //Aqui é onde faço a multiplicacao da tab1 com a tab2 e guardo na variavel RESULTADO
				cout << tab1 [ i ] << " x " << tab2 [ j ] << " = " << resultado ; //Aqui mostro na tela a tabuada
				cout << "\n" ; //Quebra de linha dentro do for 
			}
			cout << "\n" ; //Quebra de Linha dentro do for
		}
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

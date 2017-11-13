#include <iostream>
#define Numero_Provas 3

using namespace std ; 

limpar_tela () 
{
	system ( " cls " ) ;
}
	
//Declaração Matrizes 
float notas_1_bimestre [Numero_Provas] ;
float notas_2_bimestre [Numero_Provas] ;
float media_geral [Numero_Provas] ;
int materia [Numero_Provas] ;

float matematica [Numero_Provas] ; 
float matematica_2_bimestre [Numero_Provas] ; 

float portugues [Numero_Provas] ;
float portugues_2_bimestre [Numero_Provas] ;



float geografia [Numero_Provas] ;
float geografia_2_bimestre [Numero_Provas] ;


float fisica [Numero_Provas] ;
float fisica_2_bimestre [Numero_Provas] ;

float quimica [Numero_Provas] ;
float quimica_2_bimestre [Numero_Provas] ;

//Fim declaracao Matrizes


//Declaracação Funcões
float verificar_notas () ;
float calcular_notas () ; 
int menu () ; 
float verificar_mat () ; 
//Fim declarações das funções

//Declaracão variaveis booleanas
bool verificar ;  
//Fim da declaraçõs booleanas




int main(int argc, char** argv) 
{

 
	menu () ; 
	
	return 0;
}


int menu () 
{
	int menu ;
	limpar_tela () ; 
	cout << "\n1- Cadastrar Notas" ;
 	cout << "\n2- Verificar Notas" ;
 	cout << "\nResposta: " ;
 	cin >> menu ;
 	
 	switch (menu) 
	{
		case 1: limpar_tela () ;
				calcular_notas () ;
				break ;
		
		case 2: limpar_tela () ;
				verificar_notas () ;
				break ;
	}
}


float calcular_notas () 
{
	int menu_calcular ; 


 
	for ( int i = 0 ; i < Numero_Provas ; i++ ) 
	{
		cout << "\nAluno " << i + 1  ;
		
		cout << "\nMateria" ;
		cout << "\n1- Matematica" ;
		cout << "\n2- Portugues" ;
		cout << "\n3- Fisica" ;
		cout << "\n4- Quimica" ;
		cout << "\n5- Geografia";
		cout << "\nMateria: " ;
		cin >> materia [i] ; 
		
		while ( materia [i] != 1 and materia [i] != 2 and materia [i] != 3 and materia [i] != 4 and materia [i] != 5 ) 
		{
			limpar_tela () ;
			cout << "\nAluno " << i + 1 ; 
			cout << "\nMateria" ;
			cout << "\n1- Matematica" ;
			cout << "\n2- Portugues" ;
			cout << "\n3- Fisica" ;
			cout << "\n4- Quimica" ;
			cout << "\n5- Geografia";
			cout << "\nMateria: " ;
			cin >> materia [i] ; 
		}
		
		limpar_tela () ; 
		
		if ( materia [i] == 1 ) 
		{
			cout << "\nNota 1 Bimestre Matematica : " ;
			cin >> notas_1_bimestre [i] ;
			
			matematica [i] = notas_1_bimestre [i] ; 	
			
			cout << "\nNota 2 Bimestre Matematica: " ;
			cin >> notas_2_bimestre [i] ; 
			
			matematica_2_bimestre [i] = notas_2_bimestre [i] ; 
		}
		
		else if ( materia [i] == 2 ) 
		{
			cout << "\nNota 1 Bimestre Portugues : " ;
			cin >> notas_1_bimestre [i] ;	
			
			portugues [i] = notas_1_bimestre [i] ;
			
			cout << "\nNota 2 Bimestre Portugues: " ;
			cin >> notas_2_bimestre [i] ; 
			
			portugues_2_bimestre [i] = notas_2_bimestre [i] ; 
		}
		
		else if ( materia [i] == 3 ) 
		{
			cout << "\nNota 1 Bimestre Fisica: " ;
			cin >> notas_1_bimestre [i] ;
			
			fisica [i] = notas_1_bimestre [i] ; 
			
			cout << "\nNota 2 Bimestre Fisica: " ;
			cin >> notas_2_bimestre [i] ; 
			
			fisica_2_bimestre [i] = notas_2_bimestre [i] ; 
			
		} 
	
		else if ( materia [i] == 4 ) 
		{
			cout << "\nNota 1 Bimestre Quimica: " ;
			cin >> notas_1_bimestre [i] ;
			
			quimica [i] = notas_1_bimestre [i] ; 
			
			cout << "\nNota 2 Bimestre Quimica: " ;
			cin >> notas_2_bimestre [i] ; 
			
			quimica_2_bimestre [i] = notas_2_bimestre [i] ; 
		} 
	
		else if ( materia [i] == 5 ) 
		{
			cout << "\nNota 1 Bimestre Geografia: " ;
			cin >> notas_1_bimestre [i] ;
			
			geografia [i] = notas_1_bimestre [i] ; 
			
			cout << "\nNota 2 Bimestre Geografia: " ;
			cin >> notas_2_bimestre [i] ; 
			
			geografia_2_bimestre [i] = notas_2_bimestre [i] ; 
		} 
		
		media_geral [i] = (notas_1_bimestre [i] + notas_2_bimestre [i]) / 2 ;
		
		limpar_tela () ; 

	}
	
		
	for ( int i = 0 ; i < Numero_Provas ; i++ ) 
	{
		verificar = true ; 
		cout << "\nAluno: " <<  i + 1 ;
		cout << "\nNota 1 Bimestre: " <<  notas_1_bimestre [i] ;
		cout << "\nNota 2 Bimestre: " << notas_2_bimestre [i] ;
		cout << "\nMedia: " << media_geral [i] ;
		
		if ( media_geral [i] < 5 ) 
		{
			cout << "\n" ; 
			cout << "\nAluno " << i + 1 << " Esta de Recuperacao" ;
			cout << "\nE Precisa tirar " << 10 - media_geral [i] << " na recuperacao" ;
		}
		
		else 
		{
			cout << "\nAprovado" ; 
		}
		cout << "\n\n" ;
	}
	
	cout << "\nQuer Voltar para o menu principal? [1-SIM/2-NAO]: " ;
	cin >> menu_calcular ; 
	
	while ( menu_calcular != 1 and menu_calcular != 2  ) 
	{
		limpar_tela () ; 
		cout << "\nQuer Voltar para o menu principal? [1-SIM/2-NAO]: " ;
		cin >> menu_calcular ; 
	}
	
	if ( menu_calcular == 2 ) 
	{
		exit (2) ; 
	}
	
	if ( menu_calcular == 1 ) 
	{
		menu () ; 
	}
	
	
}


float verificar_notas () 
{
	int resposta ;
	int teste ;  
	
	if ( verificar == true ) 
	{
		limpar_tela () ;
		cout << "\nVerificar Qual materia?" ;
		cout << "\n1- Matematica" ;
		cout << "\n2- Portugues" ;
		cout << "\n3- Fisica" ;
		cout << "\n4- Quimica" ;
		cout << "\n5- Geografia";
		cout << "\n6- Todas" ; 
		cout << "\nMateria: " ;
		cin >> teste ; 
		
		for  ( int i = 0 ; i < Numero_Provas ; i++ ) 
		{
	
			materia [i] = teste ; 
			
			limpar_tela () ; 
		
		
			while ( materia [i] != 1 and materia [i] != 2 and materia [i] != 3 and materia [i] != 4 and materia [i] != 5 ) 
			{
				limpar_tela () ;
				cout << "\nVerificar Qual materia?" ; 
				cout << "\n1- Matematica" ;
				cout << "\n2- Portugues" ;
				cout << "\n3- Fisica" ;
				cout << "\n4- Quimica" ;
				cout << "\n5- Geografia";
				cout << "\n6- Todas" ;
				cout << "\nMateria: " ;
				cin >> materia [i] ; 
			}
		
			if ( materia [i]  == 1 ) 
			{
				for ( int i = 0 ; i < Numero_Provas ; i++ ) 
				{
					cout << "\nAluno " << i + 1 ;
					cout << "\nNota do 1 Bimestre: " << matematica [i] ; 
					cout << "\nNota do 2 Bimestre: " << matematica_2_bimestre [i] ; 
				}
			}
			
			else if ( materia [i] == 2 ) 
			{
				for ( int i = 0 ; i < Numero_Provas ; i++ ) 
				{
					cout << "\nAluno " << i + 1 ;
					cout << "\nNota do 1 Bimestre: " << portugues [i] ; 
					cout << "\nNota do 2 Bimestre: " << portugues_2_bimestre [i] ; 	
				}
			}
			
			else if ( materia [i] == 3 ) 
			{
				for ( int i = 0 ; i < Numero_Provas ; i++ ) 
				{
					cout << "\nAluno " << i + 1 ; 
					cout << "\nNota do 1 Bimestre: " << fisica [i] ;
					cout << "\nNota do 2 Bimestre: " << fisica_2_bimestre [i] ; 
				}
			}
			
			else if ( materia [i] == 4 ) 
			{
				for ( int i = 0 ; i < Numero_Provas ; i++ ) 
				{
					cout << "\nAluno " << i + 1 ;
					cout << "\nNota do 1 Bimestre: " << quimica [i] ;
					cout << "\nNota do 2 Bimestre: " << quimica_2_bimestre [i] ;
				}
			}
			
			else if ( materia [i] == 5 ) 
			{
				for ( int i = 0 ; i < Numero_Provas ; i++ ) 
				{
					cout << "\nAluno " << i + 1 ;
					cout << "\nNota do 1 Bimestre: " << geografia [i] ;
					cout << "\nNota do 2 Bimestre: " << geografia_2_bimestre [i] ; 
				}
			} 
			
			else 
			{
				for ( int i = 0 ; i < Numero_Provas ; i++ ) 
				{
					cout << "\nAluno " << i + 1 ;
					cout << "\nNota do 1 Bimestre: " << notas_1_bimestre [i] ;
					cout << "\nNota do 2 Bimestre: " << notas_2_bimestre [i] ;  
				}
			}
	
			cout << "\n\n" ;
			
			
			
			
		}
		cout << "\nQuer Ver outra materia ? [1-Sim/2-Nao]: " ;
		cin >> resposta ; 
		
		while ( resposta != 1 and resposta != 2 ) 
		{
			limpar_tela () ; 
			cout << "\nQuer Ver outra materia ? [1-Sim/2-Nao]: " ;
			cin >> resposta ; 
		}
		
		if ( resposta == 1 ) 
		{
			limpar_tela () ;
			verificar_notas () ; 
		}
		
		else 
		{
			cout << "\nQuer Voltar para o menu principal? [1-Sim/2-Nao]: " ;
			cin >> resposta ; 
			
			while ( resposta != 1 and resposta != 2 ) 
			{
				limpar_tela () ; 
				cout << "\nQuer Voltar para o menu principal? [1-Sim/2-Nao]: " ;
				cin >> resposta ; 
			} 
			
			if ( resposta == 1 ) 
			{
				limpar_tela () ;
				menu () ; 
			}
			
			else 
			{
				exit (2) ;
			}
		}
		
		
		
		
	}
	
	else 
	{
		cout << "\nNao encontramos nenhuma nota cadastrada";
		cout << "\nDeseja cadastrar alguma nota? [1-Sim/2-Nao]: " ;
		cin >> resposta ;
		
		while ( resposta != 1 and resposta != 2 ) 
		{
			limpar_tela () ; 
			cout << "\nNao encontramos nenhuma nota cadastrada";
			cout << "\nDeseja cadastrar alguma nota? [1-Sim/2-Nao]: " ;
			cin >> resposta ;
		}
		
		if ( resposta == 1 ) 
		{
			calcular_notas () ;
		}
		
		else 
		{
			limpar_tela () ; 
			cout << "\nDeseja voltar para o menu principal? [1-Sim/2-Nao]: " ;
			cin >> resposta ;
			
			while ( resposta != 1 and resposta != 2 ) 
			{
				limpar_tela () ; 
				cout << "\nDeseja voltar para o menu principal? [1-Sim/2-Nao]: " ;
				cin >> resposta ;		
			}
			
			if ( resposta == 1 ) 
			{
				limpar_tela () ; 
				menu () ; 
			}
			
			else 
			{
				exit (2) ;	
			}
		
		}
	}
	
	
}


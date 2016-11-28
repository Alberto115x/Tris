#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
bool Inizia,Random;
int Temp,Temp2,Tris[3][3],G,i;
string Nomi[2];
//yest
/*void Automa(){
	srand(time(NULL) );
	rand()%8
	
	
	
}*/


void Nome_Giocatori_random(){
	srand( time(NULL) );
	cout << "Prego inserire il nome del giocatore 1: ";
	cin >> Nomi[0];
	cout << endl << "Prego inserire il nome del giocatore 2: ";
	cin >> Nomi[1];
    if (rand()%2==1){
		G=1;}else
		{G=2;}
		cout << Nomi[G-1] << " Inizia per primo ";
		if (G==1){
			cout << "(O)"<<endl;}else
			{cout<< "(X)"<<endl;}
}

void Inizializza(){
	Inizia = true;
    i=0;
	for(Temp=0;Temp<3;Temp++){
	for(Temp2=0;Temp2<3;Temp2++){
		Tris[Temp][Temp2]=0;
	}
}
}

void Switch(){
	if(G==1){
		G=2;}else
		{G=1;}
	
	
	
}

void Mostra(){
		cout << "x ---->" << endl;

for(Temp=0;Temp<3;Temp++){
	for(Temp2=0;Temp2<3;Temp2++){
		if(Tris[Temp][Temp2] != 0){
			if(Tris[Temp][Temp2] == 1){
		cout << " O" << " |"; 
	}else{
		cout << " X" << " |"; 
		
	}
	}else{
		cout << "  "<< " |"; 
	}
}
	cout<< endl << " ____________" << endl;
	
	
}
cout<<endl;

}

bool Hai_Tris(){
	int O[3],V[3],D1[3],D2[3];
	for(Temp=0;Temp<3;Temp++){
		for(Temp2=0;Temp2<3;Temp2++){
			O[Temp2]=Tris[Temp][Temp2];
			V[Temp2]=Tris[Temp2][Temp];
			D1[Temp2]=Tris[Temp2][Temp2];
			D2[Temp2]=Tris[Temp2][2-Temp2];


	
}

if ((O[0]==O[1] && O[1] == O[2]) && (O[0]!=0)){
return true;}
if ((V[0]==V[1] && V[1] == V[2]) && (V[0]!=0)){
return true;}
if ((D1[0]==D1[1] && D1[1] == D1[2]) && (D1[0]!=0)){
return true;}
if ((D2[0]==D2[1] && D2[1] == D2[2]) && (D2[0]!=0)){
return true;}

}
return false;
}



int Controllo(int i,int c)
{
	if(Tris[i][c]==0){
		return 0;
	}else
	if(Tris[i][c]==1){
		return 1;
	}else if(Tris[i][c]==2)
	{
		return 2;}else
		{return 3;}
	
	
	
	
	
}
void Giocata(bool Giocatore){
	
				cout << Nomi[G-1] << " inserisci le coordinate Y: ";
                cin >> Temp;
        		cout << endl << Nomi[G-1] << " inserisci le coordinate X: ";
        		cin >> Temp2;
        		cout << endl;
        		if (Controllo(Temp-1,Temp2-1)==0){
        		Tris[Temp-1][Temp2-1]=G;
				}else if(Controllo(Temp-1,Temp2-1)!=3)
				{cout << "casella già occupata" << endl;
										return Giocata(G);
									}else
									{
										cout << "mossa non valida" << endl;
										return Giocata(G);
									}
}

							
			



int main(){
cout << "Benvenuto nel tris"<<endl;
char Ricomincia;
do{
Inizializza();
Nome_Giocatori_random();
while (Inizia == true){
	if(i!=8){
	Mostra();
	Giocata(G);
	if(Hai_Tris()==true){
		Mostra();
		cout << endl << Nomi[G-1] <<" ha vinto!" << endl;
		Inizia = false;
	}
		else
		{
			
	Switch();
	}
	i = i+1;
}else
{
	cout << endl << "Pareggio" << endl;
	Inizia=false;
}
}

cout << "Vuoi fare un altra partita? S/n: ";
cin >> Ricomincia;	
}
while(Ricomincia == 's' || Ricomincia == 'S');




}



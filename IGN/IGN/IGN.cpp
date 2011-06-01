
#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include "board.h"
#include <time.h>

using namespace std;

int main()
{
    gameboard b;
	int count =0;
	int attempts =0;
	int min = 29;
	int dir = 0;
	int moves = 0;

	srand(time(NULL));

	
	while(true){

		
		dir = rand()%16;

		if(attempts == 0){

		if(count >= 0){
			b.rightup();
			attempts++;
		}

		if(count >= 1){
			b.ul();
			attempts++;
		}

		if(count >= 2){
			b.rightup();
			attempts++;
		}
		
		if(count >= 3){
			b.leftup2();
			attempts++;
		}

		if(count >= 4){
			b.ld();
			attempts++;
		}

		if(count >= 5){
			b.leftup2();
			attempts++;
		}

		if(count >= 6){
			b.leftdown();
			attempts++;
		}

		if(count >= 7){
			b.dr();
			attempts++;
		}

		if(count >= 8){
			b.leftdown();
			attempts++;
		}

		if(count >= 9){
			b.rightdown2();
			attempts++;
		}

		if(count >= 10){
			b.ru();
			attempts++;
		}

		if(count >= 11){
			b.rightdown2();
			attempts++;
		}

		if(count >= 12){
			b.ul();
			attempts++;
		}

		if(count >= 13){
			b.rightup();
			attempts++;
		}

		if(count >= 14){
			b.ul();
			attempts++;
		}

		if(count >= 15){
			b.ld();
			attempts++;
		}
			
		if(count >= 16){
			b.leftup2();
			attempts++;
		}

		if(count >= 17){
			b.dr();
			attempts++;
		}

		if(count >= 18){
			b.leftdown();
			attempts++;
		}

		if(count >= 19){
			b.rightdown2();
			attempts++;
		}

		if(count >= 20){
			b.ru();
			attempts++;
		}

		if(count >= 21){
			b.ur();
			attempts++;
		}

		if(count >= 22){
			b.leftup2();
			attempts++;
		}

		if(count >= 23){
			b.ld();
			attempts++;
		}

		if(count >= 24){
			b.dr();
			attempts++;
		}

		if(count >= 25){
			b.rightup();
			attempts++;
		}

		if(count >= 26){
			b.leftdown();
			attempts++;
		}
		
		b.moved = false;
	}
		

		if(dir == 1 && b.k[0]>1 && b.k[1] < 7   && b.emp((b.k[0]-2),(b.k[1]+1)) )
			b.rightup();
		
		else if(dir == 8 && b.k[0]>1 && b.k[1] > 0 && b.emp((b.k[0]-2),(b.k[1]+1)) )
			b.ul();
		
		else if(dir == 0 && b.k[0]>1 && b.k[1] > 0 && b.emp((b.k[0]-2),(b.k[1]-1)) )
			b.leftup();

		else if(dir == 9 && b.k[0]>1 && b.k[1] < 7 && b.emp((b.k[0]-2),(b.k[1]-1)) ) 
			b.ur();

		else if(dir == 2 && b.k[0]<6 && b.k[1] > 0   && b.emp((b.k[0]+2),(b.k[1]-1)) )
			b.leftdown();

		else if(dir == 10 && b.k[0]<6 && b.k[1] > 0   && b.emp((b.k[0]+2),(b.k[1]-1)) )
			b.dl();

		else if(dir == 3 && b.k[0]<6 && b.k[1] < 7  && b.emp((b.k[0]+2),(b.k[1]+1)) )
			b.rightdown();

		else if(dir == 11 && b.k[0]<6 && b.k[1] < 7  && b.emp((b.k[0]+2),(b.k[1]+1)) )
			b.dr();

		else if(dir == 4 && b.k[0]>0 && b.k[1] > 1  && b.emp((b.k[0]-1),(b.k[1]-2)) )
			b.leftup2();

		else if(dir == 12 && b.k[0]>0 && b.k[1] > 1  && b.emp((b.k[0]-1),(b.k[1]-2)) )
			b.lu();

		else if(dir == 5 && b.k[0]>0 && b.k[1] < 6   && b.emp((b.k[0]-1),(b.k[1]+2)) )
			b.rightup2();

		else if(dir == 13 && b.k[0]>0 && b.k[1] < 6   && b.emp((b.k[0]-1),(b.k[1]+2)) )
			b.ru();

		else if(dir == 6 && b.k[0]<7 && b.k[1] > 1  && b.emp((b.k[0]+1),(b.k[1]-2)) )
			b.leftdown2();

		else if(dir == 14 && b.k[0]<7 && b.k[1] > 1  && b.emp((b.k[0]+1),(b.k[1]-2)) )
			b.ld();

		else if(dir == 7 && b.k[0]<7 && b.k[1] < 6  && b.emp((b.k[0]+1),(b.k[1]+2)) )
			b.rightdown2(); 

		else if(dir == 15 && b.k[0]<7 && b.k[1] < 6  && b.emp((b.k[0]+1),(b.k[1]+2)) )
			b.rd(); 

			
		if(moves > 100){

		
			if(dir == 0 && b.k[0]>1 && b.k[1] > 0)
				b.leftup();

		else if(dir == 8 && b.k[0]>1 && b.k[1] > 0)
			b.ul();

		else if(dir == 1 && b.k[0]>1 && b.k[1] < 7)
			b.rightup();
		
		else if(dir == 9 && b.k[0]>1 && b.k[1] < 7)
			b.ur();
	
		else if(dir == 2 && b.k[0]<6 && b.k[1] > 0)
			b.leftdown();
		
		else if(dir == 10 && b.k[0]<6 && b.k[1] > 0)
			b.dl();

		else if(dir == 3 && b.k[0]<6 && b.k[1] < 7)
			b.rightdown();

		else if(dir == 11 && b.k[0]<6 && b.k[1] < 7)
			b.dr();

		else if(dir == 4 && b.k[0]>0 && b.k[1] > 1)
			b.leftup2();

		else if(dir == 12 && b.k[0]>0 && b.k[1] > 1)
			b.lu();

		else if(dir == 5 && b.k[0]>0 && b.k[1] < 6)
			b.rightup2();

		else if(dir == 13 && b.k[0]>0 && b.k[1] < 6)
			b.ru();

		else if(dir == 6 && b.k[0]<7 && b.k[1] > 1)
			b.leftdown2();

		else if(dir == 14 && b.k[0]<7 && b.k[1] > 1)
			b.ld();

		else if(dir == 7 && b.k[0]<7 && b.k[1] < 6)
			b.rightdown2();

		else if(dir == 15 && b.k[0]<7 && b.k[1] < 6)
			b.rd();
		}


		moves++;

		if(b.moved){
		
			attempts++;
		
			b.moved = false;
		
			moves = 0;
		
		}
		
				
		if( b.win() ){
			count++;
			system("cls");
			
			b.reset();
			cout<<"Current min: "<<min<<" \ncurrent moves it takes "<<attempts;
			
			

			if(min>attempts){
				min = attempts;
			}
			
			
			srand(time(NULL));
			attempts = 0;

		}


		if (attempts > 50){

			b.reset();
			attempts = 0;
			count++;
		}

		if(count == 28)
			count =0;
		
	
	
	}    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

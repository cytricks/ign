#include "stdafx.h"
#include "board.h"
#include <iostream>

using namespace std;


gameboard::gameboard(){

     k[0] = 7;
     k[1] = 6;
	 moved = false;

     for(int x = 0; x<8 ; x++){
         
         for(int y = 0; y<8; y++){
         
                 board[x][y] = false;
                 
         }    
             
     }
     
     board[k[0]][k[1]] = true;
                                              
                       
}

void gameboard::display(){

     for(int x = 0; x<8 ; x++){
         
         for(int y = 0; y<8; y++){
         
                 cout<<board[x][y]<< "  ";
                 
         }    
             cout<<endl<<endl;
     }     
     
     
     
}

bool gameboard::emp( int z, int x){

	return !(board[z][x]);

}

bool gameboard::win(){
	for(int x = 0; x<8 ; x++){
         
         for(int y = 0; y<8; y++){
         
                 if(!board[x][y])
					 return false;
                 
         }    
             
     }

	return true;

}

void gameboard::reset(){

	k[0] = 7;
     k[1] = 6;

     for(int x = 0; x<8 ; x++){
         
         for(int y = 0; y<8; y++){
         
                 board[x][y] = false;
                 
         }    
             
     }
     
     board[k[0]][k[1]] = true;


}

void gameboard::ur(){

	moved = true;
	 board[k[0]-1][k[1]] = true;    
     board[k[0]-2][k[1]] = true;  
     board[k[0]-2][k[1]+1] = true;
     k[0]= k[0]-2;
     k[1] = k[1] + 1;  

}


void gameboard::ul(){
	moved = true;
	 board[k[0]-1][k[1]] = true;    
     board[k[0]-2][k[1]] = true;  
     board[k[0]-2][k[1]-1] = true;
     k[0]= k[0]-2;
     k[1] = k[1] - 1;  

}

void gameboard::dl(){
	moved = true;
	 board[k[0]+1][k[1]] = true;    
     board[k[0]+2][k[1]] = true;  
     board[k[0]+2][k[1]-1] = true;
     k[0]= k[0]+2;
     k[1] = k[1] - 1;  

}

void gameboard::dr(){
	moved = true;
	 board[k[0]+1][k[1]] = true;    
     board[k[0]+2][k[1]] = true;  
     board[k[0]+2][k[1]+1] = true;
     k[0]= k[0]+2;
     k[1] = k[1] + 1;  

}

void gameboard::leftup(){
 moved = true;
     board[k[0]][k[1]-1] = true;    
     board[k[0]-1][k[1]-1] = true;  
     board[k[0]-2][k[1]-1] = true;
     k[0]= k[0]-2;
     k[1] = k[1] -1;  
     
}

void gameboard::lu(){
	moved = true;
	 board[k[0]][k[1]-1] = true;    
     board[k[0]][k[1]-2] = true;  
     board[k[0]-1][k[1]-2] = true;
     k[0]= k[0]-1;
     k[1] = k[1] -2;  

}

void gameboard::ld(){
	moved = true;
	 board[k[0]][k[1]-1] = true;    
     board[k[0]][k[1]-2] = true;  
     board[k[0]+1][k[1]-2] = true;
     k[0]= k[0]+1;
     k[1] = k[1] -2;  

}

void gameboard::ru(){
	moved = true;
	 board[k[0]][k[1]+1] = true;    
     board[k[0]][k[1]+2] = true;  
     board[k[0]-1][k[1]+2] = true;
     k[0]= k[0]-1;
     k[1] = k[1] + 2;  

}

void gameboard::rd(){
	moved = true;
	 board[k[0]][k[1]+1] = true;    
     board[k[0]][k[1]+2] = true;  
     board[k[0]+1][k[1]+2] = true;
     k[0]= k[0]+1;
     k[1] = k[1] + 2;  

}

void gameboard::leftdown(){
 moved = true;
     board[k[0]][k[1]-1] = true;    
     board[k[0]+1][k[1]-1] = true;  
     board[k[0]+2][k[1]-1] = true;
     k[0]= k[0]+2;
     k[1] = k[1] -1;  
     
}


void gameboard::rightup(){
 moved = true;
     board[k[0]][k[1]+1] = true;    
     board[k[0]-1][k[1]+1] = true;  
     board[k[0]-2][k[1]+1] = true;
     k[0]= k[0]-2;
     k[1] = k[1] +1;  
     
}

void gameboard::rightdown(){
 moved = true;
     board[k[0]][k[1]+1] = true;    
     board[k[0]+1][k[1]+1] = true;  
     board[k[0]+2][k[1]+1] = true;
     k[0]= k[0]+2;
     k[1] = k[1] +1;  
     
}

void gameboard::leftup2(){
 moved = true;
     board[k[0]-1][k[1]] = true;    
     board[k[0]-1][k[1]-1] = true;  
     board[k[0]-1][k[1]-2] = true;
     k[0]= k[0]-1;
     k[1] = k[1] -2;  
     
}

void gameboard::leftdown2(){
 moved = true;
     board[k[0]+1][k[1]] = true;    
     board[k[0]+1][k[1]-1] = true;  
     board[k[0]+1][k[1]-2] = true;
     k[0]= k[0]+1;
     k[1] = k[1] -2;  
     
}

void gameboard::rightup2(){
 moved = true;
     board[k[0]-1][k[1]] = true;    
     board[k[0]-1][k[1]+1] = true;  
     board[k[0]-1][k[1]+2] = true;
     k[0]= k[0]-1;
     k[1] = k[1] +2;  
     
}

void gameboard::rightdown2(){
 moved = true;
     board[k[0]+1][k[1]] = true;    
     board[k[0]+1][k[1]+1] = true;  
     board[k[0]+1][k[1]+2] = true;
     k[0]= k[0]+1;
     k[1] = k[1] +2;  
     
}

#pragma once

class gameboard{
      
      public:
          bool board[8][8]; 
		  bool moved;
          int k[2];
          
           
          gameboard(); 

		  bool win();
		  bool emp(int z, int x);
		  void reset();
          void display();
          void leftup();
          void leftdown();
          void rightup();
          void rightdown();
          
		  void lu();
		  void ld();
		  void ru();
		  void rd();

		  void ur();
		  void ul();
		  void dr();
		  void dl();

          void leftup2();
          void leftdown2();
          void rightup2();
          void rightdown2();
      
      
      
};


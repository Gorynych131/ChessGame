#ifndef DECK_H
#define DECK_H

class deck{
	public:

		/*vars*/
		int *d = new int[64];//arr of deck
		int orientation;//orientation
		

		/*funcs*/
	
		deck();//create deck
		
		

		int getFigure (int line, int col);//get type of figure
		
		
		void update(int *movement);
		void symmetryDeck();//make the deck symmetry 		
		
		void printDeck();//output of deck
		
};
		
		char translateFigure(int a);//num of figure to his char
		int translateAdress(char a);//translate char to int position
		char backtranslateAdress(int a);//translate int to his char position
		
		int pairToint(int x, int y);
		int numToline(int a);
		int numTocol(int a);

#endif

#include <array>
#include <cstddef>
#include <iostream>
#include <SDL3/SDL_iostream.h>

class piece{
  public:
    // white 1 black 0 
    int alliance;
    int pos;
    int value;
    char type_of_piece;
    std::array<int,64> legal_moves;
    void calc_legal_moves(std::array<int,64>legal_moves,char type_of_piece,int pos){
      switch (type_of_piece){
        //king
        case 'k':

        break;
        //pawn
        case 'p':

        break;
        //knight
        case 'n':

        break;
        //queen
        case 'q':

        break;
        //root
        case 'r':

        break;
        //bishop
        case 'b':

        break;
      }
    }
    void selected(){
      // highlights the legal moves
    }
};

class Board_layout{
  public:
  std::array<piece,64> board_occupants;
  std::array<int,64> bthreats;
  std::array<int,64> wthreats;
};

void setup_board(){
  piece knight1={1,58,3,'n'};
  piece knight2={1,63,3,'n'};
  piece knight3={0,2,3,'n'};
  piece knight4={0,7,3,'n'};
  piece rook1={1,57,5,'r'};
  piece rook2={1,64,5,'r'};
  piece rook3={0,1,5,'r'};
  piece rook4={0,8,5,'r'};
  piece bishop1={1,59,3,'b'};
  piece bishop2={1,62,3,'b'};
  piece bishop3={0,3,3,'b'};
  piece bishop4={0,6,3,'b'};
  piece queen1={1,60,9,'q'};
  piece queen2={0,4,9,'q'};
  piece king1={1,61,99,'k'};
  piece king2={0,5,99,'k'};
  piece pawn1={1,9,1,'p'};
  piece pawn2={1,10,1,'p'};
  piece pawn3={1,11,1,'p'};
  piece pawn4={1,12,1,'p'};
  piece pawn5={1,13,1,'p'};
  piece pawn6={1,14,1,'p'};
  piece pawn7={1,15,1,'p'};
  piece pawn8={1,16,1,'p'};
  piece pawn9={0,49,1,'p'};
  piece pawn10={0,50,1,'p'};
  piece pawn11={0,51,1,'p'};
  piece pawn12={0,52,1,'p'};
  piece pawn13={0,53,1,'p'};
  piece pawn14={0,54,1,'p'};
  piece pawn15={0,55,1,'p'};
  piece pawn16={0,56,1,'p'};
}

int main (int argc, char *argv[]) {
  std::cout << "bankai" << std::endl;
  Board_layout board1;
  return 0;
}

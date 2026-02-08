#ifndef PIECE_HPP

#define PIECE_HPP

#include <array>

class piece{
  public:
    int alliance;
    int pos;
    int value;
    char type_of_piece;
    std::array<int,64> legal_moves;
    void calc_legal_moves(std::array<int,64>legal_moves,char type_of_piece,int pos);
    void selected();
};

#endif  


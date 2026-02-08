#ifndef BOARD_HPP

#define BOARD_HPP
#include <array>
#include "Piece.hpp"

class Board_layout{
  public:
  std::array<piece,64> board_occupants;
  std::array<int,64> bthreats;
  std::array<int,64> wthreats;
};

#endif

#pragma once
#include "Piece.h"

#ifndef KNIGHT_H
#define KNIGHT_H

using namespace std;

class Knight : public Piece {
public:
    explicit Knight(Color color) : Piece(color) {}
    [[nodiscard]] string type() const override;
    [[nodiscard]] string symbol() const override;
    [[nodiscard]] bool valid_move(int from_x, int from_y, int to_x, int to_y) const override;
};

#endif
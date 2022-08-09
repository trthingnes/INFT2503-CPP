#pragma once

#include <vector>
#include <memory>
#include <functional>
#include "piece/Piece.h"

#ifndef CHESSBOARD_H
#define CHESSBOARD_H

using namespace std;

class ChessBoard {
public:
    ChessBoard();

    /// Move a chess piece if it is a valid move.
    /// Does not test for check or checkmate.
    bool move_piece(const string &from, const string &to);

    /// 8x8 squares occupied by 1 or 0 chess pieces
    vector<vector<unique_ptr<Piece>>> squares;

    /// Function executed after a piece is moved.
    function<void()> after_piece_move;
};

#endif
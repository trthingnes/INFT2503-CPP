#pragma once

#ifndef CHESSBOARDPRINT_H
#define CHESSBOARDPRINT_H

#include <iostream>
#include "ChessBoard.h"

using namespace std;

class ChessBoardPrint {
public:
    ChessBoardPrint(ChessBoard board_) : board(board_) {
        board.after_piece_move = [this]() {
            for (const auto &row: board.squares) {
                for (const auto &element: row) {
                    if (element) {
                        cout << element.get()->symbol();
                    } else {
                        cout << "■";
                    }
                    cout << "  ";
                }
                cout << endl;
            }
            cout << endl;
        };
    };
private:
    ChessBoard board;
};

#endif

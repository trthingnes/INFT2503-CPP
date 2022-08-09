#include <string>
#include <iostream>
#include "ChessBoard.h"
#include "piece/King.h"

using namespace std;

ChessBoard::ChessBoard() {
    // Initialize the squares stored in 8 columns and 8 rows:
    squares.resize(8);
    for (auto &square_column: squares)
        square_column.resize(8);
}

bool ChessBoard::move_piece(const string &from, const string &to) {
    int from_x = from[0] - 'a';
    int from_y = stoi(string() + from[1]) - 1;
    int to_x = to[0] - 'a';
    int to_y = stoi(string() + to[1]) - 1;

    auto &piece_from = squares[from_x][from_y];
    if (piece_from) {
        if (piece_from->valid_move(from_x, from_y, to_x, to_y)) {
            cout << piece_from->type() << " is moving from " << from << " to " << to << endl;
            auto &piece_to = squares[to_x][to_y];
            if (piece_to) {
                if (piece_from->color != piece_to->color) {
                    cout << piece_to->type() << " is being removed from " << to << endl;
                    if (auto king = dynamic_cast<King *>(piece_to.get()))
                        cout << king->color_string() << " lost the game" << endl;
                } else {
                    // piece in the from square has the same color as the piece in the to square
                    cout << "can not move " << piece_from->type() << " from " << from << " to " << to << endl;
                    return false;
                }
            }
            piece_to = move(piece_from);

            after_piece_move();

            return true;
        } else {
            cout << "can not move " << piece_from->type() << " from " << from << " to " << to << endl;
            return false;
        }
    } else {
        cout << "no piece at " << from << endl;
        return false;
    }
}


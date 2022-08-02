#include <iostream>
#include "ChessBoard.h"
#include "ChessBoardPrint.h"
#include "piece/King.h"
#include "piece/Knight.h"

using namespace std;

int main() {
    ChessBoard board;
    ChessBoardPrint print(board);

    board.squares[4][0] = make_unique<King>(Piece::Color::WHITE);
    board.squares[1][0] = make_unique<Knight>(Piece::Color::WHITE);
    board.squares[6][0] = make_unique<Knight>(Piece::Color::WHITE);

    board.squares[4][7] = make_unique<King>(Piece::Color::BLACK);
    board.squares[1][7] = make_unique<Knight>(Piece::Color::BLACK);
    board.squares[6][7] = make_unique<Knight>(Piece::Color::BLACK);

    cout << "Invalid moves:" << endl;
    board.move_piece("e3", "e2");
    board.move_piece("e1", "e3");
    board.move_piece("b1", "b2");
    cout << endl;

    cout << "A simulated game:" << endl;
    board.move_piece("e1", "e2");
    board.move_piece("g8", "h6");
    board.move_piece("b1", "c3");
    board.move_piece("h6", "g8");
    board.move_piece("c3", "d5");
    board.move_piece("g8", "h6");
    board.move_piece("d5", "f6");
    board.move_piece("h6", "g8");
    board.move_piece("f6", "e8");
}
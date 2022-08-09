#include "Piece.h"

using namespace std;

string Piece::color_string() const {
    switch (color) {
        case Color::WHITE: {
            return "white";
        }
        case Color::BLACK: {
            return "black";
        }
        default: {
            return "unknown color";
        }
    }
}

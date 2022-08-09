#include "King.h"

using namespace std;

string King::type() const {
    return color_string() + " king";
}

string King::symbol() const {
    switch (color) {
        case Color::WHITE: {
            return "♔";
        }
        case Color::BLACK: {
            return "♚";
        }
        default: {
            return "?";
        }
    }
}

bool King::valid_move(int from_x, int from_y, int to_x, int to_y) const {
    int diff_x = abs(to_x - from_x), diff_y = abs(to_y - from_y);

    return diff_x <= 1 && diff_y <= 1 && (diff_x == 1 || diff_y == 1);
}

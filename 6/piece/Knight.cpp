#include "Knight.h"

using namespace std;

string Knight::type() const {
    return color_string() + " knight";
}

string Knight::symbol() const {
    switch (color) {
        case Color::WHITE: {
            return "♘";
        }
        case Color::BLACK: {
            return "♞";
        }
        default: {
            return "?";
        }
    }
}

bool Knight::valid_move(int from_x, int from_y, int to_x, int to_y) const {
    int diff_x = abs(to_x - from_x), diff_y = abs(to_y - from_y);

    return (diff_x == 2 && diff_y == 1) || (diff_x == 1 || diff_y == 2);
}

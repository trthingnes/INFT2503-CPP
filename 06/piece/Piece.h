#pragma once
#include <string>

#ifndef PIECE_H
#define PIECE_H

using namespace std;

class Piece {
public:
    enum class Color {
        WHITE,
        BLACK
    };

    explicit Piece(Color color) : color(color) {}
    virtual ~Piece() = default;

    Color color;

    [[nodiscard]] string color_string() const;

    /// Return a string describing color and type of piece.
    [[nodiscard]] virtual string type() const = 0;

    /// Return a string symbol for the piece that can be used in graphical display.
    [[nodiscard]] virtual string symbol() const = 0;

    /// Returns true if the given move is valid.
    [[nodiscard]] virtual bool valid_move(int from_x, int from_y, int to_x, int to_y) const = 0;
};

#endif
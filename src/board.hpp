//  Board class declarations

#ifndef BOARD_HPP
#define BOARD_HPP

class Board {
public:
    static const int HEIGHT = 600;
    static const int WIDTH  = 300;
    static const int ROWS = 30;
    static const int COLS = 15;
    static const int BLOCK_HEIGHT = HEIGHT / ROWS; 
    static const int BLOCK_WIDTH = WIDTH / COLS;
    static const int BONUS = 3;

public:
    Board();
    void increase_score_by(int delta) {score += delta;}
    int get_score() {return score;}
    void delete_full_rows();
    bool add(Tetromino *tetro);

private:
    bool full_row(int row);
    void shift_down(int row);

private:
    int score;

public:
    int color[ROWS][COLS];
    bool render_score;
};

#endif


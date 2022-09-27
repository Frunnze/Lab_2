#include <iostream>
using std::string;


class board
{
private:
    string squares[9][9] = {"  ", "1 ", "2 ", "3 ", "4 ", "5 ", "6 ", "7 ", "8 ",\
                            "1 ", "R ", "Kn", "B ", "Q ", "K ", "B ", "Kn", "R ",\
                            "2 ", "P ", "P ", "P ", "P ", "P ", "P ", "P ", "P ",\
                            "3 ", "E ", "E ", "E ", "E ", "E ", "E ", "E ", "E ",\
                            "4 ", "E ", "E ", "E ", "E ", "E ", "E ", "E ", "E ",\
                            "5 ", "E ", "E ", "E ", "E ", "E ", "E ", "E ", "E ",\
                            "6 ", "E ", "E ", "E ", "E ", "E ", "E ", "E ", "E ",\
                            "7 ", "P ", "P ", "P ", "P ", "P ", "P ", "P ", "P ",\
                            "8 ", "R ", "Kn", "B ", "Q ", "K ", "B ", "Kn", "R "};
    string square_color;

public:
    void print_board()
    {
        for (int i = 0; i <= 8; i++)
        {
            for (int j = 0; j <= 8; j++)
            {
                std::cout << squares[i][j] << "  " << std::flush;
            }
            std::cout << "\n" << std::endl;
        }
        std::cout << "\n" << std::endl;
    }

   void empty_square(int empty_x, int empty_y)
    {
        squares[empty_y][empty_x] = "E ";
    }

    void fill_square(int fill_x, int fill_y, string name)
    {
        squares[fill_y][fill_x] = name;
    }
};

class piece
{
private:
    char name;
    string color;
    int value;  

public:
    void set_color(string piece_color)
    {
        color = piece_color;
    }

    string get_color()
    {
        return color;
    }

    void set_value(int piece_value)
    {
        value = piece_value;
    }

    int get_value()
    {
        return value;
    }
};

board b;
class pawn
{
public:
  void move(int prev_x, int prev_y, int next_x, int next_y)
  {
    b.empty_square(prev_x, prev_y);
    b.fill_square(next_x, next_y, "P ");
    b.print_board();
  }
};

class rook
{
public:
  void move(int prev_x, int prev_y, int next_x, int next_y)
  {
    b.empty_square(prev_x, prev_y);
    b.fill_square(next_x, next_y, "R ");
    b.print_board();
  }
};

class knight
{
public:
  void move(int prev_x, int prev_y, int next_x, int next_y)
  {
    b.empty_square(prev_x, prev_y);
    b.fill_square(next_x, next_y, "Kn");
    b.print_board();
  }
};

class bishop
{
public:
  void move(int prev_x, int prev_y, int next_x, int next_y)
  {
    b.empty_square(prev_x, prev_y);
    b.fill_square(next_x, next_y, "B ");
    b.print_board();
  }
};

class queen
{
public:
  void move(int prev_x, int prev_y, int next_x, int next_y)
  {
    b.empty_square(prev_x, prev_y);
    b.fill_square(next_x, next_y, "Q ");
    b.print_board();
  }
};

class king
{
public:
  void move(int prev_x, int prev_y, int next_x, int next_y)
  {
    b.empty_square(prev_x, prev_y);
    b.fill_square(next_x, next_y, "K ");
    b.print_board();
  }
};

int main()
{   
    pawn pawn_1;
    pawn_1.move(5, 7, 5, 5);

    pawn pawn_2;
    pawn_2.move(4, 7, 4, 5);

    knight knight_1;
    knight_1.move(7, 8, 6, 6);
    
    return 0;
}
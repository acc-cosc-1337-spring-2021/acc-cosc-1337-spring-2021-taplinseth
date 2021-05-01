//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>> &games)
{
    std::ofstream file;
    file.open(file_name);
    if (file.is_open())
    {
        for (auto &game : games) {
            for (auto &peg : game->get_pegs()) {
                file << peg;
            }
            file<<game->get_winner();
            file<<"\n";
        }
    }
    file.close();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    std::vector<std::unique_ptr<TicTacToe>> boards;
    std::ifstream file;
    file.open(file_name);
    if (file.is_open())
    {
        std::string line;
        while (std::getline(file,line)) {
            std::vector<std::string> pegs;
            for (int i = 0; i < (line.size() - 1); ++i){
                string ch(1, line[i]);
                pegs.push_back(ch);
            }
            string winner{line[line.size() -1]};
            std::unique_ptr<TicTacToe> board;

            if(pegs.size() == 9) {
                board = std::make_unique<TicTacToe3>(pegs, winner);
            } else if (pegs.size() == 16) {
                board = std::make_unique<TicTacToe4>(pegs, winner);
            }
            boards.push_back(std::move(board));
        }
        file.close();
    }
    return boards;
}
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main()
{
    string name;
    cout << "Please enter your first name.\n";
    cin >> name;
    cout << "Hello, " << name << ". Welcome to the game.\n";
    const int max_seq = 6;
    string seq_names[max_seq] = {
        "Fibonacci",
        "Lucas",
        "Pell",
        "Triangular",
        "Square",
        "Pentagonal"
    };
    vector<int> fibonacci = {1, 1, 2, 3, 5, 8, 13, 21};
    vector<int> lucas = {1, 3, 4, 7, 11, 18, 29, 47};
    vector<int> pell = {1, 2, 5, 12, 29, 70, 169, 408};
    vector<int> triangular = {1, 3, 6, 10, 15, 21, 28, 36};
    vector<int> square = {1, 4, 9, 16, 25, 36, 49, 64};
    vector<int> pentagonal = {1, 5, 12, 22, 35, 51, 70, 92};
    vector<int> *seq_addrs[max_seq] = {
        &fibonacci, &lucas, &pell, &triangular, &square, &pentagonal
    };
    string comforts[4] = {
        "Oops! Nice guess but not quite it.\n",
        "Hmm. Sorry. Wrong a second time.\n",
        "Ah, this is hard than it looks, isn't it?\n",
        "It must be getting pretty frustrating by now!\n"
    };

    int usr_guess, num_cor = 0, num_guess = 0;
    bool next_seq = true, got_it = false, go_for_it = true;
    srand(max_seq);
    while(next_seq){
        cout << "Please guess the next number of the following sequence.\n" ;
        int seq_index = rand() % max_seq;
        int curr_guessNum = 0;
        while(!got_it && go_for_it){
            cout << seq_names[seq_index] << ": " << seq_addrs[seq_index]->at(0) << ' ' << seq_addrs[seq_index]->at(1) << ' ';
            cin >> usr_guess;
            num_guess++;
            curr_guessNum++;
            if(usr_guess == seq_addrs[seq_index]->at(2)){
                got_it = true;
                num_cor++;
                cout << "Very good. Yes, " << usr_guess << " is the next number in the " << seq_names[seq_index] << " sequence.\n";
            }
            else{
                cout << comforts[(curr_guessNum-1) % comforts->size()] << "Want to try again?(Y/N)";
                char try_again;
                cin >> try_again;
                if(try_again == 'N' || try_again == 'n'){
                    go_for_it = false;
                }
            } 
        }
        cout << "Want to try another sequence?(Y/N)";
        char try_another;
        cin >> try_another;
        if(try_another == 'N' || try_another == 'n'){
            next_seq = false;
        }
        else{
            got_it = false;
            go_for_it = true;
        }
    }
    cout << "Your score: \n" << "Guess count = " << num_guess << ", Correct count = " << num_cor
         << ", Correct Ratio = " << ((num_guess != 0) ? (num_cor * 1.0 / num_guess) : 0) * 100 << "%\n";
    return 0;
}
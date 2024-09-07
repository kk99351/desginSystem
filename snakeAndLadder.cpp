// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Position{
    int x;
    int y;
    constructor(x, y){
        this.x = x;
        this.y = y;
    }
}

class Board{
    int width;
    int height;
    vector<Position> snake;
    vector<Position> ladder;
    Position goalState;
    Position initialState = new Position(0,0);
    constructor(snake, ladder, height, width){
        this.snake = snake;
        this.ladder = ladder;
        this.height = height;
        this.width = width;
    }
    setGoalState(){
        this.goalState = new Position(0,this.height);
    }
    int throwDice(){
        int num = rand()%6 + 1;
        return num;
    }
}

class Game{
    Bord board;
    vector<Position> snake;
    vector<Position> ladder;
    Position player;
    
    constructor(){
        addSnake();
        addLadder();
        this.board = new Board(this.snake, this.ladder, 100, 100);
        player = this.board.initialState;
    }
    
    addSnake(){
        vector<vector<int>> arr = {{}};
        for(let i=0; i<arr.size(); i++){
            this.snake.push_back(new Position(arr[i][0],arr[i][1]));
        }
    }
    
    addLadder(){
        vector<vector<int>> arr = {{}};
        for(let i=0; i<arr.size(); i++){
            this.ladder.push_back(new Position(arr[i][0],arr[i][1]));
        }
    }
    
    // addPlayer(int n){
        
    // }
}
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";

    return 0;
}

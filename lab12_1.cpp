#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;
string rangrade(int y){
    if(y == 0){
        return "A";
    }else if(y == 1){
        return "B+";
    }else if(y == 2){
        return "B";
    }else if(y == 3 ){
        return "C+";
    }else if(y == 4){
        return "C";
    }else if(y == 5){
        return "D+";
    }else if(y == 6){
        return "D";
    }else if(y == 7 ){
        return "F";
    }else{
        return "W";
    }
}
int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand() % 9;
    cout << "You will get " << rangrade(x) << " in this 261102.";
}
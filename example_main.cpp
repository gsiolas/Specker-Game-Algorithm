#include <iostream>
#include <stdexcept>

using namespace std;

int main() { 
  Game Specker(3, 4); //3 heaps, 2 players
  Specker.addHeap(100); //heap0 -> 10 coins
  Specker.addHeap(230);
  Specker.addHeap(2210);
  Specker.addHeap(20); //heap3->2 coins
  Specker.addPlayer(new GreedyPlayer("Jason"));
  Specker.addPlayer(new SpartanPlayer("Nick"));
  Specker.addPlayer(new SneakyPlayer("Gus"));
  Specker.addPlayer(new RighteousPlayer("Alan"));
  Specker.play(cout);
return 0;
}

# Specker-Game-Algorithm
This repository is an implementation in C++ of a generalization of Specker Game Algorithm

The conditions of the game are initialized in main.cpp, where the number of starting heaps, their initial coins are defined, as well as the number of the players,their name and their strategy.
There have been implemented 4 kind of player strategies:

<u>Greedy:</u> A Greedy player chooses the heap with the most coins (chooses the lower Heap ID in case of equality), removes all coins from the heap and puts nothing back to other heaps.
<u>Spartan:</u> A Spartan player chooses the heap with the most coins (chooses the lower Heap ID in case of equality) and removes one coin from it.
<u>Sneaky:</u> A Sneaky player chooses the heap with the least amount of coins (chooses the lower Heap ID in case of equality), removes all coins from the heap and puts nothing back to other heaps.
<u>Righteous:</u> A Righteous player chooses the heap with the most coins (chooses the lower Heap ID in case of equality), removes half of it ( heap_coins/2 ) and puts (heap_coins/2 - 1) to the heap with the least amount of coins.

The player to win is the last one who was able to play.

<i>Written as an excersice for academic assignment</i>

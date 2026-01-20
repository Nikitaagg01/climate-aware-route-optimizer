# Climate-Aware Route Optimizer 🌍

A graph-based route optimization system that finds the best path
between locations by considering distance, traffic, and pollution.

## Problem Statement
Shortest path is not always the best path. This project modifies
Dijkstra’s Algorithm to include environmental factors.

## Tech Stack
- C++
- Graphs
- Priority Queue
- Dijkstra’s Algorithm

## Algorithm
Total Cost = Distance + α(Traffic) + β(Pollution)

## Features
- Multi-weighted graph
- Climate-aware routing
- Path reconstruction
- Optimized using priority queue

## Time Complexity
O(E log V)

## Sample Input
4 4
0 1 5 3 4
1 2 2 8 6
0 2 9 2 3
2 3 4 5 7
0 3

## Output
Best Climate-Aware Path: 0 → 2 → 3

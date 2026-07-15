# 🗺️ Climate-Aware Route Optimizer

A graph-based route optimization system that calculates the most efficient path between locations by factoring in **distance, traffic, and pollution levels** — not just shortest distance.

## ✨ Features

- Graph-based pathfinding considering multiple weighted factors:
  - Distance
  - Real-time/simulated traffic conditions
  - Pollution/environmental impact
- Optimized algorithm for efficient route computation
- Designed to encourage environmentally conscious route choices

## 🛠️ Tech Stack

- **C++** – core algorithm and graph logic
- Graph algorithms (Dijkstra's / A* or similar, based on implementation)

## 🚀 How to Run

1. Clone the repository
   ```bash
   git clone https://github.com/Nikitaagg01/climate-aware-route-optimizer.git
   cd climate-aware-route-optimizer
   ```
2. Compile the C++ code
   ```bash
   g++ main.cpp -o route_optimizer
   ./route_optimizer
   ```
   *(Update file names/commands based on your actual project structure)*

## 📊 How It Works

The optimizer models locations and roads as a weighted graph, where edge weights combine distance, traffic congestion, and pollution data. It then applies a shortest-path algorithm to find the route that balances travel efficiency with environmental impact.

## 📌 Future Improvements

- Integrate real-time traffic and air quality APIs
- Add a visualization/map interface
- Build a web-based frontend for user input

## 👩‍💻 Author

**Nikita Aggarwal**
[LinkedIn](https://linkedin.com/in/nikita-aggarwal-79369030a) | nikitaagg2003@gmail.com

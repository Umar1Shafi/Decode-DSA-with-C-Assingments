#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int, double>>> graph(n);
        
        // Build graph from edges and probabilities
        for (int i = 0; i < edges.size(); ++i) {
            int u = edges[i][0], v = edges[i][1];
            double prob = succProb[i];
            graph[u].push_back({v, prob});
            graph[v].push_back({u, prob});
        }
        
        vector<double> probs(n, 0);
        probs[start] = 1.0; // Probability of reaching start node is 1
        priority_queue<pair<double, int>> pq; // Max-heap based on probability
        
        // Push start node with probability 1 into the priority queue
        pq.push({1.0, start});
        
        while (!pq.empty()) {
            auto [prob, node] = pq.top();
            pq.pop();
            
            if (node == end) return prob; // If reached the end node, return the probability
            
            for (auto [adj, edgeProb] : graph[node]) {
                double newProb = prob * edgeProb;
                if (newProb > probs[adj]) { // If new probability is greater than previous probability
                    probs[adj] = newProb;
                    pq.push({newProb, adj}); // Push the adjacent node with the new probability
                }
            }
        }
        
        return 0.0; // No path found from start to end
    }
};

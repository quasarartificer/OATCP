## Algorithm
- Data structure used:
The graph is represented using an adjacency matrix gg, where ```gg[u][v]``` stores the capacity of the edge from node u to node v.
The residual graph rG is also represented as an adjacency matrix, initialized as a copy of the original graph.
- Breadth-First Search (BFS):
The BFS function (bfs) is used to find an augmenting path from the source ```s``` to the destination ```t``` in the residual graph rG.
It marks visited nodes and stores the parent of each node in the augmenting path.
- Flow Augmentation:
Once an augmenting path is found, the algorithm determines the maximum flow ```pf``` that can be sent along this path.
It updates the residual capacities of edges along the augmenting path by subtracting the flow ```pf``` from forward edges and adding it to backward edges.
The flow ```pf``` added to the maximum flow (maxi) of the graph.
- Main Function:
The main function reads the input, constructs the graph, and calls the flow_check function to find the maximum flow.
It then prints the maximum flow.
- Termination:
The algorithm terminates when there are no more augmenting paths from ```s``` to ```t```, meaning no more flow can be sent.
# Analysis and Design of Algorithm


## Bubble Sort
Bubble sort is a sorting algorithm that repeatedly steps through the list to be sorted, compares each pair of adjacent items, and swaps them if they are in the wrong order.

It can be useful for sorting small datasets or in scenarios where simplicity of implementation is more important than speed.

Steps:

1.Go through the array, one value at a time, starting from the first element.

2.For each value, compare it with the value next to it in the array.

3.If the current value is greater than the next one, swap them so that the higher value moves toward the end.

4.Continue this process until you reach the end of the array.

5.Repeat the entire process for as many times as there are elements in the array.

6.After each full pass, the largest unsorted value will have moved to its correct position at the end.

7.If in any pass, no values are swapped, stop the process early as the array is already sorted.

8.At the end of all passes, the array will be sorted in ascending order.

Time Complexity:
Best Case: O(n) - This occurs when the list is already sorted.

Average Case: O(n^2) - On average, bubble sort will make n^2/2 comparisons

Worst Case: O(n^2) - This happens when the list is sorted in reverse order

<img src="https://github.com/user-attachments/assets/7806bc58-14cb-4b6f-84c3-77b68abc88c6" width="400">

## Selection Sort
Selection Sort is a simple comparison-based sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and swapping it with the first element of the unsorted portion.

Can be used in cases where the number of swaps should be minimized (compared to Bubble Sort, which swaps more frequently).

Steps:

1.Start with the first element of the array and assume it is the smallest.
 
2.Compare this element with all the other elements in the unsorted part of the array.

3.If you find a smaller element, update the position of the minimum element.

4.After checking all elements, swap the smallest found element with the first element.

5.Move to the next position and repeat the same process for the remaining unsorted part of the array.

6.Continue this until the entire array is sorted in ascending order.

Its best case, average case and worst case time complexity is O(n^2) as even if the array is already sorted, selection sort still scans and selects the minimum in each pass.

<img src="https://github.com/user-attachments/assets/5dcd1341-7a1f-4c2d-bf6c-44d180c5425a" width="400">

## Merge Sort
Merge Sort is a divide and conquer sorting algorithm that works by dividing an array into smaller subarrays, sorting them, and then merging them back together. 

Preferred when stable sorting (preserving the order of equal elements) is required. Used in sorting large datasets due to its efficient O(n log n) time complexity.

Steps:

1.Divide the array into two halves from the middle.

2.Recursively divide each half into smaller halves until each sub-array has only one element.

3.Once you reach single-element arrays, start merging them back together.

4.While merging, compare elements from the two halves and place the smaller one into the new array.

5.Continue merging all sub-arrays in sorted order until the entire array is combined.

6.After all merges are done, the array will be fully sorted in ascending order.

Its best case, average case and worst case time complexity is O(n*logn) as even if the array is already sorted, Merge Sort still divides and merges the elements.

<img src="https://github.com/user-attachments/assets/5376c2eb-b888-4285-9a49-3b2f287e60e1" width="400">

## Quick Sort
Quick Sort is a divide and conquer sorting algorithm that works by selecting a "pivot" element, partitioning the array into two subarrays based on the pivot, and then recursively sorting the subarrays.

Commonly used in in-place sorting due to its O(1) space complexity.

Steps:

1.Choose a pivot element from the array (usually the first, last, or middle element).

2.Rearrange the elements in the array so that all elements smaller than the pivot go to the left of it, and all greater elements go to the right — this is called partitioning.

3.Place the pivot in its correct sorted position (between the two partitions).

4.Now, take the left sub-array (elements less than the pivot) and apply the same steps recursively.

5.Do the same for the right sub-array (elements greater than the pivot).

6.Continue this process until all sub-arrays have only one element — at that point, the entire array will be sorted.

Best Case: O(n log n), Average Case: O(n log n), Worst Case: O(n²)

<img src="https://github.com/user-attachments/assets/b5ace277-e779-44ee-bbec-376585deeefe" width="400">

## Magic Sqaure
A magic square is a square grid of distinct numbers arranged in such a way that the sum of numbers in each row, each column, and both main diagonals is the same. This constant sum is called the magic constant or magic sum.

Steps:

1.Start with an empty 3×3 grid.

2.Place the number 1 in the middle column of the first row.

3.Move up and to the right to place the next number.

4.If this move takes you out of the grid, wrap around to the opposite side (top to bottom or right to left).

5.If the cell is already filled, move one step down instead and place the number there.

6.Repeat this process until all numbers from 1 to 9 are placed.

Time complexity:O(n^2)

## 1D Array Peak element
A peak element in a 1D array is an element that is greater than or equal to its neighbors.

Steps:

1.Start with two pointers: low = 0 and high = n - 1.

2.While low is less than or equal to high, find the middle index: mid = (low + high) // 2.

3.Check if the middle element is a peak:

It's a peak if it's greater than or equal to both its neighbors.

Be careful with boundary cases: for the first and last elements, only one neighbor exists.

4.If the left neighbor is greater than arr[mid], then a peak must exist in the left half, so move high = mid - 1.

5.Else if the right neighbor is greater, move to the right half by setting low = mid + 1.

6.Continue this process until a peak is found.

Time Complexity:O(log n) (Efficient Approach)

## Matrix Multiplication Iterative 
Matrix multiplication is the process of multiplying two matrices A (m × n) and B (n × p) to produce a resultant matrix C (m × p)

Matrix multiplication is widely used in various fields, including:

Computer Graphics & Image Processing: Used for transformations, scaling, and rotation of images.

Machine Learning & AI: Core operation in neural networks, deep learning, and data transformations.

Steps:

1.Take two matrices: A of size m × n and B of size n × p.

2.The result matrix C will be of size m × p.

3.To compute each element C[i][j], take the i-th row from matrix A and the j-th column from matrix B.

4.Multiply the corresponding elements and add them up:
C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + ... + A[i][n-1] * B[n-1][j]

5.Repeat this for all rows of A and all columns of B using nested loops.

6.The result matrix C will now contain the product of matrices A and B.

Time Complexity:O(m*n*p)

## Min and Max element in an Array using Divide and conquer
The Min-Max problem is about finding the minimum and maximum elements in an array. Instead of using a simple linear scan (which takes 
O(n) time), we can use the Divide and Conquer approach to optimize it.

Used in:
Game Theory: Minimax algorithm in decision-making and AI (e.g., Chess, Tic-Tac-Toe) & Computational Geometry: Finding bounding box (smallest and largest points) in a dataset.

Steps:

1.If the array has only one element, both min and max are that element.

2.If the array has two elements, compare them and assign the smaller to min and the larger to max.

3.If the array has more than two elements, divide the array into two halves.

4.Recursively find the min and max in the left half and the right half.

5.Then, compare the two minimums to get the overall min, and compare the two maximums to get the overall max.

6.Return the final min and max values after combining the results from both halves.

The iterative approach takes 2(n-1) comparisons in the worst case.
The divide-and-conquer approach takes only ~3n/2 comparisons, making it more efficient.

## Cosine Similarity
Cosine Similarity is a measure of similarity between two non-zero vectors in an inner product space.
Used in:Text Analysis & NLP: Used to compare the similarity of documents & Image Recognition: Measures similarity between feature vectors of images.

Steps:

1.Take two vectors (lists of numbers), A and B.

2.Compute the dot product of A and B by multiplying corresponding elements and adding them up.

3.Find the magnitude of each vector by taking the square root of the sum of squares of its elements.

4.Divide the dot product by the product of the magnitudes.

5.The result will be between -1 and 1, where:

1 means the vectors are identical in direction

0 means they are completely different (90° apart)

-1 means they are exactly opposite in direction

Time Complexity:O(n)

## Matrix Multiplication Divide and Conquer
The Divide and Conquer approach for matrix multiplication is based on recursively breaking down large matrices into smaller submatrices, multiplying them, and combining the results. This method is particularly useful for large matrices because it reduces the number of computations compared to the traditional iterative method.

Used in large-scale simulations, physics, and engineering problems where high-speed matrix operations are required.

Time Complexity:O(n^3)

## Strassen Matrix Multiplication
Strassen’s algorithm divides each matrix into four submatrices and reduces the number of multiplications from 8 to 7

Steps:

1.Given two square matrices A and B of size n × n (where n is a power of 2), divide them into four submatrices of size n/2 × n/2.

2.Instead of doing 8 multiplications (as in standard method), Strassen's algorithm cleverly uses only 7 multiplications and some additions/subtractions.

3.The seven products are calculated as combinations of submatrices.

4.Using these 7 intermediate products, the final result matrix C is reconstructed using additions and subtractions.

5.This method reduces the time complexity from O(n³) to approximately O(n^2.81).

6.The process is applied recursively on smaller submatrices until a base size (like 1×1) is reached.

Time Complexity:O(n^2.81)

## Activity Selection
The Activity Selection Problem is a greedy algorithm problem where we need to select the maximum number of activities that don’t overlap, given their start and end times.

Sorting takes O(n log n), and selecting activities takes O(n), so total time is O(n log n).

Steps:

1.First, sort all the activities based on their ending times in ascending order.

2.Select the first activity (which ends earliest) as it leaves the most time for the rest.

3.Then, go through the sorted list and for each activity:

4.If its start time is after or equal to the finish time of the last selected activity, select it.

5.Keep updating the end time reference to the current selected activity.

6.Repeat this until you've checked all activities.

Used in CPU scheduling, conference room scheduling, and event planning to maximize task completion.

## Dijkstra algorithm
Dijkstra’s Algorithm is a greedy algorithm used to find the shortest path from a single source vertex to all other vertices in a weighted graph (with non-negative edge weights). It is widely used in network routing, mapping applications, and AI pathfinding.

Steps:

1.Start from a source node and assign it a distance of 0. All other nodes get an initial distance of infinity.

2.Use a visited set to keep track of nodes whose shortest distance from the source is already found.

3.At each step, select the unvisited node with the smallest known distance.

4.Update the distances of its neighbors by checking if a shorter path is found through the current node.

5.Once a node’s neighbors are updated, mark it as visited (finalized).

6.Repeat this process until all nodes have been visited or the smallest distance among unvisited nodes is infinity.

Time Complexity:O((V+E)logV)

## Knapsack Problem
The Greedy Approach is used specifically for the Fractional Knapsack Problem, where we can take fractions of an item instead of the whole item. It works by selecting items based on their value-to-weight ratio.

Used for selecting stocks or projects with the highest return under budget constraints & Optimizing storage space for maximum efficiency.

Steps:

1.First, calculate the value-to-weight ratio for each item.

2.Sort all the items in descending order of value/weight ratio.

3.Start filling the knapsack by picking the item with the highest ratio first.

4.If the full item fits in the remaining capacity, take it completely.

5.If it doesn't fit, take the fraction of it that fits exactly into the knapsack.

6.Repeat this process until the knapsack is full or all items are considered.

Time Complexity:O(nlogn)

## Kruskal Algorithm
Kruskal’s Algorithm is a greedy algorithm used to find the Minimum Spanning Tree (MST) of a graph. It selects edges in increasing order of weight while ensuring that no cycles are formed.

Used in designing efficient networks like roads, electrical grids, and telecommunications.

Steps:

1.Kruskal’s algorithm works by sorting all edges in increasing order of weight.

2.Then it adds edges one by one to the MST, picking the smallest edge that does not form a cycle.

3.To check for cycles efficiently, the algorithm uses the Disjoint Set Union (DSU) or Union-Find data structure.

4.The process continues until the MST contains (V - 1) edges, where V is the number of vertices.

Time Complexity:O(Elogv)

## Prim Algorithm
Prim’s Algorithm is a greedy algorithm used to find the Minimum Spanning Tree (MST) of a graph. The MST is a subset of edges that connects all vertices with the minimum total weight and without forming any cycles.

Helps in designing minimum-cost road/railway connections between cities.

Steps:

1.Start with any vertex and mark it as part of the MST.

2.Look at all the edges that connect the vertices in the MST to those outside it.

3.Choose the edge with the smallest weight that connects to a vertex not yet in the MST.

4.Add that edge and the new vertex to the MST.

5.Repeat the process until all vertices are included in the MST.

6.This ensures that at each step, the MST grows optimally without forming any cycles.

Time Complexity:O(Elogv)

## Multistage Graph Algorithm

A multistage graph is a directed weighted graph where nodes are divided into multiple stages, and the goal is to find the shortest (or longest) path from a source node in the first stage to a destination node in the last stage. This problem is efficiently solved using Dynamic Programming (DP).

Steps:

1.The algorithm works by calculating the shortest cost from each node to the destination, starting from the last stage and moving backward (i.e., using backward dynamic programming).

2.For each node, we check all outgoing edges and select the one with the minimum cost to the destination.

3.Finally, we get the shortest path from the source to destination by following the choices made.

Time Complexity:O(V^2)

## All Pair Shortest Path Algorithm
The All-Pairs Shortest Path (APSP) problem involves finding the shortest path between every pair of nodes in a weighted graph. This is useful in various real-world applications such as network routing, transportation planning, and urban navigation systems.

Steps:

1.It initializes a distance matrix A[i][j], where A[i][j] is the weight of the edge from vertex i to j, or infinity if no edge exists.

2.It then considers each vertex k as an intermediate point, and checks whether the path from i to j can be made shorter by going through k.

3.For every pair of vertices (i, j), it updates:
A[i][j] = min(A[i][j], dist[i][k] + A[k][j])

4.This is done for all vertices k = 0 to V-1, where V is the number of vertices.

5.After the algorithm finishes, A[i][j] contains the shortest distance from vertex i to j.

Time Complexity:O(n^3)

## 0/1 Knapsack Using Dynamic Programming

It involves choosing items with given weights and values to include in a knapsack (bag) with a weight capacity limit, in such a way that you maximize the total value, but you cannot take a fraction of an item — you either take it (1) or leave it (0).
 
Steps:

1.Create a DP table dp[n+1][W+1] where n is the number of items and W is the maximum weight capacity of the knapsack. Each entry dp[i][w] represents the maximum value that can be obtained using the first i items and capacity w.

2.Initialize the table: Set the first row and the first column to 0. This means that if there are 0 items or capacity is 0, the maximum value is 0.

3.Iterate over each item (i = 1 to n) and each capacity (w = 1 to W).

4.For each item i and weight w, check:

If the current item can be included (weight[i-1] <= w), then:

dp[i][w] = max(value[i-1] + dp[i-1][w - weight[i-1]], dp[i-1][w])

(Choose max of including or excluding the item)

Else:

dp[i][w] = dp[i-1][w] (Item too heavy, can't include)

5.Fill the table row by row, updating maximum values based on the above logic.

6.The final answer will be in dp[n][W], which gives the maximum value for n items and capacity W.

Time complexity: O(n * W)

## Matrix Chain Multiplication

Given a sequence of matrices A1, A2, ..., An, you want to compute the product A1 × A2 × ... × An. Determine the best way (order) to fully parenthesize the multiplication so that the total number of scalar multiplications is minimized.

Steps:

1.Create a DP table dp[i][j] to store the minimum number of multiplications needed to compute Ai...Aj.

2.Initialize dp[i][i] = 0 for all i (cost of multiplying one matrix is 0).

3.For chains of length 2 to n, compute the cost for every possible split position k between i and j.

4.Use the formula:
dp[i][j] = min(dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j]) where k is from i to j-1

5.The final answer will be in dp[1][n-1]

Time Complexity: O(n³)

## Longest Common Subsequence

Given two strings X and Y, find the length (and optionally the actual sequence) of the longest subsequence present in both strings

Steps:

1.Create a table dp of size (m+1) x (n+1) and initialize the first row and column with 0s.

2.Loop over each character of X and Y. For each i and j:

If X[i-1] == Y[j-1] → they match, so: dp[i][j] = dp[i-1][j-1] + 1

Else: dp[i][j] = max(dp[i-1][j], dp[i][j-1])

3.The value at dp[m][n] will be the length of the LCS.

Time Complexity: O(m × n), where m and n are lengths of the two strings.

##  N-Queens problem

The goal is to place N queens on an N x N chessboard such that no two queens attack each other. This means:

No two queens are on the same row

No two queens are on the same column

No two queens are on the same diagonal

Steps:

1.Start from the first row (row 0).

2.Try placing a queen in each column one by one.

3.For each placement, check if it's safe (no other queen in the same column or diagonals).

4.If safe, place the queen and move to the next row.

5.If you reach the last row and place a queen successfully, you found a solution.

6.If stuck, backtrack to the previous row and try the next column.

Time Complexity: Worst case: O(N!) (since you try N columns for each of N rows). But with pruning (safety checks), it is much faster in practice.


## Graph Coloring Problem

The goal is to assign colors to the vertices of a graph such that no two adjacent vertices share the same color, using at most m colors.

 Steps:
 
1.Start with the first vertex (index 0).

2.For each vertex, try assigning a color from 1 to m.

3.Before assigning, check if the color is safe (i.e., none of its adjacent vertices have the same color).

4.If it's safe, assign the color and move to the next vertex.

5.If a valid color assignment leads to a complete coloring, store/print the solution.

6.If stuck, backtrack and try another color.

Time Complexity: In the worst case, it is O(mⁿ), where n is the number of vertices and m is the number of colors. But backtracking prunes many invalid colorings early.

## Sum of Subsets

The goal is to find all subsets of a given set of integers that sum to a specific target value m.

Steps:

1.	Initialize a solution vector x[] with all values as 0 (indicating selection).
   
2.	Start from the first item and try to include it in the subset (x[k] = 1).
   
3.	If the current sum = target sum, print the subset and backtrack.

4.	If the sum exceeds the target or no items are left, backtrack.
   
5.	Else, explore the next item both by including and excluding it recursively.

Worst Case Time Complexity: O(2^n): Because all possible subsets (each element has 2 choices: include or exclude) are explored.
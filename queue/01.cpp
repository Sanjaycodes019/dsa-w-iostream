/* 
Queue:
Definition: A linear FIFO (First In, First Out) data structure.

Enqueue: Add at rear.
Dequeue: Remove from front.

Types:
Simple Queue: Basic FIFO.
Circular Queue: Rear connects to front.
Priority Queue: Dequeue by priority.
Deque: Insert/remove at both ends.

Operations:
Enqueue(x), Dequeue(), Front(), Rear(), isEmpty(), isFull().

Use Cases:
CPU Scheduling (Round Robin).
Data Streaming (buffers).
BFS Traversal (graphs).
Messaging Systems (queues).

Implementations:
Array-Based: Fixed size, simple, but wastes space.
Linked List-Based: Dynamic size, flexible.

Complexity:
Time: O(1) (Enqueue/Dequeue).
Space: Depends on size/implementation.

Key Example:
Enqueue: Add to rear.
Dequeue: Remove from front.

Conditions:
Empty: front == rear == -1
Full (Array): rear == size - 1

*/
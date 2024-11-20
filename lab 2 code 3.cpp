#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int* queue;
    int capacity; // Maximum capacity of the queue

public:
    Queue(int cap) {
        capacity = cap;
        front = rear = -1;
        size = 0;
        queue = new int[capacity];
    }

    // Check if the queue is full
    bool isFull() {
        return (size == capacity);
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (size == 0);
    }

    // Enqueue operation to insert an element
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << " as the queue is full." << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }

        queue[rear] = value;
        size++;
        cout << "Enqueued: " << value << endl;
    }

    // Dequeue operation to remove an element
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Queue is empty." << endl;
            return -1;
        }

        int dequeuedElement = queue[front];
        front = (front + 1) % capacity;
        size--;

        if (isEmpty()) {
            front = rear = -1; // Reset when the queue is empty
        }

        cout << "Dequeued: " << dequeuedElement << endl;
        return dequeuedElement;
    }

    // Display the elements of the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = 0; i < size; i++) {
            cout << queue[(front + i) % capacity] << " ";
        }
        cout << endl;
    }

    // Destructor to clean up memory
    ~Queue() {
        delete[] queue;
    }
};

int main() {
    Queue q(5); // Queue of capacity 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    // Attempt to insert into a full queue
    q.enqueue(60);

    q.dequeue();
    q.dequeue();

    q.display();

    // Insert after dequeue
    q.enqueue(60);

    q.display();

    return 0;
}

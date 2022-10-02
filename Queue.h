#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

class Queue
{
  struct Node
  {
    int data;
    Node *next;
    Node(int);
  };

  int size;
  Node *first;
  Node *last;

public:
  Queue();
  ~Queue();
  void enqueue(int);
  void dequeue();
  void print();
};

#endif

#include <iostream>
#include "Queue.h"

// Constructor
Queue::Queue()
{
  std::cout << "Queue initialized!\n";

  // Set attributes to default values
  first = NULL;
  last = NULL;
  size = 0;
}

// Constructor for a Node given an integer argument
Queue::Node::Node(int num)
{
  data = num;
  next = NULL;
}

void Queue::enqueue(int num)
{
  // Set temp to the new node with given new number
  Node *temp = new Node(num);

  // If last is null, then queue will be only the new number
  if (last == NULL)
  {
    first = last = temp;
  }
  // else, last->next points to the new node and the new node is the last one
  else
  {
    last->next = temp;
    last = temp;
  }
}

void Queue::dequeue()
{
  // if there is nothing to pull, throw error
  if (first == NULL)
  {
    std::cout << "Attempted queue underflow!\n";
    return;
  }

  // else, set temp to the first node
  // set first to the second element
  Node *temp = first;
  first = first->next;

  // if first is null, then queue is empty and last is null
  if (first == NULL)
  {
    last == NULL;
  }
  // delete first element
  delete (temp);
}

void Queue::print()
{
  // if first is null, queue is empty
  if (first == NULL)
  {
    std::cout << "Queue is empty...\n";
    return;
  }
  else
  {
    // let a temp node be the first node
    Node *temp = first;
    std::cout << "Current Queue\n";
    // iterate through the queue using the temp node
    while (temp != NULL)
    {
      std::cout << temp->data << "\n";
      temp = temp->next;
    }
  }
}

Queue::~Queue()
{
  Node *temp = first;
  std::cout << "Queue has been deleted";

  // use a temp node to delete the queue
  while (temp != NULL)
  {
    first = first->next;
    delete (temp);
    temp = first;
  }
}
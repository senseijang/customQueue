#include <iostream>
#include "Queue.h"

void br();

int main()
{
  Queue myQueue;

  br();

  // Enqueue 5 numbers 1-5
  for (int i = 1; i < 6; i++)
  {
    myQueue.enqueue(i);
  }
  myQueue.print();

  br();

  // Dequeue 3 numbers, should remove 1-3
  for (int j = 0; j < 3; j++)
  {
    myQueue.dequeue();
  }
  myQueue.print();

  br();

  // Dequeue another 3, should remove 4,5 and throw error
  for (int k = 0; k < 3; k++)
  {
    myQueue.dequeue();
  }
  // print empty queue
  myQueue.print();

  br();
}

void br()
{
  std::cout << std::endl;
}

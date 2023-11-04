class MyQueue:

    def __init__(self):
        # Initialize two stacks, one for enqueue (push) and one for dequeue (pop).
        self.enqueue_stack = []
        self.dequeue_stack = []

    def push(self, x: int) -> None:
        # To enqueue an item, simply push it onto the enqueue stack.
        self.enqueue_stack.append(x)

    def pop(self) -> int:
        if not self.dequeue_stack:
            # If the dequeue stack is empty, transfer items from the enqueue stack.
            while self.enqueue_stack:
                self.dequeue_stack.append(self.enqueue_stack.pop())
        if self.dequeue_stack:
            # Pop and return the item from the dequeue stack, simulating dequeue.
            return self.dequeue_stack.pop()

    def peek(self) -> int:
        if not self.dequeue_stack:
            # If the dequeue stack is empty, transfer items from the enqueue stack.
            while self.enqueue_stack:
                self.dequeue_stack.append(self.enqueue_stack.pop())
        if self.dequeue_stack:
            # Return the item at the front of the dequeue stack, simulating peeking.
            return self.dequeue_stack[-1]

    def empty(self) -> bool:
        # The queue is considered empty if both the enqueue and dequeue stacks are empty.
        return not (self.enqueue_stack or self.dequeue_stack)
        


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()
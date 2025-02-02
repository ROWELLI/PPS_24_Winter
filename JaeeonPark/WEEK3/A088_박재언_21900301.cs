
namespace PPS{

    public class MinStack{
        public Stack<int> stack;
        public Stack<int> minStack;
        public int min;

        
        public MinStack() {
            stack = new Stack<int>();
            minStack = new Stack<int>();
            min = int.MaxValue;
        }
    
        public void Push(int val) {
            stack.Push(val);
            if(val <= min){
                minStack.Push(min);
                min = val;
            }
        }
        
        public void Pop() {
            int top = stack.First();
            stack.Pop();
            if(top == min){
                min = minStack.First();
                minStack.Pop();
            }
        }
        
        public int Top() {
            return stack.First();
        }
        
        public int GetMin() {
            return min;
        }
    }
}
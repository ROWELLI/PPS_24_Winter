
namespace PPS
{


    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int x) { val = x; }
    }

    public class A098
    {
        public static List<ListNode> listNodes = new List<ListNode>();
        public ListNode GetIntersectionNode(ListNode headA, ListNode headB)
        {
            Traverse(headA);
            
            return Traverse(headB);
        }

        public static ListNode Traverse(ListNode listNode){
            if(listNode==null)
                return null;
            if(listNodes.Contains(listNode)){
                return listNode;
            }
            else{
                listNodes.Add(listNode);
            }
            return Traverse(listNode.next);
        }

    }
}
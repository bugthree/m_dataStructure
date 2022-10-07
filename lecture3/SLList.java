// 对链表的封装
// 对外提供接口，供客户端使用
public class SLList {
  private static class IntNode {
    public int item;  // 链表元素
    public IntNode next;  // 指向下一个链表
  
    public IntNode(int i, IntNode n){
    item = i;
    next  = n;
    }
  }
  
  private IntNode first;

  public SLList(int x){
    first = new IntNode(x, null);
  }
  
  // 将x添加到list链表得最头部
  public void addFirst(int x){
    first = new IntNode(x, first);
  }

  // 返回链表中的第一个元素
  public int getFirst(){
    return first.item;
  }

  // 在链表的末尾添加一个元素
  public void addLast(int x){
    IntNode p = first;

    while (p.next != null){
      p = p.next;
    }
    p.next = new IntNode(x, null);
  }

  // 递归,返回一个大小
  // 遍历的方法 会很慢，尤其是对于一个大数据而言
  private static int size(IntNode p){
    if(p.next == null){
      return 1;
    }
    return 1 + size(p.next);
  }
  // 该方法调用私有静态方法进行递归
  public int size() {
    return size(first);
  }

  // 
  public int iterativeSize(){
    IntNode p = first;
    int s = 0;
    while (p.next != null){
      p = p.next;
      s = s + 1;
    }
    return s;
  }

  public static void main(String[] args){
    // 创建一个整数列表
    SLList L = new SLList(15);
    L.addFirst(10);
    L.addFirst(5);
    L.addLast(200);
    System.out.println(L.size());
  }
}

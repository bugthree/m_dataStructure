// lecture p5
// https://sp21.datastructur.es/ 
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
  
  // 将first 改为哨兵(),sentinel.next
  private IntNode sentinel;
  private int size;

  public SLList(){
    sentinel = new IntNode(63, null);
    size = 0;
  }
  public SLList(int x){
    sentinel = new IntNode(63, null);// 63 时哨兵，无所谓是几
    sentinel.next = new IntNode(x, null);
    size = 1;
  }
  
  // 将x添加到list链表得最头部
  public void addFirst(int x){
    sentinel.next = new IntNode(x, sentinel.next);
    size = size + 1;
  }

  // 返回链表中的第一个元素
  public int getFirst(){
    return sentinel.next.item;
  }

  // 在链表的末尾添加一个元素
  public void addLast(int x){
    size = size + 1;
    // 当有一个空的构造函数时，会出现一个bug，
    // p.next  = null.next
    // 使用哨兵

    IntNode p = sentinel;

    while (p.next != null){
      p = p.next;
    }
    p.next = new IntNode(x, null);

  }

  // 递归,返回一个大小
  // 遍历的方法 会很慢，尤其是对于一个大数据而言
  // 如何优化呢？
  // 不要在调用size()方法时，再去遍历这个链表，而是在这个链表构建的时候，就去构建length 这个数据
  private static int size(IntNode p){
    if(p.next == null){
      return 1;
    }
    return 1 + size(p.next);
  }
  // 该方法调用私有静态方法进行递归
  // 该方法速度慢。暂时舍弃
  public int size_for() {
    return size(sentinel.next);
  }

  public int size(){
    return size;
  }

  public static void main(String[] args){
    // 创建一个整数列表
    SLList L = new SLList();
    L.addLast(200);
    System.out.println(L.size());
  }
}

// 实现链表
public class IntList {
  public int first;
  public IntList rest;

  public IntList(int f, IntList r){
  first = f;
  rest  = r;
}

// 递归,返回一个大小
public int size(){
  if(rest == null){
    return 1;
  }
  return 1 + this.rest.size();
}

// 迭代，返回一个大小
public int iterativeSize(){
  IntList p = this;
  int totalSize = 0;
  while(p != null){
    totalSize += 1;
    p = p.rest;
  }
  return totalSize;
}

// 根据i 返回一个值
public int get(int i){
  if(i == 0){
    return first;
  }
  return rest.get(i - 1);
}
  public static void main(String[] args) {
    IntList L = new IntList(15, null);
    L = new IntList(10, L);
    L = new IntList(5, L);

    System.out.println(L.size());
  }
}

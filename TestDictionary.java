import java.util.*;
class TestDictionary
{
public static void main(String[] args)
{
Dictionary d=new Hashtable();
d.put(101,"Java");
d.put(102,"HTML");
d.put(103,"C++");
d.put(103,"OS");
d.put(104,"C++");
System.out.println(d);
System.out.println("Size of dictionary :"+d.size());
System.out.println("at index 102 key value :"+d.get(102));
System.out.println("Dictionary is Empty or not :"+d.isEmpty());
System.out.println("103 index key removed :"+d.remove(103));
System.out.println("Updated Dictionary:"+d);
}
}

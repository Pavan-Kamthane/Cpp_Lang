import java.util.*;
import java.io.*;
import java.lang.*;

class Node
{
        int data;
        Node next;
        Node(int d){
            data=d;
            next=null;
        }
    }
  
class Test { 
    
    public static void main(String args[]) 
    { 
        Node head=new Node(10);
    	head.next=new Node(20);
    	head.next.next=new Node(30);
    	head.next.next.next=head;
    	head=insertBegin(head,15);
    	printlist(head);
    	
    } 
    
    public static void printlist(Node head)
    {
        if(head==null)return;
        Node r=head;
        do{
            System.out.print(r.data+" ");
            r=r.next;
        }while(r!=head);
    }
    
    static Node insertBegin(Node head,int x)
    {
        Node temp=new Node(x);
        if(head==null){
            temp.next=temp;
            return temp;
        }
        else
        {
            temp.next=head.next;
            head.next=temp;
            int t=head.data;
            head.data=temp.data;
            temp.data=t;
            return head;
        }
    }
} 

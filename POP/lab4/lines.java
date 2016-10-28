import java.util.*;

class lines{
public static void main(String[] args){
  Scanner in=new Scanner(System.in);

  System.out.println("a line is of the form Ax+By+c=0");
  System.out.println("Line 1\nenter the values of A B and C");
  int a=in.nextInt();
  int b=in.nextInt();
  int c=in.nextInt();
  System.out.println("Line 2\nenter the values of A B and C");
  int d=in.nextInt();
  int e=in.nextInt();
  int f=in.nextInt();

  if(a*e == b*d )
  System.out.println("the two lines don't intercept\n");
  else
  System.out.println("the two lines intercept\n");

}

}

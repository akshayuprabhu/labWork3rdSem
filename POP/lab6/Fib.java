import java.util.Scanner;

public class Fib {
	int fib(int n){
		if(n==1)
			return 1;
		else if(n==0)
			return 0;
		else
			return fib(n-1)+fib(n-2);
	}
	public static void main(String[] args){
		int n,x;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter the position of the number to be displayed: ");
		n=s.nextInt();
		Fib obj=new Fib();
		x=obj.fib(n);
		System.out.println("The number is: "+x);
	}
}

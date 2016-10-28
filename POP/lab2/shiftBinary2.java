import java.util.*;
import java.lang.*;
class shiftBinary2{
	public static void main(String[] args){
	Scanner scan=new Scanner(System.in);
	int i;
	System.out.println("enter a binary number\n");
	String str=scan.nextLine();
	
	int binaryValue = Integer.parseInt(str,2);
	String decimalValue=Integer.toString(binaryValue,10);

	System.out.println("the number in decimal is "+ decimalValue);
	int j=Integer.parseInt(decimalValue);

	System.out.println("on left shift we get, "+Integer.toBinaryString(j<<1));

	for(i=0;j!=0;i++){
	System.out.println("On Right Shift we get "+ Integer.toBinaryString(j));
	j=j >>> 1;
	
	}
	}
}

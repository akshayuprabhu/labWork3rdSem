import java.io.*;
import java.util.*;
import java.lang.*;

class preAndPostfix{

	public static void main(String[] args){
		String a=args[0];
		int i,index;
		int n=a.length();
		
		System.out.println("the prefixes of the word are ");
		
		for(index=n;index>0;index--){
		for(i=0;i<index;i++){
		System.out.print(a.charAt(i));
		}System.out.println("");
		}
		
		
		System.out.println("the postfixes of the word are");
		
		for(index=n-1;index>=0;index--){
		for(i=index;i<n;i++){
		System.out.print(a.charAt(i));
		}System.out.println("");
		}
		
	}
}

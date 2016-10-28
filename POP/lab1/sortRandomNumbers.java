import java.io.*;
import java.lang.*;
import java.util.*;

class sortRandomNumbers{
	public static void main(String[] args){
		
		int i;
		int[] a = new int[10]; 
		for(i=0;i<10;i++){
		double x=Math.random();
			a[i]=(int)(x*100);
		}
		Arrays.sort(a);
		for(i=0;i<10;i++){
		System.out.println(a[i] );
		}
		
	}
}

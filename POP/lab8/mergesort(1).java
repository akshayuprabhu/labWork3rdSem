//import java.lang.Collections.*;
import java.lang.*;
import java.io.*;
import java.util.*;

class mergesort{
/*	
	void merge(int[] a,int l,int mid,int h){
		int n1,n2;

		n1=mid-l+1;
		n2=h-mid;

		int L[n1],R[n2],k=0,j=0;
//code to be written here
	}
*/
	void sort(ArrayList<Integer> a,int l,int h){
		int mid=(l+h)/2;
		sort(a,l,mid);
		sort(a,mid+1,h);

		//merge(a,l,mid,h);	

	}

	public static void main(String[] args) {
		Scanner in =new Scanner(System.in);

		ArrayList<Integer> arr=new ArrayList<Integer>();

		System.out.println("enter the number of terms to sort");
		int n=in.nextInt();
		for (int i=0;i<n ;i++ ) {
			int z=in.nextInt();
			arr.add(z);
		}

		mergesort obj = new mergesort();

		obj.sort(arr,0,n-1);

	}
}

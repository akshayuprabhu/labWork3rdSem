import java.lang.Collections.*;
import java.lang.*;
import java.io.*;


class mergesort{

	void merge(int[] a,int l,int mid,int h){
		int n1,n2;

		n1=mid-l+1;
		n2=h-mid;

		int L[n1],R[n2],k=0,j=0;
//code to be written here
	}

	void sort(int[] a,int l,int h){
		int mid=(l+h)/2;
		sort(a,l,mid);
		sort(a,mid+1,h);

		merge(a,l,mid,h);	

	}

	public static void main(String[] args) {
		Scanner in =new Scanner(System.in);

		int[] arr=new int[10];

		System.out.println("enter ten numbers to sort");
		for (int i=0;i<arr.length() ;i++ ) {
			arr[i]=in.nextInt();
		}

		mergesort obj = new mergesort();

		obj.sort(a,0,9);

	}
}
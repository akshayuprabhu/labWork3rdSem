import java.util.*;
import java.io.*;

class Cakes{
static int total;
public String colour;
public int cost;
public int no;
Cakes(int co){
this.cost=co;
}

}

class Cost{

public static void main(String[] args){
	int c;
	
	Cakes hk = new Cakes(100);
	Cakes bf = new Cakes(200);
	Cakes pa = new Cakes(300);	
	Cakes pl = new Cakes(400);

	Scanner in = new Scanner(System.in);
	
	do{
	System.out.println("Enter the options\n1:Honey cake\t2:Black forest\t3:Pineapple\t4:Plain cake\t5:Print the bill\t6:EXIT");
	c = in.nextInt();
	
	switch(c){
		case 1:System.out.println("Enter the number of cakes\n");
			   hk.no=in.nextInt();
			   Cakes.total+=(hk.cost*hk.no);				   
				break;
		case 2:System.out.println("Enter the number of cakes\n");
			   bf.no=in.nextInt();
			   Cakes.total+=(bf.cost*bf.no);				   
				break;
		case 3:System.out.println("Enter the number of cakes\n");
			   pa.no=in.nextInt();
			   Cakes.total+=(pa.cost*pa.no);				   
				break;
		case 4:System.out.println("Enter the number of cakes\n");
			   pl.no=in.nextInt();
			   Cakes.total+=(pl.cost*pl.no);				   
				break;
		case 5:System.out.println("the total cost is "+Cakes.total);		   
				break;

		}
	
	}while(c != 6);
	
	
	}
}


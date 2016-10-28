class Detergent{

public void scrub(){
System.out.println("I am in main scrub method!!");
}

}

class soap extends Detergent{
public void scrub(){
System.out.println("I am in derived scrub method!!");
}

public void sterlize(){
System.out.println("I am in derived sterlize method!!");
}
}

class inherit_1{
	public static void main(String args[]){
	
	Detergent obj1 = new soap();
	soap obj2 = new soap();
	obj1.scrub();
	obj2.sterlize();
	}
}

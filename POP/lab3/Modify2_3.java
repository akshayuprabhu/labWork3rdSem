class A{
	public A(int i){
	System.out.println("I am in A printing "+ i);
	}
}

class B{
	 public B(int j){
	System.out.println("I am in B printing " + j );
	}

}
class C extends A{
	public C(int i){
	super(i);
	System.out.println("I am in C printing " + i);
	B objB = new B(i);
	
	}

}

class Modify2_3{
	public static void main(String args[]){	
	C objC = new C(10);
	}
} 

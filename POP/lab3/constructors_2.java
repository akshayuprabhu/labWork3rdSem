class A{
	public A(){
	System.out.println("I am in A");
	}
}

class B{
	 public B(){
	System.out.println("I am in B");
	}

}
class C extends A{

B objB = new B();
}

class constructors_2{
	public static void main(String args[]){	
	C objC = new C();

//	objC.A();		
	}
} 

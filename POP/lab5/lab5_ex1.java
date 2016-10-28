import animals.ex1;

class lab5_ex1 implements ex1{
	
	public void eat(){
		System.out.println("mammal eats");
	}
	public void sleep(){
		System.out.println("mammal sleeps");
	}
	public void run(){
		System.out.println("mammal runs");
	}
	public static void main(String[] args){
		lab5_ex1 m = new lab5_ex1();
		m.eat();
		m.sleep();
		m.run();
	}
	
}

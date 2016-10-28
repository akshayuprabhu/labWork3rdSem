interface a{
	 void methoda();	
}
 interface b extends a{
	 void methodb();
}
interface c extends a{
	 void methodc();
}
interface d extends b,c{
	void methodd();
}

class lab5_ex3 implements d{
	public void methoda(){
	System.out.println("in method a");
	}
	
	public void methodb(){
	System.out.println("in method b");
	}
	public void methodc(){
	System.out.println("in method c");
	}
	public void methodd(){
	System.out.println("in method d");
	}
	
	public static void main(String[] args){
		lab5_ex3 m=new lab5_ex3();
		m.methoda();
		m.methodb();
		m.methodc();
		m.methodd();
	}
	
	
}


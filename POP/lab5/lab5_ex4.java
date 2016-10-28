import java.io.*;

interface i1{
	void func1();
	void func2();
}
interface i2{
	void func3();
	void func4();
}
interface i3{
	void func5();
	void func6();
}
interface i4 extends i1,i2,i3{}

class Super{}
public class lab5_ex4 extends Super implements i1,i2,i3,i4{
	public void func1(){};
	public void func2(){};
	public void func3(){};
	public void func4(){};
	public void func5(){};
	public void func6(){};
	
	public static void main(String args[]){
	}
	
}

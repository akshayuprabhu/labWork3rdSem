public class Outer2 {
	private String str;
	Outer2(){
		str="String Initialised";
	}
	class Inner {
		Inner(String s){
			System.out.println("Inner class called by "+s);
		}
		void check(String l){
			System.out.println("Received the instance "+l);
		}
		public String toString(){
			System.out.println(str+" from Inner");
			return(str);
		}
	}
	Inner method (){
		Outer2.Inner obj2=this.new Inner("InnermethodinOuter");
		return obj2;
	}
	public static void main(String[] args){
		Outer2.Inner obj3;
		Outer2 obj=new Outer2();
		Outer2.Inner obj1=obj.new Inner("main");
		obj3=obj.method();
		obj3.check("obj3 from Inner");
		String str1=obj1.toString();
		System.out.println(str1);
	}
}

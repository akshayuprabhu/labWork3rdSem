public class Outer {
	class Inner {
		Inner(String s){
			System.out.println("Inner class called by "+s);
		}
		void check(String l){
			System.out.println("Received the instance "+l);
		}
	}
	Inner method (){
		Outer.Inner obj2=this.new Inner("InnermethodinOuter");
		return obj2;
	}
	public static void main(String[] args){
		Outer.Inner obj3;
		Outer obj=new Outer();
		Outer.Inner obj1=obj.new Inner("main");
		obj3=obj.method();
		obj3.check("obj3 from Inner");
	}
}

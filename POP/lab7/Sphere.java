public class Sphere extends Shape
{	private double radius; 
	public Sphere(double r)
	{
		super("Sphere");
		radius = r;
	}

	
	public double area()
	{
		return 4*Math.PI*radius*radius;
	}

	public String toString()
	{
		return super.toString() + " of radius " + radius;
	}

}

class rectangle extends Shape{
	private double l,b;
	public rectangle(double l1,double b1)
	{
		super("Rectangle");
		l=l1;
		b=b1;
	}
	public double area()
	{
		return l*b ;
	}
	public String toString()
	{
		return super.toString() + " of length " + l + " and width " + b;
	}
	
}
class cylinder extends Shape{
	private double r,h;
	public cylinder(double l1,double b1)
	{
		super("Cylinder");
		r=l1;
		h=b1;
	}
	public double area()
	{
		return  2*Math.PI*r*(r+h);
	}
	public String toString()
	{
		return super.toString() + " of radius " + r + " and height " + h;
	}
	
}

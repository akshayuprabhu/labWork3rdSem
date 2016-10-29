import java.text.DecimalFormat;

public class PaintThings
{	public static void main (String[] args)
	{	final double COVERAGE = 350;
		Paint p = new Paint(COVERAGE);
	
		rectangle deck=new rectangle(20,35);

		Sphere bigBall=new Sphere(15);

		cylinder tank=new cylinder(10,30);

		double deckAmt, ballAmt, tankAmt;
         
		deckAmt=p.amount(deck);
		ballAmt=p.amount(bigBall);
		tankAmt=p.amount(tank);

		DecimalFormat fmt = new DecimalFormat("0.#");

		System.out.println ("\nNumber of gallons of paint needed...");

		System.out.println ("Deck " + fmt.format(deckAmt));

		System.out.println ("Big Ball " + fmt.format(ballAmt));

		System.out.println ("Tank " + fmt.format(tankAmt));
	
	
	}
}
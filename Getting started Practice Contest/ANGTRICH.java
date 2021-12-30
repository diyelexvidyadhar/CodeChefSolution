
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int a = sc.nextInt();
	    int b = sc.nextInt();
	    int c = sc.nextInt();
	    
	    boolean area = (a + b + c) == 180;
	    boolean angle = a > 0 && b > 0 && c > 0;
	    boolean validTriangle = (a+b) > c || (a+c) > b || (b+c) > a;
		
		if(area && angle && validTriangle)
			System.out.println("YES");
		else 
			System.out.println("NO");
	sc.close();
	}
}

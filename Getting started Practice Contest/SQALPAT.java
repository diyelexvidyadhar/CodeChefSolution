import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
	    int i = 1;
	    
	    while(i <= n) {
	    	int till = i*5;
	    	if(i%2 == 0) {
	    		for(int j = till;j > till-5; j--) {
	    			System.out.print(j + " ");
	    		}
	    	}else {
	    		if(i%2 != 0) {
		    		for(int j = till-4;j <= till; j++) {
		    			System.out.print(j + " ");
		    		}
	    	}
	    }
	    	i++;
	    	System.out.println(" ");

	}
	}
}
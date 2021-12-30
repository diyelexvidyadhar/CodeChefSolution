import java.util.ArrayList;
import java.util.Scanner;

public class DIFACTRS {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
	    int noFactors = 0;
	    ArrayList<Integer> factors = new ArrayList<>();
	    
	    for(int i = 1; i < n+1; i++) {
	    	if(n%i == 0) {
	    		noFactors ++;
	    		factors.add(i);
	    	}
	    }
	    System.out.println(noFactors);
	    for(int factor : factors)
	    	System.out.print(factor + " ");
	   
	}

}
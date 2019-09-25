import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;
 
/* Name of the class has to be "Main" only if the class is public. */
public class sol
{
	public static void main (String[] args)
	{
		        Scanner s = new Scanner(System.in); 
		        int n = s.nextInt();
		        	BigInteger number;
 
		        for(int i = 0; i < n - 1; i++){
		        	number = s.nextBigInteger();
		        	BigInteger sol = solution(number);
		        	System.out.println(sol);
		        	System.out.println();
		        }
		        number = s.nextBigInteger();
		        	BigInteger sol = solution(number);
		        	System.out.println(sol);
 
 
		// your code goes here
	}
	public static BigInteger solution(BigInteger number){
		BigInteger left = new BigInteger("1");
		BigInteger right = new BigInteger("10");
		right = right.pow(510);
		BigInteger mid = new BigInteger("1");
		while(left.compareTo(right) <= 0){
			mid = (left.add(right)).divide(new BigInteger("2"));
 
			int state = (mid.pow(2)).compareTo(number);
 
			if( state == 0) return mid;
 
 
			if(state == -1){
				left = mid.add(new BigInteger("1"));
			}			
			if(state == 1){
				right = mid.subtract(new BigInteger("1"));
			}
 
 
		}
		return mid;
	}
}

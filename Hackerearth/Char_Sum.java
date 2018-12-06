import java.util.*;
import java.lang.*;
import java.io.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
		Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int ctr=0;
        for(int i=0; i<str.length(); i++)
        	ctr+=(((int)str.charAt(i))-97)+1;
	        System.out.println(ctr);
    }
}

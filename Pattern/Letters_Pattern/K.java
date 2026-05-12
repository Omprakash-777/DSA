import java.util.*;

public class K{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the size (odd number >= 3): ");
        int a=sc.nextInt();
        for(int i=0; i<a; i++){
            for(int j=0; j<a; j++){
                // if(j==0 || j == Math.abs(a/2-i)+1){
                if(j==0 || j == (a/2-i)+1 || j == (i-a/2)+1){
                    System.out.print("* ");
                }
                else{
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
        sc.close();
    }   
}

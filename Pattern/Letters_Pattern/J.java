import java.util.*;
public class J{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size (odd number >= 3): ");
        int n=sc.nextInt();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(( i==j && i==n-1) || (i+j==n-1 && i==n-1)){
                    System.out.print("  ");
                }
                else if(j==n-1 || i==n-1 || (j==0 && i==n-2)){
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
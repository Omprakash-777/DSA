import java.util.*;

public class N {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the size (odd number >= 3): ");
        int a=sc.nextInt();
        for(int i=0; i<a; i++){
            for(int j=0; j<a; j++){
                if(j==0 || j==(a-1) || i==j){
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

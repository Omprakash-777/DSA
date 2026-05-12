import java.util.*;

public class Equilateral_Triangle {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the Size: ");
        int a= sc.nextInt();
        for(int i=1; i<=a; i++){
            for(int j=1; j<=(2*a)-1; j++){
                if(j<=(a-i) || j>=(a+i)){
                    System.out.print(" ");
                }
                else{
                    System.out.print("*");
                }
            }
        
            System.out.println();
        }
    sc.close();
    }    
}
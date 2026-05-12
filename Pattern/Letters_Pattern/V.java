import java.util.*;
public class V{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the size(odd Number >= 3): ");
        int n=sc.nextInt();
        for(int i=0; i<n; i++){
            for(int j=0; j<(n*2)-1; j++){
                if(i==j || i+j==(2*n)-2){
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

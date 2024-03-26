import java.util.Scanner;

public class hello {
  public static void main(String[] args) {
    
    Scanner scan=new Scanner(System.in);
    
    System.out.println("You are playing a game! press q or Q to quit");
    String response=scan.next();

    if(!response.equals("q") && !response.equals("Q")){
      System.out.println("You are still playing the game *pew pew*");
    }
    else{
      System.out.println("You quit the game");      
    }
     
  }
}

package coe318.lab5;

import java.util.Scanner;

public class SimpleUI implements UserInterface {
    private BlackjackGame game;
    private Scanner user = new Scanner(System.in);

  @Override
    public void setGame(BlackjackGame game) {
        this.game = game;
    }

  @Override
    public void display() {
        System.out.println("House holds: " + this.game.getHouseCards().toString());
        System.out.println("You hold: " + this.game.getYourCards().toString());
        System.out.println("");
    }

  @Override
    public boolean hitMe() {
        if(this.game.score(game.getYourCards()) >= 21){
            return false;
        }
        Scanner scan = new Scanner(System.in);
        System.out.println("Another card?");
        String hit = scan.nextLine();
        if(hit.equalsIgnoreCase("y")){
            return true;
        }
        else if(hit.equalsIgnoreCase("n")){
            return false;
        }
        else{
            System.out.println("Please enter 'y' for yes and 'n' for no.");
            return this.hitMe();
        }
    }

  @Override
    public void gameOver() {
        System.out.println("Game over.");
        this.display();
        int playerScore = game.score(game.getYourCards());
        int houseScore = game.score(game.getHouseCards());
        System.out.println("Your score: " + playerScore + ", " + "House score: " + houseScore);
        if(playerScore > 21 || playerScore == houseScore){
            System.out.println("You lose.");
        }
        else if((playerScore <= 21 && houseScore > 21) || ((playerScore < 21 && houseScore < 21) && (playerScore > houseScore))){
            System.out.println("You win.");
        }
        else{
            System.out.println("You lose.");
        }
    }

}
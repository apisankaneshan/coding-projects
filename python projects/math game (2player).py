#Math competition
#Board different tiles a,b,c,d,e,f,g
#When you roll a die, you land on a tile and are asked a math question to be able to earn set amount of money.
#After 5 turns, whoever has the most money wins the game.

import time
import random

print("Welcome to Math Omen! The game where all your math skills will be tested.")
print("You can either snooze, or you can lose.")
print("")
print("Firstly, you will need to roll the dice we have provided for you. With this die, you will be given a certain tile letter, and you must move to that tile.")
print("Next, you will earn some money. BUT WAIT!!!!")
print("You will need to answer a math question we procedurely generate for you to answer. If the question is answered correctly, you earn the money of the tile you have landed on.")
print("")
print("We will run this game for 5 turns, by the end, whoever collects the most money will win the game.")
print("GOOD LUCK WARRIORS.")

print("")

player1=input("Welcome, player1. Please enter your username. Choose any name you would like to have: ")
player2=input("Also welcome, player2. Please enter your username. Choose any name you would like to have: ")
print("Hello there",player1, "Your challenger is",player2)

die1=random.randint(1,12)
die2=random.randint(1,12)
die3=random.randint(1,12)
die4=random.randint(1,12)
die5=random.randint(1,12)
die6=random.randint(1,12)
die7=random.randint(1,12)
die8=random.randint(1,12)
die9=random.randint(1,12)
die10=random.randint(1,12)
die11=random.randint(1,12)
die12=random.randint(1,12)

diceList=[1,2,3,4,5,6,7,8,9,10,11,12]
random.choice(diceList)



math1=("What is 2x3? ")
math2=("What is 17x20?: ")
math3=("What is 0 to the power of -1?: ")
math4=("What is (4+2)/3?: ")
math5=("What is 20 x 8 + 8?: ")
math6=("What is 12x12?:")
math7=("What is 6 x 4 + 2?: ")
math8=("What is (6 +2) x 3 – 0?: ")
math9=("What is 6 -3 x 4?: ")
math10=("What is 20 x 8 -4 +9?: ")
math11=("What is (8-3)+5/2?: ")
math12=("What is (56/2)x4?: ")


math1ans=("6")
math2ans=("340")
math3ans=("1")
math4ans=("2")
math5ans=("168")
math6ans=("144")
math7ans=("26")
math8ans=("24")
math9ans=("-6")
math10ans=("165")
math11ans=("5")
math12ans=("112")

diceNum=("Your tile number is: ",random.choice(diceList))

player1money=0
player2money=0

turn=0
while turn<10:
    rollDice=input(player1+" would you like to roll the dice?: ")
    while rollDice=="yes":
        turn=turn+1
        print (diceNum)
        if random.choice(diceList) in diceNum == 1:
            input(math1)
            if math1 == '6':
                player1money=player1money+10
                print("You won $10 dollars, well done!",player1,"Please pass the dice to",player2)
                continue
            continue
        
            
        if random.choice(diceList) == 2:
            input(math2)
            if math2 == '340':
                player1money=player1money+10
                print("You won $10 dollars, well done!",player1,"Please pass the dice to",player2)
                continue
            continue
        
            
        if random.choice(diceList) == 3:
            input(math3)
            if math3 == '1':
                player1money=player1money+10
                print("You won $10 dollars, well done!",player1,"Please pass the dice to",player2)
                continue
            continue
       
            
        if random.choice(diceList) == 4:
            input(math4)
            if math4 == '2':
                player1money=player1money+10
                print("You won $10 dollars, well done!",player1,"Please pass the dice to",player2)
                continue
            continue
        
            
        if random.choice(diceList) == 5:
            input(math5)
            if math5 == '168':
                player1money=player1money+10
                print("You won $10 dollars, well done!",player1,"Please pass the dice to",player2)
                continue
            continue
        
            
        if random.choice(diceList) == 6:
            input(math6)
            if math7 == '144':
                player1money=player1money+10
                print("You won $10 dollars, well done!",player1,"Please pass the dice to",player2)
                continue
            continue
        
            
        if random.choice(diceList) == 7:
            input(math7)
            if math7 == '26':
                player1money=player1money+10
                print("You won $10 dollars, well done!",player1,"Please pass the dice to",player2)
                continue
            continue
        
            
        if random.choice(diceList) == 8:
            input(math8)
            if math8 == '24':
                player1money=player1money+10
                print("You won $10 dollars, well done!",player1,"Please pass the dice to",player2)
                continue
            continue
        
            
        if random.choice(diceList) == 9:
            input(math9)
            if math9 == '-6':
                player1money=player1money+10
                print("You won $10 dollars, well done!",player1,"Please pass the dice to",player2)
                continue
            continue
        
            
        if random.choice(diceList) == 10:
            input(math10)
            if math10 == '165':
                player1money=player1money+10
                print("You won $10 dollars, well done!",player1,"Please pass the dice to",player2)
                continue
            continue
        
            
        if random.choice(diceList) == 11:
            input(math11)
            if math11 == '5':
                player1money=player1money+10
                print("You won $10 dollars, well done!",player1,"Please pass the dice to",player2)
                continue
            continue
        
            
        if random.choice(diceList) == 12:
            input(math12)
            if math12 == '112':
                player1money=player1money+10
                print("You won $10 dollars, well done!",player1,"Please pass the dice to",player2)
                continue
            continue





    rollDice=input(player2+" would you like to roll the dice?: ")
    while rollDice=="yes":
        turn=turn+1
        print("Your tile number is: ",random.choice(diceList))
        if random.choice(diceList) == 1:
            input(math1)
            if math1 == '6':
                player2money=player2money+10
                print("You won $10 dollars, well done!",player2,"Please pass the dice to",player1)
                continue
            continue
    
        if random.choice(diceList) == 2:
            input(math2)
            if math2 == '340':
                player2money=player2money+10
                print("You won $10 dollars, well done!",player2,"Please pass the dice to",player1)
                continue
            continue

    
        if random.choice(diceList) == 3:
            input(math3)
            if math3 == '1':
                player2money=player2money+10
                print("You won $10 dollars, well done!",player2,"Please pass the dice to",player1)
                continue
            continue
        
    
        if random.choice(diceList) == 4:
            input(math4)
            if math4 == '2':
                player2money=player2money+10
                print("You won $10 dollars, well done!",player2,"Please pass the dice to",player1)
                continue
            continue
        
    
        if random.choice(diceList) == 5:
            input(math5)
            if math5 == '168':
                player2money=player2money+10
                print("You won $10 dollars, well done!",player2,"Please pass the dice to",player1)
                continue
            continue
       
    
        if random.choice(diceList) == 6:
            input(math6)
            if math7 == '144':
                player2money=player2money+10
                print("You won $10 dollars, well done!",player2,"Please pass the dice to",player1)
                continue
            continue
        
    
        if random.choice(diceList) == 7:
            input(math7)
            if math7 == '26':
                player2money=player2money+10
                print("You won $10 dollars, well done!",player2,"Please pass the dice to",player1)
                continue
            continue
        
    
        if random.choice(diceList) == 8:
            input(math8)
            if math8 == '24':
                player2money=player2money+10
                print("You won $10 dollars, well done!",player2,"Please pass the dice to",player1)
                continue
            continue
        
    
        if random.choice(diceList) == 9:
            input(math9)
            if math9 == '-6':
                player2money=player2money+10
                print("You won $10 dollars, well done!",player2,"Please pass the dice to",player1)
                continue
            continue
        
    
        if random.choice(diceList) == 10:
            input(math10)
            if math10 == '165':
                player2money=player2money+10
                print("You won $10 dollars, well done!",player2,"Please pass the dice to",player1)
                continue
            continue
        
    
        if random.choice(diceList) == 11:
            input(math11)
            if math11 == '5':
                player2money=player2money+10
                print("You won $10 dollars, well done!",player2,"Please pass the dice to",player1)
                continue
            continue
        
    
        if random.choice(diceList) == 12:
            input(math12)
            if math12 == '112':
                player2money=player2money+10
                print("You won $10 dollars, well done!",player2,"Please pass the dice to",player1)
                continue
            continue


print(player1,"has",player1money,"dollars and",player2,"has",player2money,"dollars")

time.sleep(3)

if player1money>player2money:
    print(player1,"wins!!")

elif player2money>player1money:
    print(player2,"wins!!")

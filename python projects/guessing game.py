#Guessing game
import random


Question = input ('Would you like to play a guessing game?: ')

counter=1

while answer=='yes':
    secretNum=random.randint(11,99)
    winNum=input('enter your guess number between 11 and 99')
    winNum=int(winNum)
    while winNum !=secretNum:
        counter=counter+1
        print ('sorry try again')
        if winNum<secretNum:
            print ('You are lower than the secret number')
        else:
            print ('you are higher than the secret number')
            
        winNum=input('enter your guess number between 11 and 99')
        winNum=int(winNum)
        

    else:
        print ('Congratulation you won the game after', counter, 'guessing')
        
    answer= input ('would you like to play a guessing game')
    counter=1

else:
    print ('Thank you for playing the game')

    

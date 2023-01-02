#Apisan Kaneshan and Thomas Papoulkas
#ICS2O, Mr. Kordbacheh
#11/04/2019
#Random Variable

#import time and random from python
import time
import random

#Ask the user for their name
Welcome=input("What is your name?")
print("Hello there",Welcome)
#Ask the user which game they want to play
game=input("Which game would you like to play? \nA)English Game \nB)Math Game \nC)Science Game \n").upper()

#If the user chooses the English game they play the English game
if game=="A":
    #Set the points value as 0 in the begining
    points=0
    #Identify the points as a decimal value
    points=float(points)
    #Explain the rules for the game
    print("This is the English game.\nYou will be given a sentence with a blank, then you will be given adjectives.\nYou must put the adjectives in the correct order into sentance.\nFor every correct answer you will receive one point, but for every wrong answer you will lose half a point.")
    #Make a list of questions for the user
    QuestionList=['He gave her a __________________ ring','The ________________ children are my cousins','The _____________ clouds promise a lot of rain','She wore a _________________ hat','I have __________________ pencils']
    #Make a list of words that is scrambled that the user must write in order later
    AnswerList=['big,shiny,diamond','three,red-haired,sweet','storm,black,scary','feathered,silly,yellow','twelve,wooden,small']
    print ("")
    #Give the user some time to read the instructions
    time.sleep(5)
    #Inform the user that the game is starting
    print("Let's start!")
    #Print the first question
    print(QuestionList[0])
    #Give the user the words they must write in the correct order
    print(AnswerList[0])
    #Ask the user to type thier answer and automatically make their input lowercase
    ans1=input("Please enter the adjectives shown in the correct order: ").lower()
    #If the answer is correct
    if ans1=='big,shiny,diamond' or ans1 == 'big shiny diamond':
        #Give the user a point
        points=points+1
        #Tell the user that they are correct
        print("You are correct! The sentance is: He gave her a big shiny diamond ring")
    #If the asnwer is wrong
    else:
        #Take away 0.5 points
        points=points-0.5
        #Tell the user they are wrong and show them the right answer
        print("You are not correct. The sentance is: He gave her a big shiny diamond ring")
    #Let the user read the response
    time.sleep(1.5)
    #Repeat this order for another four questions
    print("Next question:")
    time.sleep(1)
    print(QuestionList[1])
    print(AnswerList[1])
    ans2=input("Please enter the adjectives shown in the correct order: ").lower()
    if ans2=='three sweet red-haired' or ans2 == 'three,sweet,red-haired':
        points=points+1
        print("You are correct! The sentance is: The three sweet red-haired children are my cousins")
    else:
        points=points-0.5
        print("You are not correct. The sentance is: The three sweet red-haired children are my cousins")
    time.sleep(1.5)
    print("Next question:")
    time.sleep(1)
    print(QuestionList[2])
    print(AnswerList[2])
    ans3=input("Please enter the adjectives shown in the correct order: ").lower()
    if ans3=='scary black storm' or ans3 == 'scary,black,storm':
        points=points+1
        print("You are correct! The sentance is: The scary black storm clouds promise a lot of rain")
    else:
        points=points-0.5
        print("You are not correct. The sentance is: The scary black storm clouds promise a lot of rain")
    time.sleep(1.5)
    print("Next question:")
    time.sleep(1)
    print(QuestionList[3])
    print(AnswerList[3])
    ans4=input("Please enter the adjectives shown in the correct order: ").lower()
    if ans4=='silly yellow feathered' or ans4 == 'silly,yellow,feathered':
        points=points+1
        print("You are correct! The sentance is: She wore a silly yellow feathered hat")
    else:
        points=points-0.5
        print("You are not correct. The sentance is: She wore a silly yellow feathered hat")
    time.sleep(1.5)
    print("Next question:")
    time.sleep(1)
    print(QuestionList[4])
    print(AnswerList[4])
    ans5=input("Please enter the adjectives shown in the correct order: ").lower()
    if ans5=='twelve small wooden' or ans5 == 'twelve,small,wooden':
        points=points+1
        print("You are correct! The sentance is: I have twelve small wooden pencils")
    else:
        points=points-0.5
        print("You are not correct. The sentance is: I have twelve small wooden pencils")
    #At the end tell the user the amount of points they have
    print("You have",points,"points")
    #If the user has 2.5 or more points tell the user they pass
    if points >=2.5:
        print("You pass!")
    #If the user does not get 2.5 points we tell the user to practise and try again
    else:
        print("You did not do so well. Practise your adjective use some more and try again!")
    #Tell the user how to play again
    print("Please restart the program to play again!")
    
        
#Create if loop around the B game, when selected the following procedures will occur    
if game == "B":
    turn=1 #Create a turn number to give an ending to the game once completed
    turn=int(turn)
    point=0
    point=int(point)
    #Introduce user to the game with welcoming statements
    print("Welcome to the Math Game! We will give you a wheel. For every correct answer you will receive one point. For wrong answer you will lose half a point.")
    print("")
    O=input("Would you like to spin the wheel?")
    O.lower()
    print("")
    #Create a nested while loop with an "and" condition, which allows the game to run for exclusively 6 turns
    while O=="yes" and turn < 6:
        turn=turn+1
        Wheel=(1,2,3,4,5,6) #Create a tuple list
        ab=random.choice(Wheel)#Randomize the tuple list for a random order
        if ab==1: #Create "if" loops around the tuple number that is chosen, creating specific settings and conditions for the randomized numbers
            print ("You stumbled on the Wheel of Fortune!")
            print("")
            print ("Your question for this spin is:")
            print("")
            q1=input("What is 1x1?")
            if q1=="1": #Create a nested "if" loop to follow a set of conditions should the question above be answered correctly
                point=point+1 #Create a point system around the game, rewarding the player for giving correct answers, and punishing them if the answers are incorrect
                print("Congrats!")
                O=input("Would you like to spin the wheel?")
            else: #Create an "else" condition should the answer to the provided question be wrong
                point=point-0.5
                print("Oops, try again next time :)")
                O=input("Would you like to spin the wheel?")
#REPEAT THIS PROCESS FOR 6 DIFFERENT NUMBERS AS STATED IN THE TUPLE LIST
#ALL CONDITIONS STATED ABOVE APPLY TO THE ENTIRE GAME IN THIS SECTION
        if ab==2:
            print("You stumbled on the Deep Beginnings!")
            print("")
            print("Your question for this spin is:")
            print("")
            q2=input("What is 3x6?")
            if q2=="18":
                point=point+1
                print("Congrats!")
                O=input("Would you like to spin the wheel?")
            else:
                point=point-0.5
                print("Oops, try again next time :)")
                O=input("Would you like to spin the wheel?")
        if ab==3:
            print("You stumbled on Cursed Ending!")
            print("")
            print("Your question for this spin is:")
            print("")
            q3=input("What is 4x5÷2?")
            if q3=="10":
                point=point+1
                print("Well done! Considering this question took you some time.")
                O=input("Would you like to spin the wheel?")
            else:
                point=point-0.5
                print("Oops, try again next time :)")
                O=input("Would you like to spin the wheel?")
        if ab==4:
            print("You stumbled on Stable Road!")
            print("")
            print("Your question for this spin is:")
            print("")
            q4=input("What is 3+6x2?")
            if q4=="15":
                point=point+1
                print("Well done! Considering this is an intermediate question.")
                O=input("Would you like to spin the wheel?") 
            else:
                point=point-0.5
                print("Oops, try again next time :)")
                O=input("Would you like to spin the wheel?") 
        if ab==5:
            print("You stumbled on the Unity Bay!")
            print("")
            print("Your question is:")
            q5=input("What is 3/2x4")
            if q5=="6":
                point=point+1
                print("Congrats! You accomplished a difficult task.")
                O=input("Would you like to spin the wheel?") 
            else:
                point=point-0.5
                print("Oops, try again next time :)")
                O=input("Would you like to spin the wheel?") 
        if ab==6:
            print("You stumbled on the hardest destination yet, the Banner of Doom!")
            print("")
            print("Be warned, this will be extremely difficult. Should this be wrong, you lose the game.")
            print("")
            print("Your question is:")
            q6=input("What is 5^-1?")
            if q6=="0.2":
                point=point+1
                print("Wow, you truly have come a long way.")
                O=input("Would you like to spin the wheel?") 
            else:
                point=point-0.5
                print("I thought you had this.....") #Create statements that print should the player give an incorrect answer to the question provided.
                O=input("Would you like to spin the wheel?")
        
    if point >= 3: #Create an "if" loop condition with the total amount of points collected throughout game "B". These points collect with every question answered correctly, or incorrectly
        print("You have",point,"points.")
        print("You passed!")
    else:
        print("You have",point,"points.")
        print("You did not do so well. Practise some more and try again!")
    #Tell the user how to play again
    print("Please restart the program to play again!")

#Create a customized "if" loop condition, which will direct a specific set of instructions with randomized variables should it be chosen to commence
if game=="C":
    elemDict={1:'C',2:'H',3:'Ca'} #Create a dictionary which will be expanded and its contents extracted for an interactive and fun game with the user playing
    sciDict={'C':'carbon','H':'hydrogen','Ca':'calcium'}
    print("")
    print("Welcome to the Science Game!") #Introduce user to game "C" with welcoming statements
    print("Try your best to name the following elements:")

    elem1=input(elemDict[1]+":\n").lower() #Create input statements that require user to input a specific answer or option, continue this process 3 times as stated below
    if elem1==(sciDict['C']): #Create nested "if" loops around these input conditions. This process repeats three times throughout this program, to create a creative and fun game for the user in which they can play casually.
        print("")
        print("Great job! Now I'll ask you a question with Carbon:")
        elemq1=input("How many electrons does a regular carbon atom have?")
        if elemq1=="6" or elemq1=="six" or elemq1=="Six": #Create nested "if" conditions that are called when the initial if loop is chosen. This process repeats three times for each different input, and contains different conditions and questions to create an enganging experience for the user.
            print("Wow, you're a science wiz!")
        else:
            print("mm, not quite.")
#CONTINUE THE PROCESSES AS STATED IN THE COMMENTS ABOVE.
    elem2=input(elemDict[2]+":\n").lower()
    if elem2==(sciDict['H']):
        print("")
        print("Great job! Now I'll ask you a question with Hydrogen:")
        elemq2=input("What element number is hydrogen?")
        if elemq2=="first" or elemq2=="First" or elemq2=="1st" or elemq2=="1" or elemq2== "the first": #Create a nested "if" loop with or conditions to give specific preference
            print("You are getting pretty good.")
        else:
            print("I expected more....")

    elem3=input(elemDict[3]+":\n").lower()
    if elem3==(sciDict['Ca']):
        print("") #Create spaced lines to give a tidier look when the algorithm is ran
        print("Great job! Now I'll ask you a question with Calcium:")
        elemq3=input("What white drink has calcium and is good for your bones?")
        if elemq3=="milk" or elemq3=="Milk": #Create a nested "if" loop with or conditions, to give preference with lower case or upper case M
            print("KABOOM! You're done and are now a chemist!")
        else:
            print("You were so close...")
    #Tell the user how to play again
    print("Please restart the program to play again!")


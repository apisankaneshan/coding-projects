#Apisan Kaneshan
#ICS2O, Mr. Kordbacheh
#Date:03/04/2019
#Lotto 649

import random
import time

num1=random.randint(1,49)
num2=random.randint(1,49)
num3=random.randint(1,49)
num4=random.randint(1,49)
num5=random.randint(1,49)
num6=random.randint(1,49)

num1!=num2!=num3!=num4!=num5!=num6

name=input("Welcome to a lotto 649 application. Please enter your full name: ")
print("Hello",name," let us start.")
print("You will be able to choose 6 numbers between 1 to 49")
choice1=input("Please choose your first number between 1 and 49: ")
choice2=input("Please choose your second number between 1 and 49: ")
choice3=input("Please choose your third number between 1 and 49: ")
choice4=input("Please choose your fourth number between 1 and 49: ")
choice5=input("Please choose your fifth number between 1 and 49: ")
choice6=input("Please choose your last number between 1 and 49: ")
time.sleep(1)

print("The number you chose were: ",choice1,", ",choice2,", ",choice3,", ",choice4,", ",choice4," and ",choice6)
time.sleep(1)

print("The winning number are:")
time.sleep(2)
print (num1)
time.sleep(2)
print (num2)
time.sleep(2)
print (num3)
time.sleep(2)
print (num4)
time.sleep(2)
print (num5)
time.sleep(2)
print (num6)
time.sleep(2)

if num1 == (choice1 or choice2 or choice3 or choice4 or choice5 or choice6) and num2 == (choice1 or choice2 or choice3 or choice4 or choice5 or choice6) and num3 == (choice1 or choice2 or choice3 or choice4 or choice5 or choice6) and num4 == (choice1 or choice2 or choice3 or choice4 or choice5 or choice6) and num5 == (choice1 or choice2 or choice3 or choice4 or choice5 or choice6) and num6 == (choice1 or choice2 or choice3 or choice4 or choice5 or choice6):
    print("You win!")
else:
    print("You lose.")

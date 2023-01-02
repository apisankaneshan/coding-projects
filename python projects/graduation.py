#Apisan Kaneshan
#ICS2O, Mr. Kordbacheh
#11/04/2019
#Graduate Requirement

#I am importing time to slow things down and for organization
import time

#I am identifying the user number
user=0

#I am telling the program to allow 3 users
while user <3:
    #At the end of a trial I add 1 to user to move up the list
    user=user+1

    #I welcome the user
    print ("Hello, you are user number",user,". Today we are going to see if you have all the requirements to graduate.")
    name=input("Please enter your full name: ")
    feel=input ("Welcome "+name+" how are you today? ")

    #I tell the user what the program is about
    print("Today we are going to check if you are elligible to graduate.")
    time.sleep(1)

    #Explain what credits you need to graduate
    print("You need 30 credits to graduate.")
    time.sleep(1)

    print("4 credits must be English.")
    time.sleep(1)

    print("3 credits must be Math.")
    time.sleep(1)

    print("2 credits must be Science.")
    time.sleep(1)

    print("1 credit must be Canadian history.")
    time.sleep(1)

    print("1 credit must be Canadian geography.")
    time.sleep(1)

    print("1 credit must be an Art credit.")
    time.sleep(1)

    print("1 credit must be Health and Physical education.")
    time.sleep(1)

    print("1 credit must be French as a second language.")
    time.sleep(1)

    print("0.5 credit must be Career studies.")
    time.sleep(1)

    print("0.5 credit must be Civics.")
    time.sleep(1)

    print("The rest are Electives (your choice).")
    time.sleep(1)


    #Ask the user how many credits they have. If they do not have enough I tell them they can not graduate and start the next persons interveiw
    engQuestion=input("How many English credits do you have?: ")
    engQuestion=float(engQuestion)
    if engQuestion < 4:
        print("You can not graduate. Please come back after you get",4-engQuestion,"more English credits.")

        #mainly for organisation
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ")
        print(" ")
        print(" ")
        print(" ")

        #wait until the next user comes to start
        time.sleep(3)

        #restart the program for the next user
        continue

    mathQuestion=input("How many Math credits do you have?: ")
    mathQuestion=float(mathQuestion)
    if mathQuestion < 3:
        print("You can not graduate. Please come back after you get",3-mathQuestion,"more Math credits.")
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ")
        print(" ")
        print(" ")
        print(" ")
        time.sleep(3)
        continue


    sciQuestion=input("How many Science credits do you have?: ")
    sciQuestion=float(sciQuestion)
    if sciQuestion < 2:
        print("You can not graduate. Please come back after you get",2-sciQuestion,"more Science credits.")
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ")
        print(" ")
        print(" ")
        print(" ")
        time.sleep(3)

        #restart the program for the next user
        continue


    hisQuestion=input("How many Canadian history credits do you have?: ")
    hisQuestion=float(hisQuestion)
    if hisQuestion < 1:
        print("You can not graduate. Please come back after you get",1-hisQuestion,"more History credits.")
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ")
        print(" ")
        print(" ")
        print(" ")
        time.sleep(3)
        continue

    geoQuestion=input("How many Canadian geography credits do you have?: ")
    geoQuestion=float(geoQuestion)
    if geoQuestion < 1:
        print("You can not graduate. Please come back after you get",1-geoQuestion,"more Geography credits.")
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ")
        print(" ")
        print(" ")
        print(" ")
        time.sleep(3)
        continue

    artQuestion=input("How many Art credits do you have?: ")
    artQuestion=float(artQuestion)
    if artQuestion < 1:
        print("You can not graduate. Please come back after you get",1-artQuestion,"more Art credits.")
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ")
        print(" ")
        print(" ")
        print(" ")
        time.sleep(3)
        continue

    physQuestion=input("How many Health and Physical education credits do you have?: ")
    physQuestion=float(physQuestion)
    if physQuestion < 1:
        print("You can not graduate. Please come back after you get",1-physQuestion,"more Health and Physical education credits.")
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ")
        print(" ")
        print(" ")
        print(" ")
        time.sleep(3)
        continue


    freQuestion=input("How many French credits do you have?: ")
    freQuestion=float(freQuestion)
    if freQuestion < 1:
        print("You can not graduate. Please come back after you get",1-freQuestion,"more French credits.")
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ")
        print(" ")
        print(" ")
        print(" ")
        time.sleep(3)
        continue


    carQuestion=input("How many Career studies questions do you have?: ")
    carQuestion=float(carQuestion)

    #if a user makes a mistake by inputting 1, I help them fix it
    if carQuestion != 0.5:
        print("You can only have 0.5 Career credits.")
        carQuestion=input("How many Career studies questions do you have?: ")
        carQuestion=float(carQuestion)

    elif carQuestion < 0.5:
        print("You can not graduate. Please come back after you get your Career studies credit.")
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ")
        print(" ")
        print(" ")
        print(" ")
        time.sleep(3)
        continue



    civQuestion=input("How many Civics credits do you have?: ")
    civQuestion=float(civQuestion)
    if civQuestion != 0.5:
        print("You can only have 0.5 Civics credits.")
        civQuestion=input("How many Civics studies questions do you have?: ")
        civQuestion=float(civQuestion)

    elif carQuestion < 0.5:
        print("You can not graduate. Please come back after you get your Civics credit.")
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ")
        print(" ")
        print(" ")
        print(" ")
        time.sleep(3)
        continue



    elecQuestion=input("How many Elective course credits do you have?: ")
    elecQuestion=float(elecQuestion)

    totalCredits=(engQuestion+mathQuestion+sciQuestion+hisQuestion+geoQuestion+artQuestion+physQuestion+freQuestion+carQuestion+civQuestion+elecQuestion)
    
    print("In total you have ",totalCredits," credits.")
    time.sleep(1)

    
    #check if the user has at least 30 credits, if they dont they can not graduate and the next user can use the program
    if totalCredits < 30:
        print("You are not yet ready to graduate. Please come back after you have at least 30 credits.")
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ")
        print(" ")
        print(" ")
        print(" ")
        time.sleep(3)
        continue
    

    #ask the user how many volenteer hours they have
    print("You also need 40 volenteering hours.")
    volQuestion=input("How many volenteering hours do you have?: ")
    volQuestion=int(volQuestion)

    #if the user has less than 40 hours they can not graduate and the next user can use the program
    if volQuestion < 40:
        print("You are not yet ready to graduate. Please come back after you get at least 40 hours of volenteer hours.")
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ")
        print(" ")
        print(" ")
        print(" ")
        time.sleep(3)
        continue
    
        

    #ask the user if they passed the OSSLT, if yes they are congraulated and the next user can use the program
    print("You also need to pass the OSSLT (Ontario Secondary School Literacy Test)")
    ossltQuestion=input("Did you pass the OSSLT? Enter yes, if yes, enter no, if no.: ")
    if ossltQuestion == 'yes':
        print("Congradulations! You have all the essential items to graduate. I hope you have an amazing future.")
        print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ")
        print(" ")
        print(" ")
        print(" ")
        time.sleep(3)
        continue
    
    #if the user did not pass the OSSLT they can not graduate and the next user can use the program    
    elif ossltQuestion == 'no':
        print("You are not yet ready to graduate. Please come back after you pass the OSSLT.")
        print("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ")
        print(" ")
        print(" ")
        print(" ")
        time.sleep(3)
        continue
    

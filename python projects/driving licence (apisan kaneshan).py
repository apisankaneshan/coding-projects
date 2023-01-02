#Apisan Kaneshan
#ICS2O, Mr. Kordbacheh
#Date:01/04/2019
#Driving Licence

count = 1
while count <5:
    print ("You are applicant number ",count)
    age=input('How old are you?: ')
    age=int(age)
    if (age>=16 and age<=85):
        print('You can apply for the driving licence.')
        print('Have you passed the test? If yes press 1, if no press 2.')
        passTest=input()
        passTest=int(passTest)
        if passTest == 1:
            print('You can go for driving lessons.')
        else:
            print ('Take the test to get your licence.')
            
    elif age>85:
        print('You are too old to drive.')
        ageTest=input('You may drive again if you take a test. Have you taken the test? If yes press 1, if no press2: ')
        if ageTest == 1:
            agePass=input('Did you pass? If yes press 1, if no press 2')
            if agePass == 1 :
                print('You may drive')
            else:
                print('Try the test again.')
        else:
            print ('Try taking the test')
        

    elif age<16:
        print('you are too young to drive. Wait ',16-age,' more years to take the test.')
    print (" ")
    count=count+1 

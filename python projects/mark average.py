#Apisan Kaneshan
#ICS2O, Mr. Kordbacheh
#Date:03/04/2019
#Mark Average

#ask the user for thier full name
name=input("Hello, welcome to Apisan's program. Please enter your full name: ")

#welcome the user
print ("Welcome",name,"Let us start.")

#ask the user to answer the following questions
print(name, "can you please input the courses you are taking this semester in the following questions?")

#ask the user to input the courses they are taking this semester
course1=input("My first course this semester is: ")

course2=input("My second course this semester is: ")

course3=input("My third course this semester is: ")

course4=input("My fourth course this semester is: ")

#ask the user to input what the last two tests of each course was out of
print ("Great job! Now can you please enter what your last two tests were out of for each subject in the following?")

course1total=input("My first test for " +course1 +" was out of: ")
course1total=float(course1total)

course2total=input("My first test for "+course2+" was out of: ")
course2total=float(course2total)

course3total=input("My first test for "+course3+" was out of: ")
course3total=float(course3total)

course4total=input("My first test for "+course4+" was out of: ")
course4total=float(course4total)

course1Total=input("My second test for " +course1 +" was out of: ")
course1Total=float(course1Total)

course2Total=input("My second test for "+course2+" was out of: ")
course2Total=float(course2Total)

course3Total=input("My second test for "+course3+" was out of: ")
course3Total=float(course3Total)

course4Total=input("My second test for "+course4+" was out of: ")
course4Total=float(course4Total)

#ask the user to enter the marks they got for each test
print ("Thank you. Now can you please input the mark you received for each test in the following?")

course1mark=input("My mark for the first test in "+course1+" was: ")
course1mark=float(course1mark)

course2mark=input("My mark for the first test in "+course2+" was: ")
course2mark=float(course2mark)

course3mark=input("My mark for the first test in "+course3+" was: ")
course3mark=float(course3mark)

course4mark=input("My mark for the first test in "+course4+" was: ")
course4mark=float(course4mark)

course1Mark=input("My mark for the second test in "+course1+" was: ")
course1Mark=float(course1Mark)

course2Mark=input("My mark for the second test in "+course2+" was: ")
course2Mark=float(course2Mark)

course3Mark=input("My mark for the second test in "+course3+" was: ")
course3Mark=float(course3Mark)

course4Mark=input("My mark for the second test in "+course4+" was: ")
course4Mark=float(course4Mark)

#calculate the average of each test
course1average=((course1mark/course1total)*100)
course2average=((course2mark/course2total)*100)
course3average=((course3mark/course3total)*100)
course4average=((course4mark/course4total)*100)

course1Average=((course1Mark/course1Total)*100)
course2Average=((course2Mark/course2Total)*100)
course3Average=((course3Mark/course3Total)*100)
course4Average=((course4Mark/course4Total)*100)

#show the user their test marks
print ("Your percentage mark for the first",course1,"test was: ","{0:.2f}".format(course1average),"%")
print ("Your percentage mark for the first",course2,"test was: ","{0:.2f}".format(course2average),"%")
print ("Your percentage mark for the first",course3,"test was: ","{0:.2f}".format(course3average),"%")
print ("Your percentage mark for the first",course4,"test was: ","{0:.2f}".format(course4average),"%")

print ("Your percentage mark for the second",course1,"test was: ","{0:.2f}".format(course1Average),"%")
print ("Your percentage mark for the second",course2,"test was: ","{0:.2f}".format(course2Average),"%")
print ("Your percentage mark for the second",course3,"test was: ","{0:.2f}".format(course3Average),"%")
print ("Your percentage mark for the second",course4,"test was: ","{0:.2f}".format(course4Average),"%")

#show the overall average to the user
fullAverage=((course1average+course2average+course3average+course4average+course1Average+course2Average+course3Average+course4Average)/8)
print ("Your overall average for this semester is: ","{0:.2f}".format(fullAverage),"%")

#say goodbye to the user
print(name+", thank you for using Apisan's program. Have a great day!")

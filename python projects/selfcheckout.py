def main():
    
    print("*-*"*25)
    print("STORE FLYER\n")
    print("Apples: $1.23 each           |", "Oranges: $1.54 each")
    print("Grapes (per bag): $7.84 each |", "Strawberries: $3.97 per 1 pack")
    print("Bananas: $1.45 per bunch     |", "Okra: $4.62 per 1 pack")
    print("Carrots: $4.99 per 2 lbs bag |", "Onion: $2.02 each")
    print("*-*"*25,"\n")
    
  
    shopList = [] #assign the user a shopping cat. all puchases will be put into this list
    appleCost=0 #assign all friuts their initial checkout cost. I have to assume they have not purchased anything so if they choose not to buy an item the cost will be 0
    grapeCost=0
    bananaCost=0
    carrotCost=0
    orangeCost=0
    strawberryCost=0
    okraCost=0
    onionCost=0
    maxLengthList = 0 #maximun items on our menu is 8 so you can't really buy more things
    while maxLengthList <= 8: #limiting the customer to 8 purchases, (input once of each fruit)
        item = input("What item would you like to purchase?: ") #asking the user what they would like to buy
        
        if item == "apples": #basing the next steps in terms of the users input
            maxLengthList=maxLengthList+1 #adding 1 to the number of fruits the customer purchased (max is 8)
            apple=float(input("What quantity of the item do you want? ")) #ask the customer how many of the fruit they woud like
            appleCost=float(apple*1.23) #get a new cost for the fruit by mulitplying the quantity with the price of one
            a=str(apple)#convert floats into a string because easier to print later
            ac=str(appleCost)
            apple1=(" Apples $")#just to help show what they bought at the end
            shopList.append(a + apple1 + ac)
            
            
       #repeat all steps for apples for the opther fruits
        elif item == "grapes":
            maxLengthList=maxLengthList+1
            grape=float(input("What quantity of the item do you want? ")) 
            grapeCost=float(grape*7.84)
            g=str(grape)
            gc=str(grapeCost)
            grape1=(" Grapes $")
            shopList.append(g + grape1 + gc)
          

        elif item == "bananas":
            maxLengthList=maxLengthList+1
            banana=float(input("What quantity of the item do you want? ")) 
            bananaCost=float(banana*1.45)
            b=str(banana)
            bc=str(bananaCost)
            banana1=(" Bananas $")
            shopList.append(b + banana1 + bc)

        elif item == "carrots":
            maxLengthList=maxLengthList+1
            carrot=float(input("What quantity of the item do you want? ")) 
            carrotCost=float(carrot*4.99)
            c=str(carrot)
            cc=str(carrotCost)
            carrot1=(" Carrots $")
            shopList.append(c + carrot1 + cc)

        elif item == "oranges":
            maxLengthList=maxLengthList+1
            orange=float(input("What quantity of the item do you want? ")) 
            orangeCost=float(orange*1.54)
            ora=str(orange)
            orac=str(orangeCost)
            orange1=(" Oranges $")
            shopList.append(ora + orange1 + orac)

        elif item == "strawberries":
            maxLengthList=maxLengthList+1
            strawberry=float(input("What quantity of the item do you want? ")) 
            strawberryCost=float(strawberry*3.97)
            s=str(strawberry)
            sc=str(strawberryCost)
            strawberry1=(" Strawberries $")
            shopList.append(s + strawberry1 + sc)

        elif item == "okra":
            maxLengthList=maxLengthList+1
            okra=float(input("What quantity of the item do you want? ")) 
            okraCost=float(okra*4.62)
            ok=str(okra)
            okc=str(okraCost)
            okra1=(" Okra $")
            shopList.append(ok + okra1 + okc)

        elif item == "onions":
            maxLengthList=maxLengthList+1
            onion=float(input("What quantity of the item do you want? ")) 
            onionCost=float(onion*2.02)
            on=str(onion)
            onc=str(onionCost)
            onion1=(" Onions $")
            shopList.append(on + onion1 + onc)

        elif item == "checkout": #when customer types checkout
            maxLengthList=9 #this is now greater than 8 so the program knows not to ask the user what they want after running code below
            totalCost=(appleCost+grapeCost+carrotCost+orangeCost+strawberryCost+okraCost+onionCost) #add the costs of everything they purchased
            TotalRoundedCost=round(totalCost,2) #rounding the cost to two decimal places
            tc=str(TotalRoundedCost) #converting rounded price into string because easier to print later
            totalcosttax=(totalCost*1.130) #finding the price after tax
            TotalRoundedTax=round(totalcosttax,2) #rounding the cost to two decimal places
            tct=str(TotalRoundedTax) #converting rounded price into string because easier to print later
            toC=("TOTAL COST (BEFORE TAX): $") #assigning text to a variable so its easier to print later
            toaC=("TOTAL COST (AFTER TAX 13%): $")
            print("")
            print("CUSTOMER RECEIPT")
            print("")
            print(shopList[:1]) #print each item they buy on a seperate line
            print(shopList[1:2])
            print(shopList[2:3])
            print(shopList[3:4])
            print(shopList[4:5])
            print(shopList[5:6])
            print(shopList[6:7])
            print(shopList[7:8])
            print("")
            print(toC+tc) #show the customer their price before tax
            print(toaC+tct) #show the customer their price after tax

        else:
            print("Sorry, that item is currently not available!" ) #if customer gives input thats not on the menu they have to give something that is on the menu
        

    


            


main() #DO NOT DELETE THIS LINE
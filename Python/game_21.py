#module for generating random numbers
import random as rand

#function for the game
def Game_21():
    Player = []
    Computer = []

    #generating the card values
    for i in range(2):
        Player.append(rand.randrange(0,10))
    for i in range(3):
        Computer.append(rand.randrange(0,10))

    #confirm if user needs an extra card
    affirm = input("Do you wish to pick another card?(Y or N)")

    if affirm == 'Y':
        Player.append(rand.randrange(0,10))
    else:
        pass

    #displays their cards
    print("\n")
    print("SCOREBOARD:")
    print("Player's cards:" , Player)
    print("Computer's Cards:", Computer)

    #sums the card values
    player_sum =sum(Player)
    comp_sum = sum(Computer)

    #prints the winner of the round
    print("\n")
    print("ROUND RESULT:")
    if player_sum > comp_sum and player_sum <= 21:
        print("Player wins round")
        Winner_status = "Player"
    elif comp_sum  > player_sum and comp_sum <= 21:
        print("Computer wins round")
        Winner_status = "Computer"
    else:
        print("It is a tie")
        Winner_status = "Tie"

    print("\n")

    #asks user for replay
    conclude = input("Do you wish to play again?")

    return conclude, Winner_status


#the main function
if __name__ == "__main__":
    #global variables
    PlayerWins = 0
    ComputerWins = 0
    round = 1

    #prints round
    print("============================================ ")
    print("Round", round)
    print("============================================ \n")

    #fetches the winner of previous round and opinion on replay
    conclude, Winner = Game_21()

    #accumulates the points
    if (Winner == "Player"):
        PlayerWins += 1
    elif (Winner == "Computer"):
        ComputerWins += 1

    while conclude != "N":
        #increments the round
        round+=1
        # prints round
        print("============================================ ")
        print("Round", round)
        print("============================================ \n")
        # fetches the winner of previous round and opinion on replay
        conclude, Winner = Game_21()
        # accumulates the points
        if (Winner == "Player"):
            PlayerWins += 1
        elif(Winner == "Computer"):
            ComputerWins += 1
        continue

    #end of game
    print("\n")
    print("++++++++++++++++++++++++++++++++++++++++++++ ")
    print("GAME OVER")
    print("++++++++++++++++++++++++++++++++++++++++++++ \n")


    print("FINAL SCOREBOARD:")
    #prints the final scores
    print("Computer: ", ComputerWins, "points")
    print("Player:" , PlayerWins, "points")

    print("\n")
    #checks the overall winner
    if PlayerWins > ComputerWins:
        print("Player Won")
    elif PlayerWins < ComputerWins:
        print("Computer Won")
    else:
        print("Its a tie")
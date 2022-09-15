def pizzamaker(*toppings):
    print("enter the toppings that you want. If you wish to stop adding toppings press '#'")
    toppingslist = []
    while(toppings!='#'):
        toppings = input()
        toppingslist.append(toppings)
    
    toppingslist.pop()
    print(toppingslist)

pizzamaker()
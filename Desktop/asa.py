def suma(num1,num2):
    x=0
    y=0
    p=0
    while num1!=0:
        a=num1%10
        if a!=0:
            x=x+(a*(10**p))
            p=p+1
            num1=num1//10
        else:
            num1=num1//10
    print(x)
    p=0
    while num2!=0:
        a=num2%10
        if a!=0:
            y=y+(a*(10**p))
            p=p+1
            num2=num2//10
        else:
            num2=num2//10
    print(y)
    print(x+y)

marks = int (input('Enter your marks: '))

if 90 <= marks <= 100:
    print("Grade = A")
elif marks >=80 :
    print("Grade = B")
elif marks >=70 :
    print("Grade = C")
elif marks >=60 :
    print("Grade = D")
elif marks >=50 :
    print("Grade = E")
elif marks <=50  :
    print("Grade = F")
else :
    print("Enter valid marks")
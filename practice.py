print("Rakshit")
#Varaibles are electronic containers that store data. They can hold different types of data such as numbers, text, and more.
age = 24
name = "Rakshit"
print(age)
print(name)
#Interpretor is a program that executes instructions written in a programming language. It reads the code line by line and performs the specified operations. In Python, the interpreter allows you to run your code and see the results immediately.
print(type(name))
a=19
b=80
print(a<b)

list = ["word", "python", "programming"]

print(list[2])
list[1]

list_items = ["Rakshit", 24, "Python", 3.14, True]
list_items.insert(2, "Programming")
print(list_items)
list_items.append("New Item")
list_items.remove(3.14)
print(list_items)
print(list_items.index(24))
list_items.append("Python")
print(list_items)
print(list_items)
#create new list with numbers
numbers = [1, 2, 3, 4, 5]
#create a tuple
my_tuple = ("Rakshit", 24, "Python")
print(my_tuple)
my_tuple.index("Python")
my_tuple.count(24)

type(my_tuple)
#nexted list
nested_list = [1, 2, [3, 4], 5]
print(nested_list[2][0])  # Accessing the first element of the nested list
#ceate dictoniary
my_dict = {"name": "Rakshit", "age": 24, "language": "Python"}
print(my_dict["name"])
my_dict["age"] = 24
print(my_dict)
#Nested Dictionariess
#working wiht sets:
my_set = {1, 2, 3, 4, 5}
type(my_set)
my_set.add(6)
print(my_set)


#Comnditionla statements

age = int(input("Enter your age: "))
if age>=18:
    print("You are an adult.") 
else:
    print("You are a minor.") 

a  = int(input("Enter first number: "))
b= int(input("Enter second number: "))
c= int(input("Enter third number: "))
if a > b and a > c:
    print("a is the largest number.")
elif b > a and b > c:
    print("b is the largest number.")
else:
    print("c is the largest number.")

#Nested Condtional statements
#invloves if sttement in another if statement
if a>b:
  if b>c or a>c:
    print("a is the largest number.")

#looping statements


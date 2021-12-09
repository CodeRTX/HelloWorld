import random

lower="abcdefghijklmnopqrstuvwxyz"
upper=lower.upper()
number="0123456789"
symbol="!@#$%^&*()[]{};':,./<>?\|~`+="
all=lower+upper+number+symbol
len=8
password="".join(random.sample(all,len))
print("The Password you generated is: ",password)

import re
f=open("train.txt", "r")
train_name=[]
station_name=[]
for i in f:
    i1=i.index(",")
    train_name.append(i[0:i1])
    i2=i.rindex(",")
    station_name.append(i[i1+1:])
for item in zip(train_name,station_name):
    print(item[0],"   ",item[1])
    f.close()
    
f=open("train.txt", "r")
x=input("enter station name:")
for i in f:
    if x in i:
        s=re.match(r"\w*",i)
        print(s.group(0))

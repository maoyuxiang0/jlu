##有一个函数，内置小于1000的正整数
##函数将获得的参数与函数内整数比较
##返回结果为高了，低了，猜到了
def f(x):
    b=6
    if x<b:
        return ("低了")
    elif x==b:
        return ("猜对了")
    else:
        return ("高了")
a=i=1
for i in range(1001):
    if f(a)=="猜对了":
        print("要猜的数是{}".format(a))#如何穿插中文
        break
    else:
        a+=1
        
    

##共享单车规则
##1.起步费：前30分钟2元
##2.超过30min，每增加15分钟加收1元，不足15分钟按15分钟算
##3.单日封顶
print("请输入骑行时间：")
t=input()
t=int(t)
i=2
if 0<=int(t)<=30:
    print("骑行费用为：")
    print(i)
else:
    while t>30 and i<20:
        i+=1
        t=t-15
    print("骑行费用为：")
    print(i)

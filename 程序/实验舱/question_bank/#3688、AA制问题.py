# 从输入得到顾客人数，并将其赋给 `total_friends` 变量
total_friends = (int)(input())
# 从输入得到总账单数值，并将其分配给 `total_bill` 变量
total_bill = (int)(input())
# 在账单小计上加上20%的税
total_bill *= 1.2
# 将账单总额均摊给顾客
total_bill = total_bill / total_friends
# 打印结果
print(total_bill)
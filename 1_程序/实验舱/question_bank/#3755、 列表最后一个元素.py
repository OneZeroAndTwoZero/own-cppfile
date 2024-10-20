def last_element(my_list):
    return my_list[len(my_list) - 1]
    # 在此处编写代码

# 获取整数输入，并将其转换为列表
input_list = list(map(int, input().split()))

# 调用函数
print(last_element(input_list))
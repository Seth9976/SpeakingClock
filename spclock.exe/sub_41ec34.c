// 函数: sub_41ec34
// 地址: 0x41ec34
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
char eax_1 = sub_41fbb4(ecx)
int32_t result

if (eax_1 == 2)
    char result_1
    sub_41e04c(arg1, &result_1, 1)
    result = sx.d(result_1)
else if (eax_1 == 3)
    int16_t result_2
    sub_41e04c(arg1, &result_2, 2)
    result = sx.d(result_2)
else if (eax_1 == 4)
    sub_41e04c(arg1, &result, 4)
else
    sub_41da5c()

return result

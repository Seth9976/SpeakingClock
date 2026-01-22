// 函数: sub_42005c
// 地址: 0x42005c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = arg3
result = sub_41df78(arg1, *(arg1 + 0x18), arg2)

if (result == 0 && *(arg1 + 0x1c) != 0 && *(arg1 + 0x1c) != *(arg1 + 0x18))
    result = sub_41df78(arg1, *(arg1 + 0x1c), arg2)

if (*(arg1 + 0x6a) != 0)
    *(arg1 + 0x6c)
    (*(arg1 + 0x68))(&result)

if (result == 0)
    sub_419554(arg2)
else if (sub_403e94(result, &data_418674) == 0)
    sub_419554(arg2)

return result

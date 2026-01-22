// 函数: sub_41d0ac
// 地址: 0x41d0ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = arg3

if (*arg2 s> 0 && *arg2 != *(arg1 + 8))
    *arg2 = (*arg2 + 0x1fff) & 0xffffe000

result = *(arg1 + 4)
int32_t edx_5 = *(arg1 + 0x10)

if (*arg2 != edx_5)
    if (*arg2 != 0)
        int32_t edx_6
        
        if (edx_5 != 0)
            sub_402edc(&result, *arg2)
        else
            int32_t result_1
            result_1, edx_6 = sub_402ea8(*arg2)
            result = result_1
        
        if (result == 0)
            edx_6.b = 1
            sub_40451c(sub_40cf6c(sub_41715c+0x48, edx_6, data_4ac464))
    else
        sub_402ec4(*(arg1 + 4))
        result = 0

return result

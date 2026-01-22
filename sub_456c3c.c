// 函数: sub_456c3c
// 地址: 0x456c3c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result_1
int32_t arg_8
int32_t result = sub_45950c(arg1, &arg_8, &result_1)

if (result.b != 0)
    if (arg2 == arg1[0x10] && arg3 == arg1[0x11] && arg_8 == arg1[0x12])
        result = result_1
    
    if (arg2 != arg1[0x10] || arg3 != arg1[0x11] || arg_8 != arg1[0x12] || result != arg1[0x13])
        sub_457c5c(arg1, *(arg1 + 0x57), 0)
        arg1[0x10] = arg2
        arg1[0x11] = arg3
        arg1[0x12] = arg_8
        arg1[0x13] = result_1
        sub_456cdc(arg1)
        sub_45a538(arg1)
        (*(*arg1 + 0x80))()
        sub_458ac8(arg1, 0)
        result = (*(*arg1 + 0x5c))()
        
        if ((arg1[7].b & 1) == 0)
            int32_t esi
            esi.w = 0xffcf
            return sub_403e64(arg1, esi)

return result

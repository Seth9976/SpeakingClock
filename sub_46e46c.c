// 函数: sub_46e46c
// 地址: 0x46e46c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
int32_t var_8 = esi

if (sub_403df4(arg2, 0x4529a0) != 0)
    return sub_45ff14(arg3, arg2)

void* var_18_1 = arg3 - sub_45b7f4(arg1)
BOOL result_1 = 0xffffffff
BOOL result = sub_423974(arg1)

if (result - 1 s>= 0)
    int32_t ebx_3 = result
    int32_t edi_1 = 0
    int32_t i
    
    do
        esi.w = 0xfff1
        result = sub_403e64(sub_423948(arg1, edi_1), esi)
        
        if (result.b == 0)
            result_1 += 1
            result = result_1
            
            if (result == var_18_1)
                return sub_423984(arg2, edi_1)
        
        edi_1 += 1
        i = ebx_3
        ebx_3 -= 1
    while (i != 1)

return result

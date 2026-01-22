// 函数: sub_45ef10
// 地址: 0x45ef10
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* edi = *(arg2 + 8)
uint32_t result = zx.d(*(arg2 + 4))
char temp0 = result.b
result.b -= 4

if (temp0 u>= 4)
    char temp1_1 = result.b
    result.b -= 1
    
    if (temp1_1 == 1)
        int32_t var_18
        sub_457310(arg1, edi, &var_18)
        result = sub_45c698(0, arg1, 0, 0)
        *(arg2 + 0xc) = result
        
        if (result == 0)
            *(arg2 + 0xc) = arg1
else if (edi[3] != 0)
    return sub_458520(edi[3], arg2)

return result

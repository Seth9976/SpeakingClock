// 函数: sub_4147c8
// 地址: 0x4147c8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_c = arg3
uint32_t eax = zx.d(*arg2)

if (eax s> 0xd)
    if (eax == 0x101)
        return sub_414750(arg1, arg2)
    
    if (eax == 0x4009 || eax == 0x400d)
        return sub_406568(arg1, **(arg2 + 8))
    
    goto label_41484e

if (eax == 0xd)
    return sub_406568(arg1, *(arg2 + 8))

int32_t* result

if (eax u< 1)
    result = arg1
    sub_406550(result)
else if (eax == 1)
    if (data_4aaa10 != 0)
        arg2.w = 0xd
        int32_t eax_1
        eax_1.w = 1
        sub_40ff78(eax_1.w, arg2.w)
    
    result = arg1
    sub_406550(result)
else
    if (eax == 9)
        return sub_406568(arg1, *(arg2 + 8))
    
label_41484e:
    char eax_10
    int16_t* ebx_1
    int32_t* esi_1
    eax_10, ebx_1, esi_1 = sub_415ce4(*arg2, &var_c)
    
    if (eax_10 != 0)
        sub_406550(esi_1)
        result = sub_403d1c(var_c, 0x414884, esi_1)
    
    if (eax_10 == 0 || result.b == 0)
        return sub_40ff78(*ebx_1, 0xd)

return result

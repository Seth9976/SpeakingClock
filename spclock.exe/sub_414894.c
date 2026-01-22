// 函数: sub_414894
// 地址: 0x414894
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_c = arg3
int16_t eax = *arg2
int32_t* result

if (eax u< 1)
    result = arg1
    sub_406550(result)
else if (eax == 1)
    if (data_4aaa10 != 0)
        arg2.w = 9
        sub_40ff78(1, arg2.w)
    
    result = arg1
    sub_406550(result)
else
    if (eax == 9)
        return sub_406568(arg1, *(arg2 + 8))
    
    if (eax == 0x4009)
        return sub_406568(arg1, **(arg2 + 8))
    
    char eax_4
    int16_t* ebx_1
    int32_t* esi_1
    eax_4, ebx_1, esi_1 = sub_415ce4(*arg2, &var_c)
    
    if (eax_4 != 0)
        sub_406550(esi_1)
        result = sub_403d1c(var_c, 0x414930, esi_1)
    
    if (eax_4 == 0 || result.b == 0)
        return sub_40ff78(*ebx_1, 9)

return result

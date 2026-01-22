// 函数: sub_477140
// 地址: 0x477140
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* edi = nullptr
char var_18 = 1
int32_t result = sub_477268(arg3, arg2.w, arg1, &var_18)

if (result.b == 0)
    edi = *(data_4b1ce4 + 0x68)
    
    if (edi != 0 && (edi[7].b & 0x10) != 0)
        var_18 = 0
    
    if (edi != 0 && sub_45fac0(edi) == 0xffff && *(edi + 0x57) == 0 && edi[0x9a] == 0)
        var_18 = 0

if (var_18 != 0)
    char eax_6
    
    if (edi != 0)
        eax_6 = sub_45fc28(edi)
    
    if (edi != 0 && eax_6 != 0 && edi[0xa1] != 0)
        int32_t var_14_1 = sub_45f888(edi)
        
        if (sub_477a48(arg1) != 0)
            edi[0xa1]
            return (*(**(arg1 + 0x4c) + 0x20))(arg3, arg2)
    else if (*(arg1 + 0x50) != 0)
        int32_t var_14_2 = *(arg1 + 0x30)
        int32_t* eax_15 = *(arg1 + 0x44)
        
        if (eax_15 != 0)
            var_14_2 = sub_45f888(eax_15)
        
        if (sub_477a48(arg1) != 0)
            *(arg1 + 0x50)
            return (*(**(arg1 + 0x4c) + 0x20))(arg3, arg2)
    else if (*(arg1 + 0xac) == 0)
        PostMessageA(*(arg1 + 0x30), 0xb01f, zx.d(arg2.w), arg3)

return result

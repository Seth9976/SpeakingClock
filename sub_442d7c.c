// 函数: sub_442d7c
// 地址: 0x442d7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1[0x17].b != 0 && sub_42ea34(arg1[0x66]) s> 0 && sub_42ea4c(arg1[0x66]) s> 0)
    int32_t eax_5 = sub_42ea34(arg1[0x66])
    int32_t eax_7 = sub_42ea4c(arg1[0x66])
    arg1[0x11]
    arg1[0x10]
    (*(*arg1 + 0x88))(eax_7, eax_5)

int32_t* ebx_2 = *(arg1[0x66] + 0xc)
int32_t result

if (ebx_2 == 0)
    result = 0xffffffbf & arg1[0x14]
    arg1[0x14] = result
else
    if (sub_403df4(ebx_2, &data_42a100) == 0 && sub_403df4(ebx_2, 0x42a38c) == 0)
        *(arg1 + 0x1ab)
        (*(*ebx_2 + 0x3c))()
    
    int32_t var_18
    sub_442904(arg1, &var_18)
    int32_t var_14
    int32_t var_10
    int32_t var_c
    
    if ((*(*ebx_2 + 0x28))() != 0 || var_18 s> 0 || var_14 s> 0 || var_10 s< arg1[0x12]
            || var_c s< arg1[0x13])
        arg1[0x14] &= 0xffffffbf
    else
        arg1[0x14] |= 0x40
    
    result = sub_442c04(arg1)
    
    if (result.b != 0 && arg1[0x6b].b != 0)
        result = (*(*arg1 + 0x8c))()

if (arg1[0x6b].b != 0)
    return result

return (*(*arg1 + 0x80))()

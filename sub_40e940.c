// 函数: sub_40e940
// 地址: 0x40e940
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result
result.b = 1
uint32_t eax = GetCurrentThreadId()

if (eax != *(arg1 + 0x24))
    sub_40e8fc(arg1)
    int32_t var_14 = *(arg1 + 0x28)
    int32_t* var_18
    sub_40e774(*(arg1 + 0x20), &var_18)
    result.b = var_18[3] u> 0
    
    if (result.b != 0)
        sub_40e6d8(arg1 + 0xc)
    
    while (sub_40e6f8(arg1 + 0xc, 0xffff0001) != 0xffff)
        if (sub_40e6f8(arg1 + 0xc, 0xffff) != 0)
            sub_40e930(arg1)
    
    sub_40e8fc(arg1)
    
    if (result.b != 0)
        sub_40e6e4(arg1 + 0xc)
    
    *(arg1 + 0x24) = eax
    result.b = sub_40e6d8(arg1 + 0x28) - 1 == var_14

*(arg1 + 0x1c) += 1
return result

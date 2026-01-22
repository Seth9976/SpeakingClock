// 函数: sub_40ea3c
// 地址: 0x40ea3c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_10 = arg3
sub_40e774(*(arg1 + 0x20), &var_10)
int32_t* eax_1 = var_10
eax_1[3] += 1
int32_t ebx
ebx.b = var_10[3] u> 1
uint32_t result = GetCurrentThreadId()

if (result != *(arg1 + 0x24) && ebx.b == 0)
    sub_40e920(arg1)
    
    while (true)
        result = sub_40e6e4(arg1 + 0xc)
        
        if (result s> 0)
            break
        
        if (sub_40e6d8(arg1 + 0xc) == 0xffff)
            sub_40e914(arg1)
        
        Sleep(0)
        sub_40e920(arg1)

return result

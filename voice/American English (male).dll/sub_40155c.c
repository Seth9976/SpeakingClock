// 函数: sub_40155c
// 地址: 0x40155c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t lpAddress_1 = 0xffffffff
int32_t var_18 = 0
int32_t* i_1

for (int32_t* i = data_4145e4; i != &data_4145e4; i = i_1)
    i_1 = *i
    int32_t lpAddress = i[2]
    
    if (arg1 u<= lpAddress && lpAddress + i[3] u<= arg2 + arg1)
        if (lpAddress u< lpAddress_1)
            lpAddress_1 = lpAddress
        
        int32_t eax_5 = lpAddress + i[3]
        
        if (eax_5 u> var_18)
            var_18 = eax_5
        
        if (VirtualFree(lpAddress, 0, MEM_RELEASE) == 0)
            data_4145c0 = 1
        
        sub_401364(i)

int32_t* result = arg3
*result = 0

if (var_18 != 0)
    *arg3 = lpAddress_1
    result = var_18 - lpAddress_1
    arg3[1] = result

return result

// 函数: sub_4016a8
// 地址: 0x4016a8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* var_14 = arg3
int32_t lpAddress_1 = (arg1 + 0xfff) & 0xfffff000
int32_t ebp_2 = (arg1 + arg2) & 0xfffff000
*arg3 = lpAddress_1
BOOL result = ebp_2 - lpAddress_1
arg3[1] = result

for (void** i = data_4145e4; i != &data_4145e4; i = *i)
    int32_t lpAddress = i[2]
    int32_t edi_2 = i[3] + lpAddress
    
    if (lpAddress u< lpAddress_1)
        lpAddress = lpAddress_1
    
    if (ebp_2 u< edi_2)
        edi_2 = ebp_2
    
    if (edi_2 u> lpAddress)
        result = VirtualFree(lpAddress, edi_2 - lpAddress, MEM_DECOMMIT)
        
        if (result == 0)
            data_4145c0 = 2

return result

// 函数: sub_401614
// 地址: 0x401614
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t lpAddress_1 = arg1 & 0xfffff000
int32_t edx_3 = (arg1 + arg2 + 0xfff) & 0xfffff000
*arg3 = lpAddress_1
int32_t* result = edx_3 - lpAddress_1
arg3[1] = result

for (void** i = data_4145e4; i != &data_4145e4; i = *i)
    int32_t lpAddress = i[2]
    int32_t edi_2 = i[3] + lpAddress
    
    if (lpAddress_1 u> lpAddress)
        lpAddress = lpAddress_1
    
    if (edi_2 u> edx_3)
        edi_2 = edx_3
    
    if (edi_2 u> lpAddress)
        result = VirtualAlloc(lpAddress, edi_2 - lpAddress, MEM_COMMIT, PAGE_READWRITE)
        
        if (result == 0)
            result = arg3
            *result = 0
            break

return result

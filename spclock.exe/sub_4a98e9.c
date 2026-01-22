// 函数: sub_4a98e9
// 地址: 0x4a98e9
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*(arg3 + 0x73) += arg2.b
*(arg2 + 0x61)
int32_t* esp = *(arg2 + 0x61) * 0x72
bool c = unimplemented  {imul esp, dword [edx+0x61], 0x72}
int32_t* result

if (c)
    result = sbb.d(arg1, 0x7301004b, c)
    int16_t cs
    *(esp - 4) = zx.d(cs)
else
    *esp
    int32_t ebp_1 = esp[2]
    void* ebx_1 = esp[4]
    esp[5]
    esp[6]
    result = esp[7]
    int32_t entry_ebx
    
    if (entry_ebx != 0xffffffff)
        TEB* fsbase
        *(fsbase + result) += result.b
        esp[7] = ebp_1
        esp[6] = &esp[7]
        esp[5] = j_sub_40443c
        esp[4] = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &esp[4]
        int32_t temp2 = data_4b1dc4
        data_4b1dc4 -= 1
        
        if (temp2 u< 1)
            int32_t edx
            edx.b = 1
            data_4b1dc8 = sub_4a06a8(0x49ff88, edx)
            int32_t* eax_2 = data_4b1dc8 + 0x44
            int32_t ecx_1 = sub_406550(eax_2)
            data_4b1dcc
            sub_425224(ecx_1, eax_2)
        
        esp[6]
        fsbase->NtTib.ExceptionList = esp[4]
        esp[6] = sub_4a9955
        return 0
    
    *(ebx_1 + 0xe) += esp[1]

if (data_4abe30 == 0)
    return result

return sub_4a094c()

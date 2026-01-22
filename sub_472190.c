// 函数: sub_472190
// 地址: 0x472190
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_10 = ecx

if ((arg1[7].b & 2) == 0 && *(arg1 + 0x272) != 0)
    void* edi_2 = *(arg2 + 8)
    void* eax = arg1[0x1d]
    int32_t ecx_1 = *(eax + 0x14)
    
    if (ecx_1 u> 0)
        *(edi_2 + 0x18) = ecx_1
    
    int32_t ecx_2 = *(eax + 0x10)
    
    if (ecx_2 u> 0)
        *(edi_2 + 0x1c) = ecx_2
    
    int32_t ecx_3 = *(eax + 0xc)
    
    if (ecx_3 u> 0)
        *(edi_2 + 0x20) = ecx_3
    
    int32_t ecx_4 = *(eax + 8)
    
    if (ecx_4 u> 0)
        *(edi_2 + 0x24) = ecx_4
    
    (*(*arg1 + 0x38))(edi_2 + 0x24, edi_2 + 0x20)

return (*(*arg1 - 0x10))(arg2)

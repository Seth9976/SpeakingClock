// 函数: sub_482258
// 地址: 0x482258
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg1
var_8:3.b = arg1.b
void* eax = *(arg2 + 0x2b0)

if (*(eax + 8) != 0)
    int32_t edx
    int32_t edi_1 = sub_41a150(eax, edx)
    
    if (edi_1 == 0xffffffff)
        if (var_8:3.b == 0)
            edi_1 = 0
        else
            edi_1 = *(*(arg2 + 0x2b0) + 8) - 1
    
    int32_t ebx_1 = edi_1
    
    do
        if (var_8:3.b == 0)
            if (ebx_1 == 0)
                ebx_1 = *(*(arg2 + 0x2b0) + 8)
            
            ebx_1 -= 1
        else
            ebx_1 += 1
            
            if (ebx_1 == *(*(arg2 + 0x2b0) + 8))
                ebx_1 = 0
        
        void* const result = sub_41a0f4(*(arg2 + 0x2b0), ebx_1)
        
        if (arg3 == 0 || *(result + 0x258) != 0)
            return result
    while (edi_1 != ebx_1)

return nullptr

// 函数: sub_41e328
// 地址: 0x41e328
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
var_8:1.b = arg2
var_8:2.w = arg1
uint32_t result = sub_405cb0(*(arg3 - 4))

if (result - 1 s>= 0)
    int32_t esi_2 = result
    int32_t ebx_1 = 0
    int32_t i
    
    do
        if (var_8:1.b == 0)
            void* edi_2 = *(*(arg3 - 4) + (ebx_1 << 2))
            result.w = not.d(zx.d(var_8:2.w)).w & *(edi_2 + 0x1c)
            *(edi_2 + 0x1c) = result.w
        else
            void* edi_1 = *(*(arg3 - 4) + (ebx_1 << 2))
            result.w = *(edi_1 + 0x1c) | var_8:2.w
            *(edi_1 + 0x1c) = result.w
        
        ebx_1 += 1
        i = esi_2
        esi_2 -= 1
    while (i != 1)

return result

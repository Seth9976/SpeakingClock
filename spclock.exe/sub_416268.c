// 函数: sub_416268
// 地址: 0x416268
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esi = arg1
int32_t ecx
ecx.b = *(arg1 + 1)
__builtin_memset(arg2, 0, zx.d(*(esi + ecx + 0xa)) << 2)
uint32_t result

while (true)
    int32_t ecx_2
    ecx_2.b = *(esi + 1)
    void* esi_1 = esi + ecx_2 + 2
    ecx_2.b = *(esi_1 + 0xa)
    result = zx.d(*(esi_1 + ecx_2 + 0xb))
    
    if (result != 0)
        void* edi_1 = esi_1 + ecx_2 + 0xd
        uint32_t i
        
        do
            uint32_t ebx_1 = zx.d(*(edi_1 + 0x18))
            ecx_2.b = *(edi_1 + 0x1a)
            
            if (*(arg2 + (ebx_1 << 2)) == 0)
                *(arg2 + (ebx_1 << 2)) = edi_1
            
            edi_1 = edi_1 + ecx_2 + 0x1b
            i = result
            result -= 1
        while (i != 1)
    
    void** esi_2 = *(esi_1 + 4)
    
    if (esi_2 == 0)
        break
    
    esi = *esi_2

return result

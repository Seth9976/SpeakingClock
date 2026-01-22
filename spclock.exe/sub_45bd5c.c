// 函数: sub_45bd5c
// 地址: 0x45bd5c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
var_8:3.b = 1
void* ebx = *(*(arg1 - 4) + 0x20)
char eax_5

if (ebx != 0)
    eax_5 = sub_45bd48(*(arg1 - 8) + 0x242, ebx + 0x242)

if (ebx == 0 || eax_5 == 0)
    void* eax_8 = *(*(arg1 - 8) + 0x1cc)
    
    if (eax_8 != 0)
        int32_t ebx_2 = *(eax_8 + 8) - 1
        
        if (ebx_2 s>= 0)
            int32_t i_2 = ebx_2 + 1
            int32_t esi_1 = 0
            int32_t i
            
            do
                void* eax_12 = sub_41a0f4(*(*(arg1 - 8) + 0x1cc), esi_1)
                
                if (*(eax_12 + 0x5b) == 0 && 3 != *(eax_12 + 0x61))
                    return zx.d(var_8:3.b)
                
                esi_1 += 1
                i = i_2
                i_2 -= 1
            while (i != 1)
    
    void* eax_15 = *(*(arg1 - 8) + 0x1d0)
    
    if (eax_15 != 0)
        int32_t ebx_4 = *(eax_15 + 8) - 1
        
        if (ebx_4 s>= 0)
            int32_t i_3 = ebx_4 + 1
            int32_t esi_2 = 0
            int32_t i_1
            
            do
                void* eax_19 = sub_41a0f4(*(*(arg1 - 8) + 0x1d0), esi_2)
                
                if (*(eax_19 + 0x5b) == 0 && 3 != *(eax_19 + 0x61))
                    return zx.d(var_8:3.b)
                
                esi_2 += 1
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)

var_8:3.b = 0
return zx.d(var_8:3.b)

// 函数: sub_408ec8
// 地址: 0x408ec8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 == 0)
    if (arg2 != 0)
        *(arg2 - 4)
    
    return 

if (arg2 == 0)
    *(arg1 - 4)
    return 

int32_t ebp = *(arg1 - 4)
int32_t ebx = *(arg2 - 4)
int32_t ecx_2 = (sbb.d(arg3, arg3, ebp u< ebx) & (ebp - ebx)) + ebx
int32_t esi = ecx_2 + arg1
void* edx = arg2 + ecx_2
int32_t i_1 = neg.d(ecx_2)

if (i_1 == 0)
    return 

int32_t i

do
    uint32_t eax_2 = zx.d(*(i_1 + esi))
    uint32_t ebx_1 = zx.d(*(i_1 + edx))
    
    if (eax_2 != ebx_1)
        if (eax_2.b == ebx_1.b)
        label_408f34:
            uint32_t eax_4 = eax_2 u>> 8
            uint32_t ebx_2 = ebx_1 u>> 8
            
            if (eax_4.b s>= 0x61 && eax_4.b s<= 0x7a)
                eax_4 -= 0x20
            
            if (ebx_2.b s>= 0x61 && ebx_2.b s<= 0x7a)
                ebx_2 -= 0x20
            
            if (eax_4 != ebx_2)
                break
        else
            eax_2:1.b = 0
            ebx_1:1.b = 0
            
            if (eax_2.b s>= 0x61 && eax_2.b s<= 0x7a)
                eax_2 -= 0x20
            
            if (ebx_1.b s>= 0x61 && ebx_1.b s<= 0x7a)
                ebx_1 -= 0x20
            
            if (eax_2 != ebx_1)
                break
            
            eax_2 = zx.d(*(i_1 + esi))
            ebx_1 = zx.d(*(i_1 + edx))
            
            if (eax_2:1.b != ebx_1:1.b)
                goto label_408f34
    
    i = i_1
    i_1 += 2
while (i s< 0xfffffffe)

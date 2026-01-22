// 函数: sub_406ce7
// 地址: 0x406ce7
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

*0x46000000 += 1
int32_t edx = arg4
char* eax = arg6
int32_t eflags
uint8_t* edi_1
uint8_t temp0
temp0, edi_1 = __insb(__return_addr, edx.w, eflags)
*edi_1 = temp0
bool c

if (not(c))
    bool c0
    bool c1
    bool c2
    bool c3
    eax.w = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
    *arg3 = not(test_bit(eax:1.b, 6))
    *arg2
    return edx

*eax += eax.b
*(arg2 - 0x75) += edx.b
eax.b = __in_al_dx(edx.w, eflags)
arg6 = arg5
arg5 = arg3
arg4 = arg1
arg3 = edi_1
*(arg2 - 1) = 0

if (edx s>= 0)
    int32_t i_1 = edx + 1
    char* ebx_1 = eax
    int32_t i
    
    do
        if (sub_406a3c(*(arg2[2] - 4), *ebx_1).b != 0)
            *(arg2 - 1) = 1
            break
        
        ebx_1 = &ebx_1[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

eax.b = *(arg2 - 1)
return eax

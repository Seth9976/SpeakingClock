// 函数: sub_4044a8
// 地址: 0x4044a8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t esi
int32_t var_8 = esi
int32_t edi
int32_t var_c = edi
int32_t ebp
int32_t var_10 = ebp
int32_t eax
eax.b = *(arg3 + 1)
void* edi_1 = eax + arg3 + 0xa
int32_t i_1 = *(edi_1 - 4)
int32_t result = 0
int32_t ecx = *(edi_1 - 8)
int32_t i

do
    int32_t ecx_1 = *(edi_1 + 4)
    
    if (ecx_1 s> result)
        sub_4027b0(result + arg2, result + arg1, ecx_1 - result)
    
    void** eax_2 = *(edi_1 + 4)
    char* edx_3 = **edi_1
    int32_t ecx_2
    ecx_2.b = *edx_3
    int32_t eax_4
    
    switch (ecx_2.b)
        case 0xa
            sub_403a40(eax_2 + arg1, *(eax_2 + arg2))
            eax_4 = 4
        case 0xb
            sub_404038(eax_2 + arg1, *(eax_2 + arg2))
            eax_4 = 4
        case 0xc
            sub_404490()
            eax_4 = 0x10
        case 0xd
            int32_t ecx_3
            ecx_3.b = edx_3[1]
            int32_t var_18_1 = *(ecx_3 + edx_3 + 2)
            sub_4045c4(**(ecx_3 + edx_3 + 0xa), eax_2 + arg2, eax_2 + arg1, *(ecx_3 + edx_3 + 6))
            eax_4 = var_18_1
        case 0xe
            int32_t ecx_6
            ecx_6.b = edx_3[1]
            int32_t ecx_7 = *(ecx_6 + edx_3 + 2)
            sub_4044a8(eax_2 + arg1, eax_2 + arg2, edx_3)
            eax_4 = ecx_7
        case 0xf
            sub_404f68(eax_2 + arg1, *(eax_2 + arg2))
            eax_4 = 4
        default
            if (ecx_2.b != 0x11)
                eax_2.b = 2
                noreturn sub_402710(eax_2) __tailcall
            
            sub_4048e8(eax_2 + arg1, *(eax_2 + arg2), edx_3)
            eax_4 = 4
    
    result = eax_4 + *(edi_1 + 4)
    edi_1 += 8
    i = i_1
    i_1 -= 1
while (i != 1)

if (ecx s<= result)
    return result

return sub_4027b0(result + arg2, result + arg1, ecx - result)

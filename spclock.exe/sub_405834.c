// 函数: sub_405834
// 地址: 0x405834
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

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
void* result = nullptr
int32_t ecx = *(edi_1 - 8)
int32_t i

do
    int32_t ecx_1 = *(edi_1 + 4)
    
    if (ecx_1 s> result)
        sub_4030d0(result + arg2, result + arg1, ecx_1.b - result.b, ecx)
    
    void** eax_2 = *(edi_1 + 4)
    char* edx_3 = **edi_1
    char ecx_2 = *edx_3
    int32_t eax_4
    
    switch (ecx_2)
        case 0xa
            sub_404bdc(eax_2 + arg1, *(eax_2 + arg2))
            eax_4 = 4
        case 0xb
            sub_4053a4(eax_2 + arg1, *(eax_2 + arg2))
            eax_4 = 4
        case 0xc
            sub_40581c()
            eax_4 = 0x10
        case 0xd
            int32_t ecx_3
            ecx_3.b = edx_3[1]
            int32_t var_18_1 = *(ecx_3 + edx_3 + 2)
            sub_405950(**(ecx_3 + edx_3 + 0xa), eax_2 + arg2, eax_2 + arg1, *(ecx_3 + edx_3 + 6))
            eax_4 = var_18_1
        case 0xe
            int32_t ecx_6
            ecx_6.b = edx_3[1]
            int32_t ecx_7 = *(ecx_6 + edx_3 + 2)
            sub_405834(ecx_7, ecx)
            eax_4 = ecx_7
        case 0xf
            sub_406568(eax_2 + arg1, *(eax_2 + arg2))
            eax_4 = 4
        default
            if (ecx_2 != 0x11)
                eax_2.b = 2
                noreturn sub_402ff8(eax_2) __tailcall
            
            sub_405eb4(eax_2 + arg1, *(eax_2 + arg2), edx_3)
            eax_4 = 4
    
    result = eax_4 + *(edi_1 + 4)
    edi_1 += 8
    i = i_1
    i_1 -= 1
while (i != 1)

if (ecx s<= result)
    return result

return sub_4030d0(result + arg2, result + arg1, ecx - result)

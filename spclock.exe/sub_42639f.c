// 函数: sub_42639f
// 地址: 0x42639f
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* eax
int32_t ecx
char ecx_1
int16_t edx_1
eax, edx_1, ecx_1 = (*ecx)()
*eax += eax.b
*(arg1 + 0x6f) += ecx_1
int32_t eflags
__outsb(edx_1, *arg2, arg2, eflags)
void* esi_1 = *(arg3 + (arg1 << 1) + 0x72) * 0x6d6f7246
int32_t var_4 = arg3
void* ebp = *(esi_1 + 0x64) * 0x776f
*(ebp - 0x75) += edx_1.b
eax.b = __in_al_dx(edx_1, eflags)
void* var_c = esi_1
int32_t var_10 = arg3

if (data_4b1a2b == 0)
    eax.b = 3
    struct _EXCEPTION_REGISTRATION_RECORD** eax_1
    void* ebp_1
    int32_t edi_1
    eax_1, ebp_1, edi_1 = sub_426124(eax.b, data_4b1a0c, sub_426437+5)
    data_4b1a0c = eax_1
    return data_4b1a0c(*(ebp_1 + 8), *(ebp_1 + 0xc), edi_1)

int32_t result = 0

if (((*(ebp + 0x10)).b & 3) == 0)
    int32_t esi_2 = *(ebp + 8)
    
    if (esi_2 s< 0)
        return result
    
    if (esi_2 s>= data_4b1a00(0) || *(ebp + 0xc) s< 0)
        return result
    
    if (data_4b1a00(1) s<= *(ebp + 0xc))
        return result

return 0x12340042

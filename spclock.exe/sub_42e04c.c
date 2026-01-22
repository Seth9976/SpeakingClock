// 函数: sub_42e04c
// 地址: 0x42e04c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t cs
uint32_t var_4 = zx.d(cs)
*(arg5 + (arg1 << 1) + 0x69)
char* edx = arg2 | *(arg5 + (arg1 << 1) + 0x69)
int32_t eflags
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg6, edx.w, eflags)
*edi = temp0
__outsd(edx.w, *(arg5 + 1), arg5 + 1, eflags)
void* const __return_addr_1 = __return_addr
arg4 = arg7
void* entry_ebx = arg8
edx = arg9
char* eax = arg11
void arg_1c
uint8_t** esp_1 = &arg_1c

if (arg5 == 0xffffffff)
    *eax = adc.b(*eax, eax.b, false)
    *eax |= eax.b
    *eax += eax.b
    eax.b <<= 0x42
else
    *eax += eax.b
    *edx += eax.b
    *eax += eax.b
    *(eax + edx + 0x40040) += entry_ebx:1.b
    *eax += eax.b
    esp_1 = 0x8004010
    *eax += eax.b
    *(arg4 - 0x1f3fffc0) += arg10.b
    edx = &edx[1]

*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
char temp5_1 = eax.b
eax.b += edx.b
bool cond:3_1 = temp5_1 == neg.b(edx.b)
void* ecx_5
void* esp_2
TEB* fsbase
char* ecx_2

if (temp5_1 != neg.b(edx.b) && arg10 != 1)
    int16_t* edi_2
    int16_t temp0_1
    temp0_1, edi_2 = __insd(var_4, edx.w, eflags)
    *edi_2 = temp0_1
    *esp_1
    __return_addr_1 = esp_1[1]
    esp_1[2]
    entry_ebx = esp_1[4]
    edx = esp_1[5]
    ecx_5 = esp_1[6]
    arg1 = esp_1[7]
    esp_2 = &esp_1[8]
label_42e0db:
    
    if (not(cond:3_1))
        int32_t esi_1 = *(entry_ebx + 0x74) * 0x5500408d
        arg4 = esp_2 - 1
        ecx_2 = nullptr
        *(esp_2 - 5) = 0
        *(esp_2 - 9) = 0
        *(esp_2 - 0xd) = 0
        *(esp_2 - 0x11) = 0
        *(esp_2 - 0x15) = entry_ebx
        *(esp_2 - 0x19) = esi_1
        esp_1 = esp_2 - 0x19
        
        if (edx.b != 0)
            esp_1 = &esp_1[-4]
            arg1 = sub_403fcc(0, edx)
        
        __return_addr_1 = arg1
        arg1 = nullptr
        goto label_42e101
else
    *eax += edx.b
    *eax += eax.b
    eax[0xb0004176] += edx:1.b
    *(__return_addr_1 + var_4 + 0x3ec00040) += entry_ebx:1.b
    void* eax_2
    eax_2:1.b = (&eax[2]):1.b + (&eax[2]).b
    *(eax_2 + 0x403f) += entry_ebx:1.b
    *(esp_1 + var_4) += entry_ebx.b
    arg1 = eax_2 + 2
    *arg1 += entry_ebx.b
    ecx_2 = arg10 - 2
    
    if (ecx_2 == 0)
        *ecx_2 += entry_ebx.b
        *(arg1 - 0x5d) += arg1:1.b
        arg3 = &ecx_2[2]
        char temp6_1 = arg1.b
        arg1.b += edx.b
        bool p_1 = unimplemented  {add al, dl}
        bool a_1 = unimplemented  {add al, dl}
        arg1:1.b = (temp6_1 + edx.b s< 0 ? 1 : 0) << 7 | (temp6_1 == neg.b(edx.b) ? 1 : 0) << 6
            | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2 | (temp6_1 + edx.b u< temp6_1 ? 1 : 0)
        *(arg1 - 0x60) += (arg3 + 1).b
        ecx_5 = arg3 + 2
        *arg1 += edx.b
        *(esp_1 - 4) = esp_1
        esp_2 = esp_1 - 4
        void* const __return_addr_2 = __return_addr_1
        __return_addr_1 += 1
        cond:3_1 = __return_addr_2 == 0xffffffff
        *(arg4 + 0x46)
        goto label_42e0db
    
label_42e101:
    *(esp_1 - 4) = arg4
    *(esp_1 - 8) = j_sub_40443c
    *(esp_1 - 0xc) = *(fsbase + arg1)
    *(fsbase + arg1) = esp_1 - 0xc
    sub_403c38(ecx_2, 0)
    *(esp_1 - 4) = 0
    *(esp_1 - 8) = &data_42a100
    sub_406a30(data_4ac258, arg4 - 4)
    void* ebp_1 = sub_42e264(__return_addr_1, &data_42e1f0, *(arg4 - 4))
    *(esp_1 - 0xc) = 0
    *(esp_1 - 0x10) = &data_42a100
    esp_2 = esp_1 - 0x10
    sub_406a30(data_4ac040, ebp_1 - 8)
    ecx_5 = *(ebp_1 - 8)
void* ebp_3 = sub_42e264(__return_addr_1, &data_42e1fc, ecx_5)
*(esp_2 - 4) = 0
*(esp_2 - 8) = 0x42a38c
sub_406a30(data_4ac03c, ebp_3 - 0xc)
void* ebp_4 = sub_42e264(__return_addr_1, &data_42e208, *(ebp_3 - 0xc))
*(esp_2 - 0xc) = 0
*(esp_2 - 0x10) = 0x42a244
sub_406a30(data_4ac034, ebp_4 - 0x10)
void* ebp_5 = sub_42e264(__return_addr_1, &data_42e214, *(ebp_4 - 0x10))
*(esp_2 - 8)
fsbase->NtTib.ExceptionList = *(esp_2 - 0x10)
*(esp_2 - 8) = sub_42e1c8
return sub_404bac(ebp_5 - 0x10, 4)

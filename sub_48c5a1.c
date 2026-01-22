// 函数: sub_48c5a1
// 地址: 0x48c5a1
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx_5
int16_t ds
ecx_5, ds = __lds_gprz_memp(*arg1)
char ecx = ecx_5.b + (*0x444d4c54).b
bool c = ecx_5 + *0x444d4c54 u< ecx_5
char* entry_ebx
char* var_4 = entry_ebx
int32_t eflags

if (arg3 != 0xffffffff)
    uint8_t* edi
    uint8_t temp0_1
    temp0_1, edi = __insb(arg5, arg2, eflags)
    *edi = temp0_1
    void** gsbase
    *(gsbase + arg1) += arg1
    *arg1 += arg1.b
    *edi += arg1.b
    *arg1 += arg1.b
    char temp4 = *(arg1 + 0xd0048c5)
    *(arg1 + 0xd0048c5) += arg1:1.b
    
    if (temp4 == neg.b(arg1:1.b))
        __outsb(arg2, *arg4, arg4, eflags)
        *(arg3 + 0x6f)
        bool c_2 = unimplemented  {imul esp, dword [ebp+0x6e], 0x8}
        *(arg3 + 0x6f)
        
        if (c_2)
            undefined
        
        jump(0x48c621)
    
    *(arg7 + 0x65)
    *(arg7 + 0x65)
    bool c_1 = unimplemented  {imul esi, dword [ebx+0x65], 0x6e6e4964}
    
    if (c_1)
        jump(sub_48c588+0x54)
    
    jump(sub_48c588+0x47)

char** var_8 = &var_4

if (not(c))
    int16_t temp0_2
    temp0_2, arg5 = __insd(arg5, arg2, eflags)
    *arg5 = temp0_2
    char* var_c_1 = entry_ebx
    void* eax_1 = arg1 + *arg1
    *eax_1 += eax_1.b
    eax_1.b &= 0xc6
    char temp6_1 = *(eax_1 - 1)
    *(eax_1 - 1) += ecx
    
    if (temp6_1 + ecx u< temp6_1)
        __outsd(arg2, *(arg4 + 1), arg4 + 1, eflags)
        
        if (temp6_1 == neg.b(ecx))
            jump(sub_48c683+0x3c)
        
        jump(sub_48c624+0x27)
    
    *entry_ebx += (eax_1 - 2).b
    arg1 = (eax_1 - 2) | 0x444d4c54

uint8_t* edi_3
uint8_t temp0_3
temp0_3, edi_3 = __insb(arg5, arg2, eflags)
*edi_3 = temp0_3
int32_t* esp_5 = *(edi_3 + 0x6e) * 0x746e656d
*arg1 += arg1
*arg1 += arg1.b
*arg1 += ecx + 1
*arg1 += arg1.b
char temp5 = *(arg1 + 0x90048c6)
*(arg1 + 0x90048c6) += ecx + 1
*esp_5
uint16_t* esi_4 = esp_5[1]
esp_5[2]
esp_5[4]
int16_t edx_1 = (esp_5[5]).w
esp_5[6]
esp_5[7]
esp_5[7] = &esp_5[8]
__outsd(edx_1, *esi_4, esi_4, eflags)

if (not(add_overflow(temp5, ecx + 1)))
    if (temp5 == neg.b(ecx + 1))
        jump(sub_48c683+0x3b)
    
    jump(sub_48c683+0x30)

esp_5[7]
uint16_t* esi_6 = esp_5[8]
esp_5[9]
esp_5[0xb]
int32_t edx_2 = esp_5[0xc]
esp_5[0xd]
esp_5[0xe]
__outsd(edx_2.w + 1, *esi_6, esi_6, eflags)

if (edx_2 == 0xffffffff)
    jump(sub_48c73e+0x37)

jump(sub_48c683+0x7e)

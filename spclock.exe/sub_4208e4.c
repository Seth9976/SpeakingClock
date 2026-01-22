// 函数: sub_4208e4
// 地址: 0x4208e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t eax_1 = *(arg1 + 0x20)
int32_t eax_3 = *(arg1 + 0x28)
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
arg2[7].w |= 4
int32_t i_4
void* edx
i_4, edx = sub_423974(arg2)

if (i_4 - 1 s>= 0)
    int32_t i_2 = i_4
    int32_t ebx_1 = 0
    int32_t i
    
    do
        void* eax_7
        eax_7, edx = sub_423948(arg2, ebx_1)
        
        if ((*(eax_7 + 0x24) & 4) != 0)
            void* eax_9
            eax_9, edx = sub_423948(arg2, ebx_1)
            *(eax_9 + 0x1c) |= 4
        
        ebx_1 += 1
        i = i_2
        i_2 -= 1
    while (i != 1)

if (*(arg1 + 0x30) != 0)
    int32_t* var_30_1 = &var_4
    *(arg1 + 0x20) = sub_420894(arg2[2], edx)

if (*(arg1 + 0x42) != 0)
    int32_t* ebx_2 = *(arg1 + 0x20)
    char eax_17
    
    if (ebx_2 != 0)
        eax_17 = sub_403df4(ebx_2, &data_418674)
    
    if (ebx_2 == 0 || eax_17 != 0)
        int32_t var_18 = *(arg1 + 0x20)
        *(arg1 + 0x44)
        (*(arg1 + 0x40))(arg1 + 0x28, &var_18, arg2[2])
        *(arg1 + 0x20) = var_18

(*(*arg2 + 0x24))()
arg2[7].w &= 0xfffb
int32_t esi_4 = sub_423974(arg2) - 1

if (esi_4 s>= 0)
    int32_t i_3 = esi_4 + 1
    int32_t ebx_4 = 0
    int32_t i_1
    
    do
        if ((*(sub_423948(arg2, ebx_4) + 0x24) & 4) != 0)
            void* eax_33 = sub_423948(arg2, ebx_4)
            *(eax_33 + 0x1c) &= 0xfffb
        
        ebx_4 += 1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_420a32
*(arg1 + 0x20) = eax_1
*(arg1 + 0x28) = eax_3
return arg1

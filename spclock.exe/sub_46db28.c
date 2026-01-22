// 函数: sub_46db28
// 地址: 0x46db28
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
sub_45b310(arg1)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0xac] = 0
arg1[0xad] = 0
arg1[0xae] = 0

if (sub_403bf4(*arg1) == 0x46a498)
    arg1[0x9f].b = data_4af7f1 ^ 1

char ebx_2
void* ebp_1
ebx_2, ebp_1 = sub_45a938(arg1, arg2)
int32_t eax_11 = **(*(ebp_1 - 4) + 0x2a4)

if (eax_11 != 0 && *(*(ebp_1 - 4) + 0x2b8) s> 0)
    if ((*(*(ebp_1 - 4) + 0x8c) & 0x10) != 0 && eax_11 != *(data_4b1ce4 + 0x40))
        void* esi_2 = *(*(ebp_1 - 4) + 0x68)
        sub_42b558(esi_2, 
            MulDiv(sub_42b550(esi_2), *(data_4b1ce4 + 0x40), **(*(ebp_1 - 4) + 0x2a4)))
    
    **(*(ebp_1 - 4) + 0x2a4) = *(data_4b1ce4 + 0x40)
    int32_t nNumerator = sub_46e15c(*(ebp_1 - 4))
    int32_t eax_26 = *(*(ebp_1 - 4) + 0x2b8)
    
    if (nNumerator != eax_26)
        ebx_2 = 1
        sub_46d084(*(ebp_1 - 4), nNumerator, eax_26)
        sub_45728c(*(ebp_1 - 4), nNumerator, *(*(ebp_1 - 4) + 0x2b8))
        sub_45f340(*(ebp_1 - 4), nNumerator, *(*(ebp_1 - 4) + 0x2b8))
        
        if ((*(*(ebp_1 - 4) + 0x8c) & 4) != 0)
            *(*(ebp_1 - 4) + 0x2b0) =
                MulDiv(*(*(ebp_1 - 4) + 0x2b0), nNumerator, *(*(ebp_1 - 4) + 0x2b8))
        
        if ((*(*(ebp_1 - 4) + 0x8c) & 8) != 0)
            *(*(ebp_1 - 4) + 0x2b4) =
                MulDiv(*(*(ebp_1 - 4) + 0x2b4), nNumerator, *(*(ebp_1 - 4) + 0x2b8))
        
        if ((*(*(ebp_1 - 4) + 0x8c) & 0x20) != 0)
            *(*(ebp_1 - 4) + 0x242) =
                MulDiv(*(*(ebp_1 - 4) + 0x242), nNumerator, *(*(ebp_1 - 4) + 0x2b8))
            *(*(ebp_1 - 4) + 0x246) =
                MulDiv(*(*(ebp_1 - 4) + 0x246), nNumerator, *(*(ebp_1 - 4) + 0x2b8))

int32_t eax_56 = *(*(ebp_1 - 4) + 0x2b0)

if (eax_56 s> 0)
    sub_457164(*(ebp_1 - 4), eax_56)

int32_t eax_59 = *(*(ebp_1 - 4) + 0x2b4)

if (eax_59 s> 0)
    sub_4571a8(*(ebp_1 - 4), eax_59)

*(*(ebp_1 - 4) + 0x8c) = 0

if (ebx_2 == 0)
    sub_46d084(*(ebp_1 - 4), 1, 1)
    sub_45f340(*(ebp_1 - 4), 1, 1)

sub_458ac8(*(ebp_1 - 4), 0)
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_46ddac
return sub_45b318(*(ebp_1 - 4))

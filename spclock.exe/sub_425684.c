// 函数: sub_425684
// 地址: 0x425684
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t* var_8 = nullptr
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_11 = 0

if (arg3 != 0)
    sub_404bdc(arg1 + 0x20, arg3)

int32_t ebx_2 = *(*(arg1 + 0x10) + 8) - 1

if (ebx_2 s>= 0)
    int32_t i_1 = ebx_2 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        int32_t* eax_4 = *(sub_41a0f4(*(arg1 + 0x10), esi_1) + 4)
        sub_406550(&var_8)
        esp = &ExceptionList
        
        if (sub_40eb24(eax_4, sub_42573c, &var_8) != 0)
            esp = &var_8
            char var_11_1 = (*(*var_8 + 0x40))(arg4, zx.d(arg5))
            break
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_42572f
int32_t** result = &var_8
sub_406550(result)
return result

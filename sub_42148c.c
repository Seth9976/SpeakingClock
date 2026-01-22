// 函数: sub_42148c
// 地址: 0x42148c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = nullptr
int32_t* var_c = nullptr
int32_t ebx
int32_t var_10 = ebx
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
ebx.b = *(arg1 - 4) == 0

if (*(*(arg1 + 8) - 9) != 0)
    sub_416dd4(*(*(arg1 + 8) - 0x10), *(*(arg1 + 8) - 8), &var_8)
    ebx.b = *(arg1 - 4) == var_8
    
    if (ebx.b == 0)
        sub_406550(&var_c)
        
        if (sub_40eb24(var_8, 0x421548, &var_c) != 0)
            void* eax_16
            void* ecx_3
            eax_16, ecx_3 = (*(*var_c + 0xc))(*(arg1 + 8))
            sub_421374(eax_16, *(arg1 - 8), ecx_3)
            esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_42153f
sub_406550(&var_c)
int32_t** result = &var_8
sub_406550(result)
return result

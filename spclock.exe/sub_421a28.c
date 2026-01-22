// 函数: sub_421a28
// 地址: 0x421a28
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax
int32_t ecx
eax, ecx = sub_4198dc(arg1)
char eax_2

if (eax != 0)
    eax_2, ecx = eax()
    esp = &var_8

if (eax == 0 || eax_2 == 0)
    sub_420fbc(*(arg3 - 4), arg2, ecx)
else
    sub_420ef8(*(arg3 - 4), var_8)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_421a8f
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result

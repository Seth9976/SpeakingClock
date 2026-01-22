// 函数: sub_4679b8
// 地址: 0x4679b8
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

if (arg2 != 0)
    int32_t eax_1 = (*(*arg2 + 0x20))()
    esp = &var_8
    int32_t eax_3
    
    if (eax_1 s>= *(arg1 + 0x30))
        eax_3 = (*(*arg2 + 0x2c))()
    
    if (eax_1 s< *(arg1 + 0x30) || eax_3 s< *(arg1 + 0x34))
        sub_406a30(data_4ac0dc, &var_8)
        int32_t edx_3
        edx_3.b = 1
        sub_40451c(sub_40ceb0(sub_417654+0x48, edx_3, var_8))

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_467a2b
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result
